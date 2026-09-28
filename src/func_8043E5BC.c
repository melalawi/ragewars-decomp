#include "basetypes.h"

extern s32 D_801468A0;

/** True if any of three flags inside the D_801468A0 record are set. */
s32 func_8043E5BC(void) {
    char *base = (char *)&D_801468A0;
    s32 result;

    result = 0;
    if ((*(s32 *)(base + 0x28) != 0) || (*(s32 *)(base + 0x1C) != 0) || (*(s32 *)(base + 0x20) != 0)) {
        result = 1;
    }
    return result;
}
