/* Shows the selected model preview with its item image and model-specific scale and offset, then resets its animation counters. */
#include "basetypes.h"
#include "shared/model_preview_screen.h"
extern ModelPreviewScreen *D_800E5830;
extern f32 D_800E1F50, D_800E1F54, D_800E1F58[], D_800E1F60[], D_800E1F68;
extern MenuWidget *func_8040ECB0(void *, s32);
extern void func_8040E958(MenuWidget *,s32);
extern void func_80439D3C(void *,s32,Vec3,Vec3);
extern void func_80439DC0(void *,Vec3);
extern void func_80439E10(void *,Vec3);
extern void func_80439E60(void *,s32);
static inline f32 read_float(f32 *v) { return *v; }

#if defined(VERSION_DE)
enum { MENU_804387F4_642 = 638 };
#elif defined(VERSION_EU_X)
enum { MENU_804387F4_642 = 647 };
#else
enum { MENU_804387F4_642 = 642 };
#endif

void func_804387F4(void) {
 Vec3 scale,offset,angle,position;
 s32 index, displacement, model;
 MenuWidget *item;
 ModelPreviewScreen *slot;
 index=D_800E5830->selected;
 displacement=index*20;
 model=D_800E5830->rows[index].model;
 if(model>=0) {
  item=func_8040ECB0(D_800E5830->window,MENU_804387F4_642);
  func_8040E958(item,1);
  item->alpha=0xAF;
  item->image=D_800E5830->rows[index].image;
  if ((u32)(model-0x1389)<2U || model==0x139F || model==0x13A0 || model==0x13C1 || model==0x1398 || model==0x13BD) {
   scale.x=D_800E1F50; scale.y=D_800E1F50; scale.z=D_800E1F50;
  } else { scale.x=D_800E1F54; scale.y=D_800E1F54; scale.z=D_800E1F54; }
  angle.x=0;angle.y=0;angle.z=0;
  position.x=0;position.y=read_float(D_800E1F58);position.z=0;
  offset.x=0;offset.y=read_float(D_800E1F58+1);offset.z=read_float(D_800E1F60);
  if (model==0x1390 || model==0x1392) {
   offset.x=0;offset.y=read_float(D_800E1F60+1);offset.z=read_float(D_800E1F60);
   scale.x=D_800E1F68;scale.y=D_800E1F68;scale.z=D_800E1F68;
  }
  func_80439D3C(&D_800E5830->modelWorkspace,0,scale,offset);
  func_80439DC0(&D_800E5830->modelWorkspace,angle);
  func_80439E10(&D_800E5830->modelWorkspace,position);
  func_80439E60(&D_800E5830->modelWorkspace,model);
  D_800E5830->rows[index].timer=0;
  D_800E5830->rows[index].state=10;
 }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCBD0_4 = 0.300000012f;
const float unbake_rodata_800DCBD4_4 = 0.00899999961f;
const float unbake_rodata_800DCBD8_4 = 3.0f;
const float unbake_rodata_800DCBDC_4 = (-5.0f);
const float unbake_rodata_800DCBE0_4 = (-100.0f);
const float unbake_rodata_800DCBE4_4 = (-30.0f);
const float unbake_rodata_800DCBE8_4 = 0.300000012f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1F50_4 = 0.300000012f;
const float unbake_rodata_800E1F54_4 = 0.00899999961f;
const float unbake_rodata_800E1F58_4 = 3.0f;
const float unbake_rodata_800E1F5C_4 = (-5.0f);
const float unbake_rodata_800E1F60_4 = (-100.0f);
const float unbake_rodata_800E1F64_4 = (-30.0f);
const float unbake_rodata_800E1F68_4 = 0.300000012f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE5A0_4 = 0.300000012f;
const float unbake_rodata_800EE5A4_4 = 0.00899999961f;
const float unbake_rodata_800EE5A8_4 = 3.0f;
const float unbake_rodata_800EE5AC_4 = (-5.0f);
const float unbake_rodata_800EE5B0_4 = (-100.0f);
const float unbake_rodata_800EE5B4_4 = (-30.0f);
const float unbake_rodata_800EE5B8_4 = 0.300000012f;
#endif
