#include "basetypes.h"

extern s32 func_80222A80(void *arg0, s16 arg1);
extern f32 D_800C810C;

typedef struct func_80232BC0_S1 func_80232BC0_S1;
typedef struct func_80232BC0_S2 func_80232BC0_S2;
typedef struct func_80232BC0_S3 func_80232BC0_S3;
struct func_80232BC0_S1 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x11B4 - 0x6AC - sizeof(s32)];
    s32 unk11B4;
    char pad11B4[0x11D8 - 0x11B4 - sizeof(s32)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
    char pad1450[0x1454 - 0x1450 - sizeof(s32)];
    void* unk1454;
};
struct func_80232BC0_S2 {
    char pad0[0x100];
    s32 unk100;
};
struct func_80232BC0_S3 {
    char pad0[0x23C];
    s32 unk23C;
};

s32 func_80232BC0(void *arg0, void *arg1, void *arg2) {
    s32 temp_v0;
    void *temp_v1;

    {
        f32 field = ((func_80232BC0_S1 *)(arg2))->unk11D8;
        if (D_800C810C < field) {
            return 1;
        }
    }
    if ((((func_80232BC0_S2 *)(arg0))->unk100 & 0x300000) && (((func_80232BC0_S1 *)(arg2))->unk1450 != 0)) {
        temp_v1 = ((func_80232BC0_S1 *)(arg2))->unk1454;
        temp_v0 = ((func_80232BC0_S3 *)(temp_v1))->unk23C;
        ((func_80232BC0_S3 *)(temp_v1))->unk23C = 0;
        return temp_v0 == 0;
    }
    if (((func_80232BC0_S1 *)(arg2))->unk6AC & 0x2000) {
        if (((func_80232BC0_S1 *)(arg2))->unk11B4 != 0) {
            return 1;
        }
        return func_80222A80(arg2, ((func_80232BC0_S1 *)(arg2))->unk62E) == 0;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F4C_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C810C_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32CC_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C330C_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C301C_4 = 0.100000001f;
#endif
