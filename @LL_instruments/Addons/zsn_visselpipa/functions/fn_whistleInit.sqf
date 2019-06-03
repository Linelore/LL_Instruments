#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["KM Instraments", "whistle_dot", "Blow Whistle (Dot)", {[player] spawn zsn_whistledot}, {}, [DIK_O,[true,false,false]]] call cba_fnc_addKeybind;

["KM Instraments", "whistle_dash", "Blow Whistle (Dash)", {[player] spawn zsn_whistledash}, {}, [DIK_O,[false,true,false]]] call cba_fnc_addKeybind;

zsn_whistleblow = 
{
   params ["_unit"];

   _sounds = ["zsn_whistleblow2","zsn_whistleblow3","zsn_whistleblow4"];
   [_unit,[_sounds select floor random count _sounds,2000,1]] remoteExec ["say3d"];
};
zsn_whistleblast = 
{
   params ["_unit"];

   _sounds = ["zsn_whistleblast2","zsn_whistleblast3","zsn_whistleblast4"];
   [_unit, [_sounds select floor random count _sounds,2000,1]] remoteExec ["say3d"];
};
zsn_whistledot = 
{
   params ["_unit"];

   if ('ZSN_Whistle' in (items _unit)) then {[_unit, ["zsn_whistledot1",2000,1]] remoteExec ["say3d"];};
};
zsn_whistledash = 
{
   params ["_unit"];

   if ('ZSN_Whistle' in (items _unit)) then {[_unit, ["zsn_whistledash1",2000,1]] remoteExec ["say3d"];};
};