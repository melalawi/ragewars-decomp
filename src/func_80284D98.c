/* Marks nearby objects other than type 87 as active. */
#include "basetypes.h"
typedef struct { char pad[4]; unsigned short unk4; char pad6[2]; f32 pos[3]; char pad14[0x138]; short unk14C; } Obj;
extern const float D_800C9F88;
extern void func_80271FD8(f32 *, f32 *, f32 *);
void func_80284D98(s32 unused, Obj *center, Obj **objects, s32 count) {
 f32 d[3]; s32 i; Obj *o;
 for(i=0;i<count;i++) {
  o=objects[i];
  if(o->unk4 != 0x57) {
   func_80271FD8(d,o->pos,center->pos);
   if(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]<=65536.0f) o->unk14C=1;
  }
 }
}
