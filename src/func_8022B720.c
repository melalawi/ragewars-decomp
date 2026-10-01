/** Adds the argument scaled by D_800C7E08 to the object's float at 0x11DC and sets bit 0x2000 in its word at 0x122C. */
#include "basetypes.h"

extern f32 D_800C7E08;

typedef struct func_8022B720_S1 func_8022B720_S1;
struct func_8022B720_S1 {
    char pad0[0x11DC];
    f32 unk11DC;
    char pad11DC[0x122C - 0x11DC - sizeof(f32)];
    s32 unk122C;
};

void func_8022B720(void *arg0, f32 arg1) {
    ((func_8022B720_S1 *)(arg0))->unk11DC = ((func_8022B720_S1 *)(arg0))->unk11DC + arg1 * D_800C7E08;
    ((func_8022B720_S1 *)(arg0))->unk122C = ((func_8022B720_S1 *)(arg0))->unk122C | 0x2000;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C48_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E08_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FBC_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2FFC_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D18_4 = 15.0f;
#endif
