#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802AE028.h"
#include "types.h"



extern s32 func_802AE9B0_de(s32 arg0, s32 *arg1);
extern s32 func_802B00D4_de(void *, s16 *, s32);




void func_802AFD00_de(void *arg0) {
    Message_func_802AF150_de sp10;
    s32 sp20;
    s32 field18;

    if (((func_802B4220_S1 *)(arg0))->unk2C == 1) {
        field18 = ((func_802B4220_S1 *)(arg0))->unk18;
        if (field18 != 0 && (func_802AE9B0_de(field18, &sp20) & 0xFF)) {
            sp10.type = 0;
            func_802B00D4_de(&((func_802B4220_S1 *)(arg0))->unk48, &sp10, sp20 * ((func_802B4220_S1 *)(arg0))->unk24);
        }
    }
}
