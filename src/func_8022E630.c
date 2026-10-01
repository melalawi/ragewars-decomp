#include "basetypes.h"

typedef struct func_8022E630_S1 func_8022E630_S1;
struct func_8022E630_S1 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x86C - 0x650 - sizeof(s16)];
    s32 unk86C;
};

/* Returns whether a record in state 3 carries type 0x5E29 or 0x5E59, or a type in the range 0x7DA to 0x7DE. Adapted from func_8022E5DC with the type constants changed. */

s32 func_8022E630(void *arg0) {
    s32 type;

    if (((func_8022E630_S1 *)(arg0))->unk650 == 3) {
        type = ((func_8022E630_S1 *)(arg0))->unk86C;
        if (type == 0x5E29 || type == 0x5E59) {
            return 1;
        }
    }
    return ((func_8022E630_S1 *)(arg0))->unk650 == 3 && ((func_8022E630_S1 *)(arg0))->unk86C >= 0x7DA && ((func_8022E630_S1 *)(arg0))->unk86C < 0x7DF;
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
