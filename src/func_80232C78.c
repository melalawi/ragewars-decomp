#include "basetypes.h"

extern void *D_800D052C[];
extern f32 D_800C8110;
extern void func_8022AF64(void *arg0, s32 arg1);

typedef struct func_80232C78_S1 func_80232C78_S1;
typedef struct func_80232C78_S2 func_80232C78_S2;
typedef struct func_80232C78_S3 func_80232C78_S3;
typedef struct func_80232C78_S4 func_80232C78_S4;
struct func_80232C78_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80232C78_S2 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x11C0 - 0x62E - sizeof(s16)];
    s32 unk11C0;
};
struct func_80232C78_S3 {
    char pad0[0x130];
    f32 unk130;
};
struct func_80232C78_S4 {
    char pad0[0x18];
    f32 unk18;
};

void func_80232C78(void *arg0, void *arg1) {
    void *temp_a0;
    s16 idx;

    temp_a0 = ((func_80232C78_S1 *)(arg0))->unk1D8;
    idx = ((func_80232C78_S2 *)(temp_a0))->unk62E;
    ((func_80232C78_S3 *)(arg1))->unk130 = ((func_80232C78_S4 *)(D_800D052C[idx]))->unk18 * D_800C8110;
    if ((((func_80232C78_S2 *)(temp_a0))->unk62E == 8) && (((func_80232C78_S2 *)(temp_a0))->unk11C0 == 0)) {
        func_8022AF64(temp_a0, 0xA3C);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F50_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8110_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32D0_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3310_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3020_4 = 15.0f;
#endif
