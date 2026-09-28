#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800CA42C;
extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);

s32 func_8028E768(void *arg0, Vec3 *arg1) {
    Vec3 sp10;
    f32 magnitude;
    u16 type;

    func_80271FD8(&sp10, (Vec3 *)((char *)arg0 + 8), arg1);
    magnitude = (sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z);
    if (**(s32 **)((char *)arg0 + 0x18) != 1) {
        return 0;
    }
    type = *(u16 *)((char *)arg0 + 0xE4);
    if (type == 0x44E || type == 0x453 || type == 0x451 || type == 0x450 ||
        type == 0x454 || type == 0x455 || type == 0x456) {
        return 0;
    }
    if (*(s32 *)((char *)arg0 + 0x174) == 0) {
        return 0;
    }
    if (*(s8 *)((char *)arg0 + 0x1A4) == 0x3D) {
        return 0;
    }
    return magnitude <= D_800CA42C;
}
