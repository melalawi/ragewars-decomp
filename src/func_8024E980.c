/* Initializes a spatial object from its descriptor, resolves its model and sets bounds. */
#include "basetypes.h"
#define NULL ((void *)0)
#define M(t,p,o) (*(t *)((char *)(p)+(o)))
typedef struct { f32 x,y,z; } Vec;
typedef struct { Vec a,b; } Bounds;
typedef struct { s32 id; Vec position; f32 radius; u16 kind,index,flags,extra,model; s8 angle; } Init;
extern f32 D_800C8E70[],D_800C8E78[];
extern char D_8011F448[],D_8011FE88[];
extern Bounds D_800D0EE0;
void *func_8028CF48(void *,u16);
f32 func_8024D274(void *);
void func_8024E980(void *arg0,Init *arg1,s32 arg2,void *arg3) {
 Vec center;
 f32 angle;
 u16 flags;
 M(u8,arg0,0)=3;
 M(u16,arg0,4)=arg1->kind;
 M(s32,arg0,0x1C0)=arg1->id;
 M(Vec,arg0,8)=arg1->position;
 M(f32,arg0,12)+=10.239999771118164f;
 angle=0.024736950173974037f*arg1->angle;
 M(f32,arg0,0x194)=0.3499999940395355f;
 M(s32,arg0,0x198)=0;
 M(f32,arg0,0x174)=angle;
 M(f32,arg0,0x17C)=arg1->position.x-arg1->radius;
 M(f32,arg0,0x180)=arg1->position.y-arg1->radius;
 M(f32,arg0,0x184)=arg1->position.z-arg1->radius;
 M(f32,arg0,0x188)=arg1->position.x+arg1->radius;
 M(f32,arg0,0x18C)=arg1->position.y+arg1->radius;
 M(f32,arg0,0x190)=arg1->position.z+arg1->radius;
 M(s32,arg0,0x50)=arg2;
 M(s32,arg0,0x54)=-1;
 M(s32,arg0,0x58)=0;
 M(s32,arg0,0x5C)=0;
 if(arg1->model==0xFFFF) M(void *,arg0,0x18)=D_8011F448;
 else M(void *,arg0,0x18)=func_8028CF48(D_8011FE88,arg1->model);
 if(arg1->index==0xFFFF) M(void *,arg0,0x14)=NULL;
 else M(void *,arg0,0x14)=arg3+arg1->index*32;
 flags=arg1->flags;
 M(s32,arg0,0x1A0)=0;
 M(s32,arg0,0x1A4)=0;
 M(u16,arg0,0x19C)=flags|2;
 M(u16,arg0,0x19E)=arg1->extra;
 center.x=M(f32,arg0,8);
 center.y=M(f32,arg0,12)+func_8024D274(arg0)*0.5f;
 center.z=M(f32,arg0,16);
 M(Bounds,arg0,0x1A8)=D_800D0EE0;
 M(s32,arg0,0x1C4)=0;
}
