#include "basetypes.h"

/* Replaces the word at offset 0x10 of the option block D_801462C8 with what func_8044252C returns
   for the second argument, that word, 0x10, 0, 0x80 and 0, and returns zero. */
struct Options {
    s32 flags;
    s32 pad4[3];
    s32 value;
};

extern struct Options D_801462C8;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80444EC0(void *first, void *second) {
    struct Options *options = &D_801462C8;

    options->value = func_8044252C(second, options->value, 0x10, 0, 0x80, 0);
    return 0;
}
