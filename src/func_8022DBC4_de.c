#include "common/types.h"
#include "span_1000/code_8022D7A0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Returns the constant after D_800C7EC0 less the cube of its difference from the argument. */






f32 func_8022DBC4_de(f32 arg0) {
    f32 temp = ((func_802077F4_S2 *)(&D_800C2DD0_de))->unk4 - arg0;
    return ((func_802077F4_S2 *)(&D_800C2DD0_de))->unk4 - (temp * temp * temp);
}
