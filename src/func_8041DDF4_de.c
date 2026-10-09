#include "span_16E000/code_8041BEA8.h"
#include "types.h"

/* On event 3 with value 0, calls func_8029973C_de, passes offset 0x10C of the object D_800E3590 points
   to to func_8041DB30_de, calls func_8041DA5C_de with 0x6E, func_8041D6A8_de and func_8041D960_de, and clears
   the object's word at 0xEC. Returns zero. */


extern char *D_800E3590;
extern void func_8029973C_de();
extern void func_8041DB30_de(void *);
extern void func_8041DA5C_de(s32);



s32 func_8041DDF4_de(void *first, void *second, u32 event, s32 value) {
    if ((event >> 16) == 3 && value == 0) {
        func_8029973C_de();
        func_8041DB30_de(D_800E3590 + 0x10C);
        func_8041DA5C_de(0x6E);
        func_8041D6A8_de();
        func_8041D960_de();
        ((struct State_func_8041DDF4_de *) D_800E3590)->value = 0;
    }
    return 0;
}
