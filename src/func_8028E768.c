#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800CA42C;
extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);

typedef struct func_8028E768_S1 func_8028E768_S1;
struct func_8028E768_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x18 - 0x8 - sizeof(Vec3)];
    s32* unk18;
    char pad18[0xE4 - 0x18 - sizeof(s32*)];
    u16 unkE4;
    char padE4[0x174 - 0xE4 - sizeof(u16)];
    s32 unk174;
    char pad174[0x1A4 - 0x174 - sizeof(s32)];
    s8 unk1A4;
};

s32 func_8028E768(void *arg0, Vec3 *arg1) {
    Vec3 sp10;
    f32 magnitude;
    u16 type;

    func_80271FD8(&sp10, &((func_8028E768_S1 *)(arg0))->unk8, arg1);
    magnitude = (sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z);
    if (*((func_8028E768_S1 *)(arg0))->unk18 != 1) {
        return 0;
    }
    type = ((func_8028E768_S1 *)(arg0))->unkE4;
    if (type == 0x44E || type == 0x453 || type == 0x451 || type == 0x450 ||
        type == 0x454 || type == 0x455 || type == 0x456) {
        return 0;
    }
    if (((func_8028E768_S1 *)(arg0))->unk174 == 0) {
        return 0;
    }
    if (((func_8028E768_S1 *)(arg0))->unk1A4 == 0x3D) {
        return 0;
    }
    return magnitude <= D_800CA42C;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C526C_4 = 6553600.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA42C_4 = 6553600.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C55EC_4 = 6553600.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C562C_4 = 6553600.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C533C_4 = 6553600.0f;
#endif
