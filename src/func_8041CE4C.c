/* Copies the three-word vector passed by value into the object's vector at 0x48C. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    char pad[0x48C];
    Vec3f unk48C;
} Obj;

void func_8041CE4C(Obj *arg0, Vec3f v) {
    arg0->unk48C = v;
}
