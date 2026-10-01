#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);
extern void func_8022CE68(s32 arg0, s32 arg1);
extern f32 D_800C7E7C;
extern f32 D_800C7E80;

typedef struct func_8022CDAC_S1 func_8022CDAC_S1;
typedef struct func_8022CDAC_S2 func_8022CDAC_S2;
struct func_8022CDAC_S1 {
    char pad0[0x658];
    f32 unk658;
    char pad658[0x6A4 - 0x658 - sizeof(f32)];
    f32 unk6A4;
    char pad6A4[0x6C4 - 0x6A4 - sizeof(f32)];
    f32 unk6C4;
};
struct func_8022CDAC_S2 {
    char pad0[0x20];
    f32 unk20;
};

void func_8022CDAC(void *arg0, void *arg1) {
    f32 temp_f2;

    temp_f2 = ((func_8022CDAC_S1 *)(arg0))->unk6C4;
    if ((temp_f2 < 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 >= 0.0f) ||
        (temp_f2 > 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 <= 0.0f) ||
        (((func_8022CDAC_S1 *)(arg0))->unk658 >= D_800C7E7C)) {
        func_802227D0(arg0, arg1, 8);
    } else {
        ((func_8022CDAC_S2 *)(arg1))->unk20 = D_800C7E80;
    }
    func_8022CE68((s32)arg0, (s32)arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CBC_4 = 1.5f;
const float unbake_rodata_800C2CC0_4 = 307.199982f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E7C_4 = 1.5f;
const float unbake_rodata_800C7E80_4 = 307.199982f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3030_4 = 1.5f;
const float unbake_rodata_800C3034_4 = 307.199982f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3070_4 = 1.5f;
const float unbake_rodata_800C3074_4 = 307.199982f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D8C_4 = 1.5f;
const float unbake_rodata_800C2D90_4 = 307.199982f;
#endif
