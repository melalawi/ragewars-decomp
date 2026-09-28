#include "basetypes.h"

/* Clears the flag word at offset 0x5C that func_8041A4FC sets to one. func_80423C18 calls it on
   the object func_8041A300 has just returned. */
struct Flagged {
    char pad[0x5C];
    s32 enabled;
};

void func_8041A508(struct Flagged *object) {
    object->enabled = 0;
}
