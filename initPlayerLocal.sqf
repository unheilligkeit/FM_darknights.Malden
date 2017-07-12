

["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;

[] spawn TFW_fnc_fpszeus;

waitUntil {!(isNull (findDisplay 46))};
["intro.ogv"] call BIS_fnc_playVideo;



if (true) exitWith {};