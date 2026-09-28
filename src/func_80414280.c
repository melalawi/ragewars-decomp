#include "basetypes.h"

/* Copies D_80153C78 into both D_80153C80 and D_80153C60. Three consecutive functions,
   func_80414240 to func_80414280, have this same body. */
extern s32 D_80153C78;
extern s32 D_80153C80;
extern s32 D_80153C60;

void func_80414280(void) {
    s32 value = D_80153C78;

    D_80153C80 = value;
    D_80153C60 = value;
}
