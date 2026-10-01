#include "basetypes.h"

typedef struct func_8022E5DC_S1 func_8022E5DC_S1;
struct func_8022E5DC_S1 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x86C - 0x650 - sizeof(s16)];
    s32 unk86C;
};

/* Returns whether a record in state 3 carries type 0x5E2A or 0x5E5A, or a type in the range 0x7DF to 0x7E3. */

s32 func_8022E5DC(void *arg0) {
    s32 type;

    if (((func_8022E5DC_S1 *)(arg0))->unk650 == 3) {
        type = ((func_8022E5DC_S1 *)(arg0))->unk86C;
        if (type == 0x5E2A || type == 0x5E5A) {
            return 1;
        }
    }
    return ((func_8022E5DC_S1 *)(arg0))->unk650 == 3 && ((func_8022E5DC_S1 *)(arg0))->unk86C >= 0x7DF && ((func_8022E5DC_S1 *)(arg0))->unk86C < 0x7E4;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800CB314_4 = 0.0199999996f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800D0640_4 = 0.0199999996f;
#elif defined(VERSION_EU)
const float unbake_rodata_800CA0F8_4 = 34.5599976f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CA98C_14[] = {0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C9F84_4 = (-132.0f);
#endif
