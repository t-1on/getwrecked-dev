//
//      Name: nitroPad
//      Desc: Boosts a vehicle if close enough to a valid pad
//      Return: None
//

private ["_pad", "_vehicle"];

_pad = [_this,0, objNull, [objNull]] call BIS_fnc_param;
_vehicle = [_this,1, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle || isNull _pad || (player == _vehicle)) exitWith {};

_status = _vehicle getVariable ["status", []];

if ("boost" in _status) exitWith {};

[       
    [
        _vehicle,
        ['boost'],
        3
    ],
    "addVehicleStatus",
    _vehicle,
    false 
] call BIS_fnc_MP;  

_pb = _vehicle call BIS_fnc_getPitchBank;

_dir = [getDir _pad] call flipDir; 
_maxSpeed = 100;
_vel = velocity _vehicle;

[
	[
		_vehicle,
		3
	],
	"nitroEffect"
] call BIS_fnc_MP;

for "_i" from 1 to _maxSpeed step 0.1 do {

	_v = [0,0,0] distance (velocity _vehicle);
	if (_v > _maxSpeed) exitWith {};
	_vehicle setVelocity [(_vel select 0)+(sin _dir*_i*_i),(_vel select 1)+(cos _dir*_i*_i),(_vel select 2) + (_i / 3)];
	addCamShake [0.2 * _i, .3 * _i, 20 * _i];

};

