/* Shows the selected model preview with its item image and model-specific scale and offset, then resets its animation counters. */
#include "basetypes.h"
typedef struct { f32 x,y,z; } Vec3;
typedef struct { char pad0[0x10]; unsigned char alpha; char pad11[0x27]; s32 image; } Item;
typedef struct { char pad0[0x20]; void *window; char pad24[0x78]; s32 model, timer, state, unused, image; char padb0[0xD8]; s32 selected; } Screen;
extern Screen *D_800E5830;
extern f32 D_800E1F50, D_800E1F54, D_800E1F58[], D_800E1F60[], D_800E1F68;
extern Item *func_8040ECB0(void *, s32);
extern void func_8040E958(Item *,s32);
extern void func_80439D3C(void *,s32,Vec3,Vec3);
extern void func_80439DC0(void *,Vec3);
extern void func_80439E10(void *,Vec3);
extern void func_80439E60(void *,s32);
static inline f32 read_float(f32 *v) { return *v; }
void func_804387F4(void) {
 Vec3 scale,offset,angle,position;
 s32 index, displacement, model;
 Item *item;
 Screen *slot;
 index=D_800E5830->selected;
 displacement=index*20;
 model=((Screen *)((char *)D_800E5830+displacement))->model;
 if(model>=0) {
  item=func_8040ECB0(D_800E5830->window,0x282);
  func_8040E958(item,1);
  item->alpha=0xAF;
  item->image=((Screen *)((char *)D_800E5830+displacement))->image;
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
  func_80439D3C((char *)D_800E5830+0xC8,0,scale,offset);
  func_80439DC0((char *)D_800E5830+0xC8,angle);
  func_80439E10((char *)D_800E5830+0xC8,position);
  func_80439E60((char *)D_800E5830+0xC8,model);
  slot=(Screen *)((char *)D_800E5830+index*20);
  slot->timer=0;slot->state=10;
 }
}
