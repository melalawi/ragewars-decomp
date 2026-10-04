#include "common/types.h"
#include "span_16E000/code_8042D1BC.h"
#include "types.h"

/* When the fourth argument is one, calls func_8029973C_de and, while the counter at offset 0xE8 of
   the object D_800E53C0 points to is positive, decrements it and calls func_8042C018_de. Returns zero. */


extern struct State_func_8042D8C4_de *D_800E1370;
extern void func_8029973C_de();
extern void func_8042C018_de();

s32 func_8042D8C4_de(void *first, void *second, void *third, s32 fourth) {
    struct State_func_8042D8C4_de *state;

    if (fourth == 1) {
        func_8029973C_de();
        state = D_800E1370;
        if (state->count > 0) {
            state->count--;
            func_8042C018_de();
            return 0;
        }
    }
    return 0;
}
