#include "span_1000/code_80283D24.h"
#include "types.h"
/* Checks object proximity through type-specific handlers and marks nearby objects active. */

extern void func_80271F68_de(f32 *, f32 *, f32 *);
static inline void nearby(s32 unused, Obj_func_80284DC4_de *center, Obj_func_80284DC4_de **objects, s32 count) {
 f32 d[3]; s32 i; Obj_func_80284DC4_de *o;
 for(i=0;i<count;i++) {
  o=objects[i];
  if(o->unk4 != 0x57) {
   func_80271F68_de(d,o->pos,center->pos);
   if(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]<=65536.0f) o->unk14C=1;
  }
 }
}
extern void func_80281A9C_de(int,Obj_func_80284DC4_de *,Obj_func_80284DC4_de **,int);
void func_80284E9C_de(int context,Obj_func_80284DC4_de **objects,int count) {
 int i; Obj_func_80284DC4_de *obj;
 for(i=0;i<count;i++) {
  obj=objects[i];
  switch(obj->unk4) {
   case 0xC: break;
   case 0x22: func_80281A9C_de(context,obj,objects,count); break;
   case 0x57: nearby(context,obj,objects,count); break;
  }
 }
}
