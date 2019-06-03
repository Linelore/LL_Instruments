#include "\a3\editor_f\Data\Scripts\dikCodes.h"

/*["KM Instraments", "meme_1", "Meme 1", {[player] spawn in_bugle_bp}, {}, [DIK_I,[true,false,false]]] call cba_fnc_addKeybind;*/

in_bugle_assamble = 
{
   params ["_unit"];

   _sound = "in_bugle_assamble1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
in_bugle_closerank = 
{
   params ["_unit"];

   _sound = "in_bugle_closerank1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
in_bugle_extend = 
{
   params ["_unit"];

   _sound = "in_bugle_extend1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
in_bugle_fire = 
{
   params ["_unit"];

   _sound = "in_bugle_fire1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
in_bugle_taps = 
{
   params ["_unit"];

   _sound = "in_bugle_taps1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
/*
in_bugle_bp = 
{
   params ["_unit"];

   if ('in_Bugle' in (items _unit)) then {[_unit, ["n_Bp1",2000,1]] remoteExec ["say3d"];};
};*/