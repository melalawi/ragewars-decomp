/* Initialises the index'th sixteen-byte entry of the table at 0x60 of the object: bytes 6, 0xA and
   0xB zero, byte 7 to 0x40, byte 9 to 0x7F, byte 8 to 5, the halfword at 4 to 0xC8 and the float at
   0xC to D_800CC720. */
#include "basetypes.h"

extern f32 D_800CC720;

typedef struct func_802B6B10_S1 func_802B6B10_S1;
struct func_802B6B10_S1 {
    char pad0[0x60];
    void* unk60;
};

void func_802B6B10(void *arg0, s32 index) {
    s32 off = index << 4;

    ((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0x6] = 0;
    ((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0xA] = 0;
    ((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0x7] = 0x40;
    ((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0x9] = 0x7F;
    ((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0x8] = 0x5;
    ((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0xB] = 0;
    *(u16 *)&((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0x4] = 0xC8;
    *(f32 *)&((u8 *)(((func_802B6B10_S1 *)(arg0))->unk60))[off + 0xC] = D_800CC720;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C73F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC720_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C80C0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8A90_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C74D0_4 = 1.0f;
#endif
