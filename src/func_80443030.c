/* Retrieves a typed value through its callback and converts it to float. */
#include "basetypes.h"
typedef struct { s32 pad; u32 kind; char gap[16]; void *(*get)(void); } Value;
typedef struct {char pad[20]; Value *value;} Obj;
f32 func_80443030(Obj *arg0) {
 Value *v = arg0->value;
 void *p = v->get();
 switch(v->kind) {
 default: return 0.0f;
 case 0: return *(f32 *)p;
 case 3: return *(s8 *)p;
 case 4: return *(s16 *)p;
 case 1: case 2: case 5: return *(s32 *)p;
 case 6: return *(u8 *)p;
 case 7: return *(u16 *)p;
 case 8: return *(u32 *)p;
 }
}
