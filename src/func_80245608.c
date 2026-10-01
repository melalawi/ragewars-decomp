#include "basetypes.h"

typedef void (*ContextCallback)(void *);
typedef void (*VoidCallback)(void);

extern s32 func_804030E0(s32);
typedef struct func_80245608_S1 func_80245608_S1;
struct func_80245608_S1 {
    char pad0[0xE0];
    s32 unkE0;
    char padE0[0xE4 - 0xE0 - sizeof(s32)];
    ContextCallback unkE4;
    char padE4[0xE8 - 0xE4 - sizeof(ContextCallback)];
    VoidCallback unkE8;
};

extern func_80245608_S1 *D_800E2830;

s32 func_80245608(s32 arg0, ContextCallback arg1, VoidCallback arg2) {
    s32 result;

    result = func_804030E0(arg0);
    if (D_800E2830->unkE0 == arg0) {
        D_800E2830->unkE4 = arg1;
        D_800E2830->unkE8 = arg2;
    } else {
        if (arg1 != 0) {
            arg1(D_800E2830);
        }
        if (arg2 != 0) {
            arg2();
        }
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DD1B0_178[] = {0x0044244CU, 0x00442454U, 0x00442454U, 0x004423D4U, 0x00442454U, 0x004423D4U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x0044244CU, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442414U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x004423DCU, 0x00442454U, 0x00442454U, 0x004423ECU, 0x0044243CU, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442414U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x004423DCU, 0x00442454U, 0x00442454U, 0x004423ECU, 0x0044243CU, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x00442454U, 0x004423D4U};
const float unbake_rodata_800DD328_4 = 0.5f;
const float unbake_rodata_800DD32C_4 = 0.699999988f;
const float unbake_rodata_800DD330_4 = 0.800000012f;
const float unbake_rodata_800DD334_4 = 1.20000005f;
const float unbake_rodata_800DD338_4 = 0.400000006f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E24B0_4 = 10240.0f;
const float unbake_rodata_800E24B4_4 = 0.800000012f;
const float unbake_rodata_800E24B8_4 = 3.14159298f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED3F4_4[] = {0x25, 0x33, 0x64, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8464_4 = 2.14748365e+09f;
const float unbake_rodata_800E8468_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDAA0_24[] = {0x0042A3CCU, 0x0042A454U, 0x0042A4B0U, 0x0042A4E8U, 0x0042A56CU, 0x0042A678U, 0x0042A678U, 0x0042A5D8U, 0x0042A61CU};
const float unbake_rodata_800DDAC4_4 = 0.00333333341f;
const float unbake_rodata_800DDAC8_4 = 100.0f;
const float unbake_rodata_800DDACC_4 = 150.0f;
const float unbake_rodata_800DDAD0_4 = 2.14748365e+09f;
const float unbake_rodata_800DDAD4_4 = 0.00333333341f;
const float unbake_rodata_800DDAD8_4 = 100.0f;
const float unbake_rodata_800DDADC_4 = 150.0f;
const float unbake_rodata_800DDAE0_4 = 2.14748365e+09f;
#endif
