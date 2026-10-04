#include "common/types.h"
#include "span_1000/code_8022D7A0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Reports whether the object's float at 0x718 is above the constant after D_800C7EC8. */








s32 func_8022DC1C_de(void *arg0) {
    f32 field = ((func_8022DC0C_S1 *)(arg0))->unk718;
    f32 konst = ((func_802077F4_S2 *)(&D_800C2DD8_de))->unk4;
    s32 result = 1;
    if (!(konst < field)) {
        result = 0;
    }
    return result;
}
