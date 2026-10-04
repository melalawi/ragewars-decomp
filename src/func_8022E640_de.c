#include "span_1000/code_8022E120.h"
#include "types.h"




/* Returns whether a record in state 3 carries type 0x5E29 or 0x5E59, or a type in the range 0x7DA to 0x7DE. Adapted from func_8022E5EC_de with the type constants changed. */

s32 func_8022E640_de(void *arg0) {
    s32 type;

    if (((func_8022E5DC_S1 *)(arg0))->unk650 == 3) {
        type = ((func_8022E5DC_S1 *)(arg0))->unk86C;
        if (type == 0x5E29 || type == 0x5E59) {
            return 1;
        }
    }
    return ((func_8022E5DC_S1 *)(arg0))->unk650 == 3 && ((func_8022E5DC_S1 *)(arg0))->unk86C >= 0x7DA && ((func_8022E5DC_S1 *)(arg0))->unk86C < 0x7DF;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800CB318_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800D0644_4 = 0.0199999996f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CA160_24[] = {0x40, 0xA3, 0xD7, 0x0A, 0x41, 0x75, 0xC2, 0x8F, 0x40, 0x75, 0xC2, 0x8F, 0x40, 0xA3, 0xD7, 0x0A, 0x41, 0x8F, 0x5C, 0x29, 0x40, 0x75, 0xC2, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CA9F0_1C[] = {0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C9F94_4 = 24.0f;
#endif
