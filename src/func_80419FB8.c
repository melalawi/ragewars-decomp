#include "basetypes.h"

/* Returns one when nothing is pending at offset 0x84 of an object, and otherwise whether the word
   at offset 0x44 is zero; func_80419F98 sets the pending word and func_80419FA4 clears it. */
struct Object {
    char pad0[0x44];
    s32 busy;
    char pad48[0x84 - 0x48];
    s32 pending;
};

s32 func_80419FB8(struct Object *object) {
    if (object->pending == 0) {
        return 1;
    }
    return object->busy == 0;
}
