#include "span_16E000/code_8041DBA0.h"
#include "types.h"

/* Calls func_8029973C_de, sets the words at offsets 0xD8 and 0xDC of the object D_800E3590 points to
   to 5 and 4, and returns zero. */


extern struct State_func_8041DE5C_de *D_800DF540;
extern void func_8029973C_de();

s32 func_8041DE5C_de(void) {
    func_8029973C_de();
    D_800DF540->first = 5;
    D_800DF540->second = 4;
    return 0;
}
