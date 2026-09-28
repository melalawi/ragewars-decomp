#include "basetypes.h"

/* Starts a one-shot state: when the word at offset 0x1CC is clear it sets it and clears the word
   at 0x1C8; func_80442CA4 clears both. */
struct Object {
    char pad[0x1C8];
    s32 count;
    s32 started;
};

void func_80442CB0(struct Object *object) {
    if (object->started == 0) {
        object->started = 1;
        object->count = 0;
    }
}
