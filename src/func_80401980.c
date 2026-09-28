/* Evaluates a camera track, transforms it relative to its target and checks the resulting position for collisions. */
#include "basetypes.h"
typedef struct Vec { f32 x,y,z; } Vec;
typedef struct Object { s32 header[2]; Vec position; char pad14[0x58]; f32 yaw; } Object;
typedef struct Prefix { s32 words[20]; } Prefix;
typedef struct Track { char pad[0x18]; Object *target; f32 time; char pad20[16]; f32 start,end; s32 active; char pad3C[0x38]; s32 flags; char pad78[0x78]; Vec position; f32 yaw; char pad100[0xE0]; s32 state; } Track;
typedef struct Camera { char pad[0x28]; f32 distance,pitch; char pad30[8]; Vec position; } Camera;
typedef struct Matrix { f32 m[4][4]; } Matrix;
extern Track *D_800E2830;
extern Object *D_80145060;
extern f32 D_800E0B70[];
extern char D_8011FE88[],D_80104030[];
extern Vec D_801041F8;
extern s32 func_80245788(void),func_80243A80(Object *,Vec,void *);
extern void func_802453C4(void),func_80401214(Vec *,f32),func_804013BC(Vec *,f32),func_8027200C(Vec *,Vec *,f32),func_80271FD8(Vec *,Vec *,Vec *),func_80272848(Matrix *),func_80272EAC(Matrix *,f32,f32,f32),func_80272908(Matrix *,Vec *,Vec *),func_80271FA4(Vec *,Vec *,Vec *),func_80288440(void *),func_8028D864(void *);
extern f32 func_80271B18(Vec *),func_8027266C(Vec *);
void func_80401980(Camera *camera) {
 Vec position,aim,direction; Prefix saved; Matrix matrix; Vec temporary;
 f32 length; s32 hit; Object *target;
 if(D_800E2830->active && func_80245788()) {
 if(!(D_800E2830->time < D_800E2830->start) && !(D_800E2830->end < D_800E2830->time)) {
 if(D_800E2830->state>0)func_802453C4();
 func_80401214(&position,D_800E2830->time);func_804013BC(&aim,D_800E2830->time);
 func_8027200C(&position,&position,10.24f);func_8027200C(&aim,&aim,10.24f);
 camera->distance=0.0f;func_80271FD8(&direction,&aim,&position);
 if(((D_800E2830->flags&1) && D_800E2830->target) || (D_800E2830->flags&2)) {
 target=D_80145060;
 if(D_800E2830->flags&1) {if(D_800E2830->target) {D_800E2830->position=D_800E2830->target->position;D_800E2830->yaw=D_800E2830->target->yaw+D_800E0B70[1];}}
 if(D_800E2830->flags&2) {
 if(target) {D_800E2830->position=target->position;D_800E2830->yaw=target->yaw;}
 else {D_800E2830->position.x=0;D_800E2830->position.y=0;D_800E2830->position.z=0;D_800E2830->yaw=0;}
 }
 func_80272848(&matrix);func_80272EAC(&matrix,0,D_800E2830->yaw,0);
 func_80272908(&matrix,&aim,&temporary);aim=temporary;
 func_80272908(&matrix,&position,&temporary);position=temporary;
 func_80271FA4(&aim,&aim,&D_800E2830->position);func_80271FA4(&position,&position,&D_800E2830->position);
 func_80271FD8(&direction,&aim,&position);
 if(target) {
 saved=*(Prefix *)target;target->position=aim;
 func_80288440(D_8011FE88);hit=func_80243A80(target,position,D_80104030);func_8028D864(D_8011FE88);
 *(Prefix *)target=saved;
 if(hit)position=D_801041F8;
 }
 }
 length=func_80271B18(&direction);camera->pitch=-func_8027266C(&direction);camera->distance+=length;camera->position=position;
 }
 }
}
