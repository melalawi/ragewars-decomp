/* Draws a menu model with screen-scaled translation, animated and fixed rotations, restoring the render-state flag afterward; the unsigned offset-to-pointer cast preserves matrix-address scheduling. */
#include "basetypes.h"
typedef struct { f32 x,y,z; } Vec;
typedef struct { f32 m[16]; } Matrix;
typedef struct { u32 w0,w1; } Gfx;
typedef struct { s32 unused; Vec scale, position, rotation, speed; s32 model; char matrices[128]; s32 flags; } Item;
typedef struct { char p0[0x160]; Matrix camera; char p1[0x29C-0x1A0]; f32 width,height; char p2[0x380-0x2A4]; Matrix matrices[2]; } Screen;
extern Screen D_801450C8[]; extern Gfx *D_80110634;
extern s32 D_800D15D0, D_800D297C, D_800E28D0;
extern char D_8011FE88, D_800D0EF8;
extern f32 D_800E1F80, D_800E1F84, D_800E1F88;
extern void func_804171B8(s32); extern void func_8026D844(void);
extern void func_80272908(Matrix *,Vec *,Vec *);
extern void func_80272CD0(Matrix *,Vec);
extern void func_80273860(Matrix *,f32); extern void func_80273A34(Matrix *,f32); extern void func_80273C08(Matrix *,f32);
extern void func_802734EC(Matrix *,f32,f32,f32); extern void func_80273DDC(Matrix *);
extern s32 func_802A2934(void); extern void func_802702EC(Matrix *,void *);
extern s32 func_8028C174(void *,s32); extern void func_8026D980(void); extern void func_8026D9D0(void);
extern void func_8026DF30(s32,void *,void *,s32,s32);
void func_804399D0(Item *item) {
 Matrix matrix;
 Vec position, transformed, scale;
 s32 model;
 s32 saved;
 f32 time, ratio;
 saved=D_800D15D0; D_800D15D0=0;
 if (item->model != -1) {
  func_804171B8(0x33335);
  {Gfx *g=D_80110634++;g->w0=0xE7000000;g->w1=0;}
  {Gfx *g=D_80110634++;g->w0=0xE3000A01;g->w1=0x100000;}
  {Gfx *g=D_80110634++;g->w0=0xE3000C00;g->w1=0x80000;}
  {Gfx *g=D_80110634++;g->w0=0xE3001201;g->w1=0x2000;}
  func_8026D844();
  {Gfx *g=D_80110634++; char *address=(char *)(u32)(D_800D297C<<6); address+=0x380; address+=(u32)D_801450C8; g->w0=0xDA380007;g->w1=(u32)address;}
  position=item->position;
  func_80272908(&D_801450C8[0].camera,&position,&transformed);
  func_80272CD0(&matrix,transformed);
  time=func_802A2934();
  if(item->speed.x!=0.0f)func_80273860(&matrix,time*item->speed.x*D_800E1F80);
  if(item->speed.y!=0.0f)func_80273A34(&matrix,time*item->speed.y*D_800E1F84);
  if(item->speed.z!=0.0f)func_80273C08(&matrix,time*item->speed.z*D_800E1F88);
  if(item->rotation.x!=0.0f)func_80273860(&matrix,item->rotation.x*(*(&D_800E1F88+1)));
  if(item->rotation.y!=0.0f)func_80273A34(&matrix,item->rotation.y*(*(&D_800E1F88+2)));
  if(item->rotation.z!=0.0f)func_80273C08(&matrix,item->rotation.z*(*(&D_800E1F88+3)));
  ratio=D_801450C8[0].width/(f32)D_800E28D0;
  scale.x=item->scale.x*ratio;
  scale.z=item->scale.z*ratio;
  scale.y=item->scale.y*(D_801450C8[0].height/(f32)*(&D_800E28D0+1));
  func_802734EC(&matrix,scale.x,scale.y,scale.z);func_80273DDC(&matrix);
  func_802702EC(&matrix,(char *)item+((D_800D297C<<6)+0x38));
  model=func_8028C174(&D_8011FE88,item->model);func_8026D980();
  func_8026DF30(model,(char *)item+((D_800D297C<<6)+0x38),&D_800D0EF8,0,item->flags);
  func_8026D9D0();
 }
 D_800D15D0=saved;
}
