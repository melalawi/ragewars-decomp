#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_802227F4_de(void *, void *, s32);









s32 func_8022C7F8_de(void *arg0, void *arg1) {
    f32 field6E4;

    if (((func_8022C7E8_S1 *)(arg0))->unk7E8 == 0) {
        field6E4 = ((func_8022C7E8_S1 *)(arg0))->unk6E4;
        if (!(D_800C2D5C_de < field6E4)) {
            if (!(((func_80207ABC_S1 *)(arg1))->unk38 & 0xC0000)) {
                if (((func_80204468_S3 *)(((func_80207ABC_S1 *)(arg1))->unk18))->unk14 & 2) {
                    if ((((func_8022C7E8_S1 *)(arg0))->unk6B0 & 0x10) && (((func_8022C7E8_S1 *)(arg0))->unk11D8 <= 0.0f)) {
                        func_802227F4_de(arg0, arg1, 5);
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
