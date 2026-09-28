/* Draws each selected entry in the object range with shared position and scale. */
#include "basetypes.h"

typedef struct {s32 stride,count; char data[1];} Table;
typedef struct {char pad[0xA8]; Table *unkA8,*unkAC;} Object;
extern s32 func_80265570(void *,s32,s32,s32 *,s32 *);

typedef struct {s32 x,y,z;} Vec;
extern void func_80285B34(s32,void *,Vec,f32,f32,s32);
typedef struct {f32 x,y;} Scale;
void func_8028CE70(Object *arg0,s32 arg1,s32 arg2,Vec pos,Scale scale) {
 s32 sp20,sp24; void *data; s32 count; Table *temp_v1; s32 var_s0; Table *temp_v0;
 f32 arg6,arg7;
 temp_v0=arg0->unkA8;
 arg6=scale.x;arg7=scale.y;
 data=temp_v0->data;count=temp_v0->count;
 if(func_80265570(data,count,arg2,&sp20,&sp24)) {
  for(var_s0=sp20;var_s0<=sp24;var_s0++) {
   temp_v1=arg0->unkAC;
   func_80285B34(arg1,(char *)temp_v1+(var_s0*temp_v1->stride+8),pos,arg6,arg7,0);
  }
 }
}
