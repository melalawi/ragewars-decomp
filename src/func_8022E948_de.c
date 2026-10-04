#include "span_1000/code_8022E120.h"
/* FAKEMATCH: retains inherited numeric field accesses because a verified live shared layout for those accesses is not available; the old access widths and evaluation order are preserved. */
#include "types.h"
extern u8 D_801462E5;




void func_8022E948_de(void *arg0) {
    u8 *ptr;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (((func_8022E938_S1 *)(arg0))->unk6AC & 0x20) {
            return;
        }
    }
    if (!(((func_8022E938_S1 *)(arg0))->unk6B0 & 0x800)) {
        return;
    }
    if (((func_8022E938_S1 *)(arg0))->unk13D4 != 0) {
        ((func_8022E938_S1 *)(arg0))->unk13D4 = 0;
        return;
    }
    ((func_8022E938_S1 *)(arg0))->unk13D4 = 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800CB7F8_4 = 0.00350000011f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800D0A30_4 = 1.0f;
const float unbake_rodata_800D0A34_4 = 0.850000024f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CA6D0_8[] = {0x00, 0x22, 0xC9, 0x8C, 0x00, 0x22, 0x41, 0x38};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CAAA0_24[] = {0x41, 0x23, 0xD7, 0x0A, 0x41, 0xF5, 0xC2, 0x8F, 0x41, 0x57, 0x0A, 0x3D, 0x41, 0x23, 0xD7, 0x0A, 0x42, 0x0F, 0x5C, 0x29, 0x41, 0x57, 0x0A, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800CA2D8_4 = 2.80259693e-44f;
#endif
