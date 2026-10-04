#include "span_1000/code_8028DF6C.h"
#include "types.h"
/* Collects platform actors, records the special actor and selects one of three random states. */



extern Actor_func_8028E284_de *D_800F3CD0[],*D_800F3D0C;
extern s32 D_80142850;
extern s32 func_802A01E8_de(void);
void func_8028E284_de(Scene_func_8028E284_de *scene) {
 s32 count=0,i=9,offset=36;Actor_func_8028E284_de *actor=scene->actors;
 D_800F3D0C=0;
 do {*(Actor_func_8028E284_de **)((char *)D_800F3CD0+offset)=0;i--;offset-=4;} while(i>=0);
 i=0;
 if(scene->count>0)do {
  if(actor->def->type==3) {if(actor->def->id==0xBD6){if(scene->count)D_800F3D0C=actor;else D_800F3D0C=actor;}}
  else if(actor->def->type==10) {if(actor->id==0x64E)D_800F3CD0[count++]=actor;}
  if(count>=10)return;
  actor++;

 }while(++i<scene->count);
 D_80142850=func_802A01E8_de()%3;
}
