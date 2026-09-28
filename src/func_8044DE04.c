#include "basetypes.h"

/* Resets part of a large state block: sets its word at offset 0x1B410 to 2 and clears the words
   at 0x1B414 to 0x1B41C and 0x1B434 to 0x1B440. */
void func_8044DE04(char *state) {
    *(s32 *) (state + 0x1B410) = 2;
    *(s32 *) (state + 0x1B414) = 0;
    *(s32 *) (state + 0x1B418) = 0;
    *(s32 *) (state + 0x1B41C) = 0;
    *(s32 *) (state + 0x1B434) = 0;
    *(s32 *) (state + 0x1B438) = 0;
    *(s32 *) (state + 0x1B43C) = 0;
    *(s32 *) (state + 0x1B440) = 0;
}
