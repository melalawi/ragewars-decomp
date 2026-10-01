#include "basetypes.h"

typedef struct { f32 x, y, z; } Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);

typedef struct func_8022B2F4_S1 func_8022B2F4_S1;
typedef struct func_8022B2F4_S2 func_8022B2F4_S2;
struct func_8022B2F4_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022B2F4_S2 {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x11FC - 0x5D0 - sizeof(s32)];
    f32 unk11FC;
    char pad11FC[0x16E0 - 0x11FC - sizeof(f32)];
    void* unk16E0;
};

void *func_8022B2F4(void *arg0, void *arg1) {
    Vector3 sp10;
    void *node;
    void *bestNode;
    f32 bestDist;
    f32 distSq;

    node = ((func_8022B2F4_S1 *)(arg0))->unk20;
    bestDist = 0.0f;
    bestNode = 0;
    if (node != 0) {
        do {
            if (((func_8022B2F4_S2 *)(node))->unk5D0 != 0 &&
                ((func_8022B2F4_S2 *)(node))->unk11FC != 0.0f) {
                func_80271FD8(&sp10, arg1, (char *)node + 0x1200);
                distSq = sp10.x * sp10.x + sp10.y * sp10.y + sp10.z * sp10.z;
                if (bestNode == 0 || distSq < bestDist) {
                    bestNode = node;
                    bestDist = distSq;
                }
            }
            node = ((func_8022B2F4_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
    return bestNode;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D94_4 = 255.0f;
const float unbake_rodata_800C5D98_4 = 255.0f;
const float unbake_rodata_800C5D9C_4 = 255.0f;
const float unbake_rodata_800C5DA0_4 = 255.0f;
const float unbake_rodata_800C5DA4_4 = 255.0f;
const float unbake_rodata_800C5DA8_4 = 255.0f;
const float unbake_rodata_800C5DAC_4 = 255.0f;
const float unbake_rodata_800C5DB0_4 = 255.0f;
const float unbake_rodata_800C5DB4_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB038_4 = 6.14400005f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5CF8_4 = 1.0f;
const float unbake_rodata_800C5CFC_4 = (-1.0f);
const float unbake_rodata_800C5D00_4 = 1.0f;
const float unbake_rodata_800C5D04_4 = (-1.0f);
const float unbake_rodata_800C5D08_4 = (-0.0116805276f);
const float unbake_rodata_800C5D0C_4 = 0.0308918804f;
const float unbake_rodata_800C5D10_4 = 0.0501743034f;
const float unbake_rodata_800C5D14_4 = 0.0889789909f;
const float unbake_rodata_800C5D18_4 = 0.214598805f;
const float unbake_rodata_800C5D1C_4 = 1.57079625f;
const float unbake_rodata_800C5D20_4 = 1.57079637f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5B28_8 = 0.0;
const double unbake_rodata_800C5B30_8 = 4503599627370496.0;
const double unbake_rodata_800C5B38_8 = 1.0;
const double unbake_rodata_800C5B40_8 = 1.0;
const double unbake_rodata_800C5B48_8 = 4503599627370496.0;
const double unbake_rodata_800C5B50_8 = 1.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5DF0_4 = 0.00999999978f;
const float unbake_rodata_800C5DF4_4 = 0.292571425f;
#endif
