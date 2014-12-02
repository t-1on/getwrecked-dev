//
//      Name: detonateTargbets
//      Desc: Detonates all explosives current deployed
//      Return: None
//

private ['_vehicle', '_dir', '_pos', '_alt', '_vel'];


_vehicle = [_this,0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};

playSound3D ["a3\sounds_f\weapons\other\sfx9.wss", _vehicle, false, (ASLtoATL visiblePositionASL _vehicle), 2, 1, 20];

_targets = _vehicle getVariable ["GW_detonateTargets", []];
if (count _targets == 0) exitWith {};

{
	_x setVariable ["triggered", true];
	false
} count _targets > 0;

_vehicle setVariable ["GW_detonateTargets", []];
