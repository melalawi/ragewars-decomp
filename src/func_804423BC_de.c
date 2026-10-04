#include "common/types.h"
#include "span_16E000/code_8044239C.h"
#include "types.h"
/* Adjusts a value from controller input and clamps or wraps it between its limits. */
#define NULL ((void *)0)

s32 func_8026437C_de(s32);                             /* extern */
s32 func_80264388_de(s32);                             /* extern */
s32 func_802643A0_de(s32);                             /* extern */

s32 func_804423BC_de(func_8022A404_S1 *menu,s32 value,s32 step,s32 minimum,s32 maximum,s32 wrap) {
 if(func_80264388_de(menu->unk20))value-=step;
 if(func_802643A0_de(menu->unk20)||func_8026437C_de(menu->unk20))value+=step;
 if(value<minimum) {
  value=minimum;if(wrap)value=maximum;
 } else if(value>maximum) {
  value=maximum;if(wrap)value=minimum;
 }
 return value;
}
