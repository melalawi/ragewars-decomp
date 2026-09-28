#include "basetypes.h"

/* Returns entry i of the word array D_80153C14 points to. */
extern s32 *D_80153C14;

s32 func_80411B4C(s32 index) {
    return D_80153C14[index];
}
