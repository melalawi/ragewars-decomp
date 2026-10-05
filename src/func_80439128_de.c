#include "span_16E000/code_804379C8.h"
#include "types.h"

#if defined(VERSION_DE)
#define VALUE_73 0x71
#elif defined(VERSION_EU_X)
#define VALUE_73 0x77
#else
#define VALUE_73 0x73
#endif

/* Calls func_8029973C_de; when func_80299A08_de reports 0x73, sets the word at offset 0x14 of the object
   D_800E58A0 points to to -1 and calls func_8041A430_de on its first word with 2. Returns zero. */


extern struct State_func_80439128_de *D_800E1850;
extern void func_8029973C_de();
extern s32 func_80299A08_de();
extern void func_8041A430_de(void *, s32);

s32 func_80439128_de(void) {
    struct State_func_80439128_de *state;

    func_8029973C_de();
    if (func_80299A08_de() == VALUE_73) {
        state = D_800E1850;
        state->value = -1;
        func_8041A430_de(state->first, 2);
    }
    return 0;
}
