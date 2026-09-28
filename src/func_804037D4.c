#include "basetypes.h"

/* Sets the word at offset 0xB4 of the object D_800E2830 points to. */
struct StateB4 {
    char pad[0xB4];
    s32 value;
};

extern struct StateB4 *D_800E2830;

void func_804037D4(void) {
    D_800E2830->value = 1;
}
