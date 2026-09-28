/* Checks object proximity through type-specific handlers and marks nearby objects active. */
#include "basetypes.h"
typedef struct { char pad[4]; unsigned short unk4; char pad6[2]; f32 pos[3]; char pad14[0x138]; short unk14C; } Obj;
extern const float D_800C9F8C;
extern void func_80271FD8(f32 *, f32 *, f32 *);
static inline void nearby(s32 unused, Obj *center, Obj **objects, s32 count) {
 f32 d[3]; s32 i; Obj *o;
 for(i=0;i<count;i++) {
  o=objects[i];
  if(o->unk4 != 0x57) {
   func_80271FD8(d,o->pos,center->pos);
   if(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]<=65536.0f) o->unk14C=1;
  }
 }
}
extern void func_80281A70(int,Obj *,Obj **,int);
void func_80284E70(int context,Obj **objects,int count) {
 int i; Obj *obj;
 for(i=0;i<count;i++) {
  obj=objects[i];
  switch(obj->unk4) {
   case 0xC: break;
   case 0x22: func_80281A70(context,obj,objects,count); break;
   case 0x57: nearby(context,obj,objects,count); break;
  }
 }
}
