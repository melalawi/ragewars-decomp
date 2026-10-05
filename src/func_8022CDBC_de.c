#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8022C894.h"
#include "types.h"

extern void func_802227F4_de(void *, void *, s32);
extern void func_8022CE78_de(s32 arg0, s32 arg1);








void func_8022CDBC_de(void *arg0, void *arg1) {
    f32 temp_f2;

    temp_f2 = ((func_8022CDAC_S1 *)(arg0))->unk6C4;
    if ((temp_f2 < 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 >= 0.0f) ||
        (temp_f2 > 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 <= 0.0f) ||
        (((func_8022CDAC_S1 *)(arg0))->unk658 >= D_800C2D8C_de)) {
        func_802227F4_de(arg0, arg1, 8);
    } else {
        ((func_8022CA04_S3 *)(arg1))->unk20 = D_800C2D90_de;
    }
    func_8022CE78_de((s32)arg0, (s32)arg1);
}
