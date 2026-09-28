#include "basetypes.h"

/* Stores the byte D_80153C8F at the offset D_80153C84 within the buffer D_80153C88 points to. */
extern u8 *D_80153C88;
extern s32 D_80153C84;
extern u8 D_80153C8F;

void func_804142A0(void) {
    D_80153C88[D_80153C84] = D_80153C8F;
}
