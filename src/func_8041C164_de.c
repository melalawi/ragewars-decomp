#include "span_16E000/code_8041BEA8.h"
#include "types.h"

/* Calls func_802A2394_de and func_8029973C_de, then func_80298368_de with 2, sets D_8014ADA0 and returns
   one. */
extern s32 D_80146CE0;
extern void func_802A2394_de();
extern void func_8029973C_de();
extern void func_80298368_de(s32);

s32 func_8041C164_de(void) {
    func_802A2394_de();
    func_8029973C_de();
    func_80298368_de(2);
    D_80146CE0 = 1;
    return 1;
}
