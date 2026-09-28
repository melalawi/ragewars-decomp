#include "basetypes.h"

/* Sets the word at offset 0x20 of the object D_800E44A0 points to and returns zero. */
struct State20 {
    char pad[0x20];
    s32 value;
};

extern struct State20 *D_800E44A0;

s32 func_80422444(void) {
    D_800E44A0->value = 1;
    return 0;
}
