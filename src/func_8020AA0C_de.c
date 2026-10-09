#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80209AE8.h"
#include "types.h"
/** Returns the difference between the constant after D_800C6E20 and func_80209AE8_de's result, scaled by D_800C6E28. */

extern f32 func_80209AE8_de(void);







f32 func_8020AA0C_de(void) {
    return (((func_802077F4_S2 *)(&D_800C6E20))->unk4 - func_80209AE8_de()) * (D_800C6E28);
}
