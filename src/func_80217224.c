#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);

/** Subtract obj->y from arg2 in-place via func_80271FD8, then return the squared length of (arg1, arg2', arg3). */
f32 func_80217224(void *arg0, Vector3 v) {
    f32 temp_f1;

    func_80271FD8(&v, &v, (Vector3 *)((char *)arg0 + 8));
    temp_f1 = v.y - *(f32 *)((char *)arg0 + 0x70);
    v.y = temp_f1;
    return (v.x * v.x) + (temp_f1 * temp_f1) + (v.z * v.z);
}
