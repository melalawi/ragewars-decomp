#include "basetypes.h"

/* Sets the flag word at offset 0x5C that func_8041A508 clears. */
struct Flagged {
    char pad[0x5C];
    s32 enabled;
};

void func_8041A4FC(struct Flagged *object) {
    object->enabled = 1;
}
