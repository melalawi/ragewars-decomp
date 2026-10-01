#include "basetypes.h"

extern void *D_800D052C[];
extern f32 D_800C8100;
extern void func_8022AF64(void *arg0, s32 arg1);

typedef struct func_802328C8_S1 func_802328C8_S1;
typedef struct func_802328C8_S2 func_802328C8_S2;
typedef struct func_802328C8_S3 func_802328C8_S3;
typedef struct func_802328C8_S4 func_802328C8_S4;
typedef struct func_802328C8_S5 func_802328C8_S5;
struct func_802328C8_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_802328C8_S2 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x11C0 - 0x62E - sizeof(s16)];
    s32 unk11C0;
};
struct func_802328C8_S3 {
    char pad0[0x130];
    f32 unk130;
};
struct func_802328C8_S4 {
    char pad0[0x18];
    f32 unk18;
};
struct func_802328C8_S5 {
    char pad0[0x4];
    f32 unk4;
};

void func_802328C8(void *arg0, void *arg1) {
    void *temp_a0;
    s16 idx;

    temp_a0 = ((func_802328C8_S1 *)(arg0))->unk1D8;
    idx = ((func_802328C8_S2 *)(temp_a0))->unk62E;
    ((func_802328C8_S3 *)(arg1))->unk130 = ((func_802328C8_S4 *)(D_800D052C[idx]))->unk18 * ((func_802328C8_S5 *)(&D_800C8100))->unk4;
    if ((((func_802328C8_S2 *)(temp_a0))->unk62E == 5) && (((func_802328C8_S2 *)(temp_a0))->unk11C0 == 0)) {
        func_8022AF64(temp_a0, 0x46A);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F44_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8104_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32C4_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3304_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3014_4 = 15.0f;
#endif
