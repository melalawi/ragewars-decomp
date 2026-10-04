#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "types.h"

extern f32 func_802B72B0_de(f32);
extern char D_800C49A0_de;






void func_80274C7C_de(void *arg0)
{
    char *o = (char *)arg0;
    f32 magSq;
    f32 mag;
    f32 zOut;

    magSq = (((func_80274C64_S1 *)(o))->unk18 * ((func_80274C64_S1 *)(o))->unk18) +
            (((func_80274C64_S1 *)(o))->unk1C * ((func_80274C64_S1 *)(o))->unk1C) +
            (((func_80274C64_S1 *)(o))->unk20 * ((func_80274C64_S1 *)(o))->unk20);
    zOut = 0.0f;
    if (magSq != 0.0f) {
        mag = func_802B72B0_de(magSq);
        magSq = ((func_802077F4_S2 *)(&D_800C49A0_de))->unk4 / mag;
        ((func_80274C64_S1 *)(o))->unk24 = ((func_80274C64_S1 *)(o))->unk18 * magSq;
        ((func_80274C64_S1 *)(o))->unk28 = ((func_80274C64_S1 *)(o))->unk1C * magSq;
        zOut = ((func_80274C64_S1 *)(o))->unk20 * magSq;
    } else {
        ((func_80274C64_S1 *)(o))->unk24 = 0.0f;
        ((func_80274C64_S1 *)(o))->unk28 = 0.0f;
    }
    ((func_80274C64_S1 *)(o))->unk2C = zOut;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C48D4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A94_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C54_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C94_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C49A4_4 = 1.0f;
#endif
