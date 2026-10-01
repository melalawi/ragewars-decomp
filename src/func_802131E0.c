#include "basetypes.h"

extern void func_80209988(void *arg0);

typedef struct {
    u8 pad0[0x220];
    s32 unk220;
    u8 pad224[0x2FC - 0x224];
    s32 unk2FC;
    u8 pad300[0x320 - 0x300];
    s32 unk320;
} Target802131E0;

typedef struct {
    u8 pad0[0x1454];
    Target802131E0 *unk1454;
} Mid802131E0;

typedef struct {
    u8 pad0[0x1D8];
    Mid802131E0 *unk1D8;
} Root802131E0;

/** Resets a target's state block and re-registers it through func_80209988. */
void func_802131E0(Root802131E0 *arg0) {
    Target802131E0 *inner;

    inner = arg0->unk1D8->unk1454;
    inner->unk220 = 0;
    func_80209988(inner);
    inner->unk320 = -1;
    inner->unk2FC = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800C93E0_4 = 0.25f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4380_8 = 4294967296.0;
const double unbake_rodata_800C4388_8 = 4294967296.0;
const double unbake_rodata_800C4390_8 = 4294967296.0;
const double unbake_rodata_800C4398_8 = 4294967296.0;
const double unbake_rodata_800C43A0_8 = 4294967296.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4230_8 = 4294967296.0;
const double unbake_rodata_800C4238_8 = 4294967296.0;
const double unbake_rodata_800C4240_8 = 4294967296.0;
const double unbake_rodata_800C4248_8 = 4294967296.0;
const double unbake_rodata_800C4250_8 = 4294967296.0;
#endif
