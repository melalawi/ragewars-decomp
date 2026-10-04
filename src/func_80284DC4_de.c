#include "span_1000/code_80283D24.h"
#include "types.h"
/* Marks nearby objects other than type 87 as active. */

extern void func_80271F68_de(f32 *, f32 *, f32 *);
void func_80284DC4_de(s32 unused, Obj_func_80284DC4_de *center, Obj_func_80284DC4_de **objects, s32 count) {
 f32 d[3]; s32 i; Obj_func_80284DC4_de *o;
 for(i=0;i<count;i++) {
  o=objects[i];
  if(o->unk4 != 0x57) {
   func_80271F68_de(d,o->pos,center->pos);
   if(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]<=65536.0f) o->unk14C=1;
  }
 }
}
