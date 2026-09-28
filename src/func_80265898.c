#include "basetypes.h"

/* Returns whether an address lies within one of two recognized ranges. Adapted from func_802657A4 with the three ranges reduced to two, the range symbols changed, and the empty unnamed function after it in the interval compiled as a file-local stub. */
extern char D_200500;
extern char D_C5E98;
extern char D_400000;
extern char D_49794;

int func_80265898(u32 arg0) {
    if (arg0 >= (u32)&D_200500 &&
        arg0 < (u32)&D_200500 + (u32)&D_C5E98) {
        return 1;
    }
    if (arg0 >= (u32)&D_400000 &&
        arg0 < (u32)&D_400000 + (u32)&D_49794) {
        return 1;
    }
    return 0;
}

static void func_802658FC(void) {
}
