//
//      Name: logKill
//      Desc: Handles a successful kill message recieved from client
//      Return: None
//

private["_type", "_key", "_value"];

_victim = [_this,0,"",[""]] call bis_fnc_param;
_killer = [_this,1,"",[""]] call bis_fnc_param;
_killersVehicle = [_this,2,[],[[]]] call bis_fnc_param;
_value = [_this,3,0,[0]] call bis_fnc_param;
_method = [_this,4,"",[""]] call bis_fnc_param;

if (_victim == "" || _killer == "") exitWith {};

if (isNil "GW_MESSAGELOGGED") then { GW_MESSAGELOGGED = time - 5; };
if (time < (GW_MESSAGELOGGED + 3)) exitWith {};
GW_MESSAGELOGGED = time;

// What dealt the final blow?
_str = ([_method, GW_LOOT_LIST] call getData) select 1;
_method = if (!isNil "_str") then { _str } else { "" };

_method = if (count toArray _method > 0) then { (format["'s %1", _method]) } else { "." };
_string = format["%1 was destroyed by %2%3", _victim, _killer, _method];
GW_SERVER_LASTKILL = format['%1/%2/%3', _victim, _killer, _method];

// Log the message on all clients
diag_log _string;
systemChat _string;	

pubVar_systemChat = _string;
publicVariable "pubVar_systemChat";

// Give the killer his cash if we can find him
_killerTarget = [_killer] call findUnit;

if (!isNil "_killerTarget") then {

    [       
        [
            _value
        ],
        "receiveMoney",
        _killerTarget,
        false 
    ] call BIS_fnc_MP;  
    
};	

// If leaderboard is active
if (GW_LEADERBOARD_ENABLED) then {

	_killerId = getPlayerUID _killerTarget;
	[_killerId, _killer, (_killersVehicle select 0), (_killersVehicle select 1), [1, 0, _value]] spawn addToLeaderboard;

};