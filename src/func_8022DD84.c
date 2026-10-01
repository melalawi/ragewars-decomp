#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern f32 D_800C7EE8[2];
extern f32 D_800C7EF0;

typedef struct func_8022DD84_S1 func_8022DD84_S1;
struct func_8022DD84_S1 {
    char pad0[0x650];
    u16 unk650;
    char pad650[0x720 - 0x650 - sizeof(u16)];
    f32 unk720;
};

void func_8022DD84(void *arg0) {
    f32 sp10;
    f32 var_f1;
    f32 var_f2;

    var_f1 = 0.0f;
    if ((u32)(((func_8022DD84_S1 *)(arg0))->unk650 - 9) < 4U) {
        var_f1 = D_800C7EE8[0];
    }
    sp10 = ((func_8022DD84_S1 *)(arg0))->unk720;
    func_802748E0(&sp10, var_f1, 0.25f);
    var_f2 = sp10 - ((func_8022DD84_S1 *)(arg0))->unk720;
    if (var_f2 < 0.0f) {
        if (-var_f2 < D_800C7EE8[1]) {
            goto clamp;
        }
    } else if (var_f2 < D_800C7EF0) {
clamp:
        var_f2 = 0.0f;
    }
    ((func_8022DD84_S1 *)(arg0))->unk720 = ((func_8022DD84_S1 *)(arg0))->unk720 + var_f2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D28_4 = 66.5599976f;
const float unbake_rodata_800C2D2C_4 = 0.00100000005f;
const float unbake_rodata_800C2D30_4 = 0.00100000005f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EE8_4 = 66.5599976f;
const float unbake_rodata_800C7EEC_4 = 0.00100000005f;
const float unbake_rodata_800C7EF0_4 = 0.00100000005f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C309C_4 = 66.5599976f;
const float unbake_rodata_800C30A0_4 = 0.00100000005f;
const float unbake_rodata_800C30A4_4 = 0.00100000005f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30DC_4 = 66.5599976f;
const float unbake_rodata_800C30E0_4 = 0.00100000005f;
const float unbake_rodata_800C30E4_4 = 0.00100000005f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DF8_4 = 66.5599976f;
const float unbake_rodata_800C2DFC_4 = 0.00100000005f;
const float unbake_rodata_800C2E00_4 = 0.00100000005f;
#endif
