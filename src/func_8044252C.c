/* Adjusts a value from controller input and clamps or wraps it between its limits. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char pad[0x20]; s32 unk20; } Menu;
s32 func_8026439C(s32);                             /* extern */
s32 func_802643A8(s32);                             /* extern */
s32 func_802643C0(s32);                             /* extern */

s32 func_8044252C(Menu *menu,s32 value,s32 step,s32 minimum,s32 maximum,s32 wrap) {
 if(func_802643A8(menu->unk20))value-=step;
 if(func_802643C0(menu->unk20)||func_8026439C(menu->unk20))value+=step;
 if(value<minimum) {
  value=minimum;if(wrap)value=maximum;
 } else if(value>maximum) {
  value=maximum;if(wrap)value=minimum;
 }
 return value;
}
