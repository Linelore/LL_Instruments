#include "\a3\editor_f\Data\Scripts\dikCodes.h"

in_goneaway = 
{
   params ["_unit"];

   _sound = "in_goneaway1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
in_doublingthehorn = 
{
   params ["_unit"];

   _sound = "in_doublingthehorn1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
in_goinghome = 
{
   params ["_unit"];

   _sound = "in_goinghome1";
   [_unit, [_sound,2000,1]] remoteExec ["say3d"];
};
