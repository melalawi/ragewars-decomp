#include "basetypes.h"

extern f32 D_800CC71C;

typedef struct func_802B6A60_S1 func_802B6A60_S1;
typedef union func_802B6A60_S1_U60 { s32 v0; void* v1; } func_802B6A60_S1_U60;
struct func_802B6A60_S1 {
    char pad0[0x34];
    u8 unk34;
    char pad34[0x60 - 0x34 - sizeof(u8)];
    func_802B6A60_S1_U60 unk60;
};

void func_802B6A60(void *arg0) {
    s32 i;
    s32 off;
    s32 c40, c7f, c5, cc8;
    f32 val;

    i = 0;
    if (((func_802B6A60_S1 *)(arg0))->unk34 != 0) {
        c40 = 0x40;
        c7f = 0x7F;
        c5 = 5;
        cc8 = 0xC8;
        val = D_800CC71C;
        do {
            off = i << 4;
            *(s32 *) (off + ((func_802B6A60_S1 *)(arg0))->unk60.v0) = 0;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x6] = 0;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0xA] = 0;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x7] = (u8) c40;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x9] = (u8) c7f;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x8] = (u8) c5;
            ((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0xB] = 0;
            *(u16 *) &((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0x4] = (u16) cc8;
            *(f32 *) &((u8 *) (((func_802B6A60_S1 *)(arg0))->unk60.v1))[off + 0xC] = val;
            i += 1;
        } while (i < (s32) ((func_802B6A60_S1 *)(arg0))->unk34);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C73EC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC71C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C80BC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8A8C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C74CC_4 = 1.0f;
#endif
