#include "basetypes.h"

/* Sets the word at offset 0x54 of an object to 2 when the event's upper halfword is 3 and its
   value is 6 or 7, and returns zero. */
struct Object {
    char pad[0x54];
    s32 state;
};

s32 func_8041AB70(struct Object *object, void *unused, u32 event, s32 value) {
    if ((event >> 16) == 3 && value < 8 && value >= 6) {
        object->state = 2;
    }
    return 0;
}
