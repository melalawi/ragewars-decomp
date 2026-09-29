#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);

typedef struct func_80217224_S1 func_80217224_S1;
struct func_80217224_S1 {
    char pad0[0x8];
    Vector3 unk8;
    char pad8[0x70 - 0x8 - sizeof(Vector3)];
    f32 unk70;
};

/** Subtract obj->y from arg2 in-place via func_80271FD8, then return the squared length of (arg1, arg2', arg3). */
f32 func_80217224(void *arg0, Vector3 v) {
    f32 temp_f1;

    func_80271FD8(&v, &v, &((func_80217224_S1 *)(arg0))->unk8);
    temp_f1 = v.y - ((func_80217224_S1 *)(arg0))->unk70;
    v.y = temp_f1;
    return (v.x * v.x) + (temp_f1 * temp_f1) + (v.z * v.z);
}
