#include "unbake_gbi.h"
/* Draws a preview entity at a transformed position and restores the rendering state. */
#include "basetypes.h"
typedef struct Vec { f32 x,y,z; } Vec;
typedef struct Box { Vec lo,hi; } Box;
typedef struct Entity { char p0[8]; Vec pos; char p14[0x58]; f32 scale; char p70[0x9e]; signed char flag; char p10f[0x31]; Box bounds,oldbounds; char p170[0x54]; Vec saved; } Entity;
typedef struct Root { char p0[0x190]; Entity obj; char p360[0x118]; int active; char p47c[0x10]; Vec pos; f32 scale; int refresh,angle; } Root;
#include "basetypes.h"
#include "n64sdk.h"
extern Gfx *D_80110634;
extern char D_801450C8[];
extern int D_800D15D0,D_800D297C;
extern Box D_800E3570;
extern f32 D_800E14B8[];
extern void func_80272908(void *,Vec *,Vec *),func_8025470C(int),func_804171B8(int),func_8026D844(void),func_8024B8B4(Entity *),func_80246E34(Entity *),func_80273860(void *,f32),func_8026D980(void),func_80249E18(Entity *,void *),func_8026D9D0(void);
extern int func_8025471C(void);
typedef struct func_8041C864_S1 func_8041C864_S1;
struct func_8041C864_S1 {
    char pad0[0x204];
    char unk204;
};

void func_8041C864(Root *arg0) {
 Vec pos,out;
 char *world=D_801450C8;
 Entity *obj=&arg0->obj;
 if(arg0->active) {
 int saved=D_800D15D0;
 D_800D15D0=0;
 gSPMatrix(D_80110634++, (u32)(world+0x380+(D_800D297C<<6)), G_MTX_LOAD | G_MTX_PROJECTION);
 pos=arg0->pos;
 func_80272908(world+0x160,&pos,&out);
 if(!func_8025471C()) func_8025470C(1);
 func_804171B8(0x33335);
 gDPPipeSync(D_80110634++);
 gDPSetCycleType(D_80110634++, G_CYC_2CYCLE);
 gDPSetTexturePersp(D_80110634++, G_TP_PERSP);
 gDPSetTextureFilter(D_80110634++, G_TF_BILERP);
 func_8026D844();
 arg0->obj.pos=out;arg0->obj.saved=out;
 func_8024B8B4(obj);
 arg0->obj.pos=out;arg0->obj.saved=out;
 if(arg0->refresh || !obj->flag) {
 func_80246E34(obj);
 if(arg0->angle)func_80273860(&((func_8041C864_S1 *)(arg0))->unk204,(f32)arg0->angle*0.017453294f);
 }
 obj->scale=arg0->scale*D_800E14B8[1];
 obj->pos=out;obj->saved=out;
 func_8026D980();func_80249E18(obj,world);
 obj->bounds=D_800E3570;obj->oldbounds=D_800E3570;
 func_8026D9D0();D_800D15D0=saved;
 }
}
