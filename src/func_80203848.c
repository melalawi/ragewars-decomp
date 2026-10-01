#include "basetypes.h"

extern void func_80202CA0(s32, f32 *);

typedef struct func_80203848_S1 func_80203848_S1;
struct func_80203848_S1 {
    char pad0[0x130];
    f32 unk130;
    char pad130[0x134 - 0x130 - sizeof(f32)];
    f32 unk134;
    char pad134[0x138 - 0x134 - sizeof(f32)];
    f32 unk138;
};

s32 func_80203848(s32 arg0, s32 arg1, void *arg2) {
    f32 sp10[3];

    sp10[0] = ((func_80203848_S1 *)(arg2))->unk130;
    sp10[1] = ((func_80203848_S1 *)(arg2))->unk134;
    sp10[2] = ((func_80203848_S1 *)(arg2))->unk138;
    func_80202CA0(arg0, sp10);
    return arg0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1980_4 = 122.879997f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B40_4 = 122.879997f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1CF0_4 = 122.879997f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D30_4 = 122.879997f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A4C_4 = 0.5f;
#endif
