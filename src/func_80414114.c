#include "basetypes.h"

/* Stores the word D_80153C74 at index D_80153C6C of the word array D_80153C70 points to. */
extern s32 D_80153C6C;
extern s32 *D_80153C70;
extern s32 D_80153C74;

void func_80414114(void) {
    D_80153C70[D_80153C6C] = D_80153C74;
}
