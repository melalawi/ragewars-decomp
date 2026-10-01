#include "basetypes.h"

typedef struct { f32 f0, f4, f8, fC; } Acc;

extern Acc D_801468A0;
extern f32 D_800D2988;
extern f32 D_800CA598;
extern f32 D_800CA5A0;

typedef struct func_80293C20_S1 func_80293C20_S1;
typedef struct func_80293C20_S2 func_80293C20_S2;
struct func_80293C20_S1 {
    char pad0[0x26DD4];
    s32 unk26DD4;
};
struct func_80293C20_S2 {
    char pad0[0x4];
    f32 unk4;
};

void func_80293C20(void *arg0) {
    f32 t1;
    f32 t2;
    f32 t3;

    if (((func_80293C20_S1 *)(arg0))->unk26DD4 == 0) {
        t1 = D_801468A0.f0 + D_800D2988;
        D_801468A0.f0 = t1;
        if (D_800CA598 <= t1) {
            t2 = D_801468A0.f4 + ((func_80293C20_S2 *)(&D_800CA598))->unk4;
            D_801468A0.f0 = t1 - D_800CA598;
            D_801468A0.f4 = t2;
            if (D_800CA5A0 <= t2) {
                t3 = D_801468A0.f8 + ((func_80293C20_S2 *)(&D_800CA598))->unk4;
                D_801468A0.f4 = t2 - D_800CA5A0;
                D_801468A0.f8 = t3;
                if (D_800CA5A0 <= t3) {
                    D_801468A0.f8 = t3 - D_800CA5A0;
                    D_801468A0.fC = D_801468A0.fC + ((func_80293C20_S2 *)(&D_800CA598))->unk4;
                }
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53D8_4 = 15.0f;
const float unbake_rodata_800C53DC_4 = 1.0f;
const float unbake_rodata_800C53E0_4 = 60.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA598_4 = 15.0f;
const float unbake_rodata_800CA59C_4 = 1.0f;
const float unbake_rodata_800CA5A0_4 = 60.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5758_4 = 15.0f;
const float unbake_rodata_800C575C_4 = 1.0f;
const float unbake_rodata_800C5760_4 = 60.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5798_4 = 15.0f;
const float unbake_rodata_800C579C_4 = 1.0f;
const float unbake_rodata_800C57A0_4 = 60.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54AC_4 = 15.0f;
const float unbake_rodata_800C54B0_4 = 1.0f;
const float unbake_rodata_800C54B4_4 = 60.0f;
#endif
