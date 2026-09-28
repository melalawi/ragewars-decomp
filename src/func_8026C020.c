/* Emits display lists for visible mesh groups, redraws deferred translucent groups and restores changed texture state. */
#include "basetypes.h"
typedef struct {struct {u32 w0,w1;} words;} Gfx;
typedef struct {u32 flags;char pad4[0x13];u8 alpha;} Material;
typedef struct Mesh {u32 list,matrix,aux,vertices;u16 scaleS,scaleT;s32 segmented,unused;struct Mesh *next;} Mesh;
typedef struct Group {char pad0[3];s8 mode;Material *material;Mesh *meshes;char padc[8];struct Group *next;} Group;
extern Group *D_8011062C,*D_80110644;
extern Gfx *D_80110634;
extern s32 func_80269A80(Material *,s8);
extern void func_8026B504(u32,u32,Material *),func_8026AC38(void);
#define COMMAND(op,payload) {Gfx *g=D_80110634++;g->words.w0=(op);g->words.w1=(payload);}
void func_8026C020(void) {
 Group *group=D_8011062C,*deferred=0;
 Mesh *mesh;u16 scaleS,scaleT;u32 cmd;
 if(group)do {
  mesh=group->meshes;
  if(mesh && func_80269A80(group->material,group->mode)) {
   scaleT=0;scaleS=0;
   do {
    func_8026B504(mesh->matrix,mesh->aux,group->material);
    if(mesh->segmented){COMMAND(0xDB060004,mesh->matrix);}else{COMMAND(0xDA380003,mesh->matrix);}
    COMMAND(0xDB060008,mesh->vertices);
    if(mesh->scaleS) {
     if(scaleS!=mesh->scaleS || scaleT!=mesh->scaleT) {
      if(group->material->flags&0x2000){COMMAND(0xD7002802,((u32)mesh->scaleS<<16)|mesh->scaleT);}else{COMMAND(0xD7000002,((u32)mesh->scaleS<<16)|mesh->scaleT);}
     }
     scaleS=mesh->scaleS;scaleT=mesh->scaleT;
    }
    COMMAND(0xDE000000,mesh->list);
    mesh=mesh->next;
   }while(mesh);
   if(group->material->flags&0x2000) {COMMAND(0xE3000F00,0);}
   if(group->material->flags&0x4000) {
    Group *next=group->next;group->next=deferred;deferred=group;group=next;
   } else group=group->next;
  } else group=group->next;
 }while(group);
 if(deferred) {
  group=deferred;func_8026AC38();
  do {
   mesh=group->meshes;
   if(mesh) {
    COMMAND(0xFA000000,group->material->alpha);
    do {
     func_8026B504(mesh->matrix,mesh->aux,group->material);
     if(mesh->segmented){COMMAND(0xDB060004,mesh->matrix);}else{COMMAND(0xDA380003,mesh->matrix);}
     COMMAND(0xDB060008,mesh->vertices);
     COMMAND(0xDE000000,mesh->list);
     mesh=mesh->next;
    }while(mesh);
   }
   group=group->next;
  }while(group);
 }
 group=D_80110644;
 if(group)do {
  mesh=group->meshes;
  if(mesh && func_80269A80(group->material,group->mode)) {
   scaleT=0;scaleS=0;
   do {
    func_8026B504(mesh->matrix,mesh->aux,group->material);
    if(mesh->segmented){COMMAND(0xDB060004,mesh->matrix);}else{COMMAND(0xDA380003,mesh->matrix);}
    COMMAND(0xDB060008,mesh->vertices);
    if(mesh->scaleS) {
     if(scaleS!=mesh->scaleS || scaleT!=mesh->scaleT) {
      if(group->material->flags&0x2000){COMMAND(0xD7002802,((u32)mesh->scaleS<<16)|mesh->scaleT);}else{COMMAND(0xD7000002,((u32)mesh->scaleS<<16)|mesh->scaleT);}
     }
     scaleS=mesh->scaleS;scaleT=mesh->scaleT;
    }
    COMMAND(0xDE000000,mesh->list);
    mesh=mesh->next;
   }while(mesh);
   if(group->material->flags&0x2000){COMMAND(0xE3000F00,0);}
  }
  group=group->next;
 }while(group);
}
