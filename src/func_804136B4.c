#include "basetypes.h"

/* Returns the word in the 52-byte record D_800E2B2C selected by the first byte of a record. */
extern s32 D_800E2B2C[];

s32 func_804136B4(u8 *record) {
    return D_800E2B2C[record[0] * 13];
}
