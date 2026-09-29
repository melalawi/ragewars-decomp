#include "basetypes.h"

extern s32 D_801468A0;

typedef struct func_8043E5BC_S1 func_8043E5BC_S1;
struct func_8043E5BC_S1 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x28 - 0x20 - sizeof(s32)];
    s32 unk28;
};

/** True if any of three flags inside the D_801468A0 record are set. */
s32 func_8043E5BC(void) {
    char *base = (char *)&D_801468A0;
    s32 result;

    result = 0;
    if ((((func_8043E5BC_S1 *)(base))->unk28 != 0) || (((func_8043E5BC_S1 *)(base))->unk1C != 0) || (((func_8043E5BC_S1 *)(base))->unk20 != 0)) {
        result = 1;
    }
    return result;
}
