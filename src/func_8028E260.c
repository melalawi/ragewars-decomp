/* Collects platform actors, records the special actor and selects one of three random states. */
#include "basetypes.h"
typedef struct {s32 type;char pad4[0x24];s16 id;} Def;
typedef struct Actor {char pad0[0x18];Def *def;char pad1C[0xC8];u16 id;char padE6[0x202];} Actor;
typedef struct {char pad[0x138];Actor *actors;s32 pad13C,count;} Scene;
extern Actor *D_800F7CD0[],*D_800F7D0C;
extern s32 D_80146910;
extern s32 func_802A11E8(void);
void func_8028E260(Scene *scene) {
 s32 count=0,i=9,offset=36;Actor *actor=scene->actors;
 D_800F7D0C=0;
 do {*(Actor **)((char *)D_800F7CD0+offset)=0;i--;offset-=4;} while(i>=0);
 i=0;
 if(scene->count>0)do {
  if(actor->def->type==3) {if(actor->def->id==0xBD6){if(scene->count)D_800F7D0C=actor;else D_800F7D0C=actor;}}
  else if(actor->def->type==10) {if(actor->id==0x64E)D_800F7CD0[count++]=actor;}
  if(count>=10)return;
  actor++;

 }while(++i<scene->count);
 D_80146910=func_802A11E8()%3;
}
