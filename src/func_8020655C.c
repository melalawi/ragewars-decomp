#include "basetypes.h"

extern s32 D_8013B124;
extern char D_80145040;
extern void *func_8022A8E0(void *arg0);

typedef struct func_8020655C_S1 func_8020655C_S1;
struct func_8020655C_S1 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0x2EC - 0x18 - sizeof(s32*)];
    void* unk2EC;
};

s32 func_8020655C(s32 arg0) {
    void *node;

    if (arg0 == 0x84F) {
        node = D_8013B124;
        while (node != 0) {
            if (*((func_8020655C_S1 *)(node))->unk18 == 4) {
                return 0;
            }
            node = ((func_8020655C_S1 *)(node))->unk2EC;
        }
        return func_8022A8E0(&D_80145040) == 0;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2790_4 = 3.14159274f;
const float unbake_rodata_800C2794_4 = 20.0f;
const float unbake_rodata_800C2798_4 = 30.0f;
const float unbake_rodata_800C279C_4 = 1.0f;
const float unbake_rodata_800C27A0_4 = 50.0f;
const float unbake_rodata_800C27A4_4 = 1.0f;
const float unbake_rodata_800C27A8_4 = 30.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C768C_4 = 204.799988f;
const float unbake_rodata_800C7690_4 = 0.5f;
const float unbake_rodata_800C7694_4 = 1.0f;
const float unbake_rodata_800C7698_4 = 614.399963f;
const float unbake_rodata_800C769C_4 = 0.5f;
const float unbake_rodata_800C76A0_4 = 1.0f;
const float unbake_rodata_800C76A4_4 = 70.0f;
const float unbake_rodata_800C76A8_4 = 20.0f;
const float unbake_rodata_800C76AC_4 = 0.5f;
const float unbake_rodata_800C76B0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2674_4 = 0.5f;
const float unbake_rodata_800C2678_4 = (-64.0f);
const float unbake_rodata_800C267C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2694_4 = 0.0800000057f;
const float unbake_rodata_800C2698_4 = 0.519999981f;
const float unbake_rodata_800C269C_4 = (-5120.0f);
const float unbake_rodata_800C26A0_4 = (-1024.0f);
const float unbake_rodata_800C26A4_4 = 11.25f;
const float unbake_rodata_800C26A8_4 = 20.4799995f;
const float unbake_rodata_800C26AC_4 = 1.25f;
const float unbake_rodata_800C26B0_4 = 0.75f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C25C4_4 = 0.899999976f;
const float unbake_rodata_800C25C8_4 = (-9.0f);
const float unbake_rodata_800C25CC_4 = 1.0f;
const float unbake_rodata_800C25D0_4 = 10.0f;
const float unbake_rodata_800C25D4_4 = 32.0f;
const float unbake_rodata_800C25D8_4 = 8.0f;
const float unbake_rodata_800C25DC_4 = 6.0f;
const float unbake_rodata_800C25E0_4 = 4.0f;
const float unbake_rodata_800C25E4_4 = 8.0f;
const float unbake_rodata_800C25E8_4 = 6.0f;
const float unbake_rodata_800C25EC_4 = 4.0f;
const float unbake_rodata_800C25F0_4 = 8.0f;
const float unbake_rodata_800C25F4_4 = 6.0f;
const float unbake_rodata_800C25F8_4 = 4.0f;
#endif
