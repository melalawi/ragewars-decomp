#include "span_16E000/code_8044239C.h"
#include "span_16E000/types.h"
#include "types.h"

/* Runs the optional callback at offset 0xC of an object's handler table at 0x14, then clears the
   words at offsets 0xB0, 0xB4 and 0xBC of the object at 0x20. */






void func_804431E4_de(struct Object_func_804431E4_de *object) {
    struct State_func_80442A60_de *state;

    if (object->handlers->callback != 0) {
        object->handlers->callback();
    }
    state = object->state;
    state->a = 0;
    state->b = 0;
    state->c = 0;
}
