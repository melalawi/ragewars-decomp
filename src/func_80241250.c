#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);

typedef struct func_80241250_S1 func_80241250_S1;
struct func_80241250_S1 {
    char pad0[0x18];
    Vector3 unk18;
    char pad18[0x48 - 0x18 - sizeof(Vector3)];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
};

s32 func_80241250(void *arg0, Vector3 *arg1) {
    Vector3 sp10;
    s32 var_v0;

    func_80271FD8(&sp10, arg1, &((func_80241250_S1 *)(arg0))->unk18);
    var_v0 = 0;
    if (!((((func_80241250_S1 *)(arg0))->unk48 * sp10.x) + (((func_80241250_S1 *)(arg0))->unk4C * sp10.y) + (((func_80241250_S1 *)(arg0))->unk50 * sp10.z) >= 0.0f)) {
        var_v0 = 1;
    }
    return var_v0;
}
