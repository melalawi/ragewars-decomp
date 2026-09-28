#include "basetypes.h"

/* Returns the word at offset 0xE0 of the object D_800E2830 points to. The interval also holds an
   empty function with no symbol of its own, compiled here as the file-local stub after it. */
struct StateE0 {
    char pad[0xE0];
    s32 value;
};

extern struct StateE0 *D_800E2830;

s32 func_80245AFC(void) {
    return D_800E2830->value;
}

static void func_80245B10(void) {
}
