/* Copies the three-word vector passed by value into the object's vector at 0x480. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    char pad[0x480];
    Vec3f unk480;
} Obj;

void func_8041CE20(Obj *arg0, Vec3f v) {
    arg0->unk480 = v;
}
