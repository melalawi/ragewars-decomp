#include "span_16E000/code_80436D48.h"
#include "types.h"

#ifdef VERSION_EU_X
#define VV_0060 0x64
#elif defined(VERSION_DE)
#define VV_0060 0x5E
#else
#define VV_0060 0x60
#endif

/* Calls func_8029973C_de; when func_80299A08_de reports 0x60, passes the word at offset 0x28 of the object
   D_800E5690 points to to func_804367A8_de, then sets its word at 0x20 to -1 and calls func_8041A430_de
   on its first word with 2. Returns zero. */


extern struct State_func_80436BF4_de *D_800E1640_de;
extern void func_8029973C_de();
extern s32 func_80299A08_de();
extern void func_804367A8_de(s32);
extern void func_8041A430_de(void *, s32);

s32 func_80436BF4_de(void) {
    struct State_func_80436BF4_de *state;

    func_8029973C_de();
    if (func_80299A08_de() == VV_0060) {
        func_804367A8_de(D_800E1640_de->item);
        state = D_800E1640_de;
        state->value = -1;
        func_8041A430_de(state->first, 2);
    }
    return 0;
}
