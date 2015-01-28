//
//      Name: initTerminals
//      Desc: Add vehicle service actions to terminals
//      Return: None
//

private ['_obj', '_pad', '_p'];

_obj = _this select 0;
_var = _this select 1;

_obj setVariable ['isTerminal', _var];

// Only server should disable simulation/add textures
if (!isServer) exitWith {};

_obj enableSimulationGlobal false;
_obj addEventHandler['handleDamage', { false }];

if (typeOf _obj == "SignAd_Sponsor_ARMEX_F" && typename _var == "OBJECT") exitWith {
	_obj setObjectTextureGlobal [0, "client\images\signage\vehicleserviceterminal.jpg"]; 
	_p = (ASLtoATL getPosASL _obj);
	_p set [2, -0.7]; 
	_obj setPos _p;
};

if (typeOf _obj == "SignAd_Sponsor_ARMEX_F" && typename _var == "STRING") exitWith {
	_obj setObjectTextureGlobal [0, format["client\images\signage\%1.jpg",_var] ]; 
};
