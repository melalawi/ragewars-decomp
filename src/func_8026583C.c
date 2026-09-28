/* Returns whether an address lies in either of two resident memory ranges. */
#include "basetypes.h"
extern char D_800E8000, D_8016E000, D_80153140, D_801540CA;
int func_8026583C(u32 address) {
    if (address >= (u32)&D_800E8000 && address < (u32)&D_8016E000) return 1;
    if (address >= (u32)&D_80153140 && address < (u32)&D_801540CA) return 1;
    return 0;
}
