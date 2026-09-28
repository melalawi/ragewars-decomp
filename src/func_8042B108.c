#include "basetypes.h"

/* Returns whether D_80154010 holds anything other than -1; func_8042B1A0 stores it. */
extern s32 D_80154010;

s32 func_8042B108(void) {
    return D_80154010 != -1;
}
