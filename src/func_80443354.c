#include "basetypes.h"

/* Runs the optional callback at offset 0xC of an object's handler table at 0x14, then clears the
   words at offsets 0xB0, 0xB4 and 0xBC of the object at 0x20. */
struct Handlers {
    char pad[0xC];
    void (*callback)();
};

struct State {
    char pad0[0xB0];
    s32 a;
    s32 b;
    s32 padB8;
    s32 c;
};

struct Object {
    char pad[0x14];
    struct Handlers *handlers;
    char pad18[0x20 - 0x18];
    struct State *state;
};

void func_80443354(struct Object *object) {
    struct State *state;

    if (object->handlers->callback != 0) {
        object->handlers->callback();
    }
    state = object->state;
    state->a = 0;
    state->b = 0;
    state->c = 0;
}
