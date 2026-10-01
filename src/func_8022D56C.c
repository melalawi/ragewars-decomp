#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern void func_8044A4C0(void *);
extern f32 D_800C7EB4;

typedef struct func_8022D56C_S1 func_8022D56C_S1;
struct func_8022D56C_S1 {
    char pad0[0x658];
    f32 unk658;
    char pad658[0x664 - 0x658 - sizeof(f32)];
    s32 unk664;
    char pad664[0x72C - 0x664 - sizeof(s32)];
    f32 unk72C;
    char pad72C[0x850 - 0x72C - sizeof(f32)];
    s32 unk850;
};

void func_8022D56C(void *arg0) {
    f32 value;

    if (((func_8022D56C_S1 *)(arg0))->unk850 != 0) {
        return;
    }
    if ((((func_8022D56C_S1 *)(arg0))->unk664 & 0x8000) == 0) {
        func_802748E0(&((func_8022D56C_S1 *)(arg0))->unk72C, 1.308997f, 0.25f);
    }
    value = ((func_8022D56C_S1 *)(arg0))->unk658;
    if (D_800C7EB4 < value) {
        func_8044A4C0(arg0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CF4_4 = 7.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EB4_4 = 7.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3068_4 = 7.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30A8_4 = 7.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DC4_4 = 7.5f;
#endif
