#include "basetypes.h"

/* Reports whether arg1 is within range of arg0, using its type and state to pick the check. */

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    u8 unk0;
    char pad1[0x17];
    s32 *unk18;
    char pad2[0xE4 - 0x1C];
    u16 unkE4;
} Obj;

extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);

s32 func_8028E83C(Obj *arg0, Vec3 *arg1) {
    Vec3 delta;
    u16 type;

    if (arg0->unk0 == 1 && *arg0->unk18 == 7) {
        func_80271FD8(&delta, (Vec3 *)((char *)arg0 + 8), arg1);
        delta.y = 0;
        if (262144.0f < delta.x * delta.x + delta.z * delta.z) {
            return 0;
        }
        return 0xFF;
    }
    if (*arg0->unk18 != 1) {
        return 0;
    }
    type = arg0->unkE4;
    if (type == 0x44E || type == 0x453 || type == 0x451 || type == 0x450 ||
        type == 0x454 || type == 0x455 || type == 0x456) {
        return 0xFF;
    }
    return 0;
}
