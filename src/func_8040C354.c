#include "basetypes.h"

/* Stores its argument in D_800E28D8, which func_8040C4F4 returns, and calls func_8040BC30. */
extern s32 D_800E28D8;
extern void func_8040BC30();

void func_8040C354(s32 value) {
    D_800E28D8 = value;
    func_8040BC30();
}
