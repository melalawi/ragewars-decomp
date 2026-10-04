#include "common/types.h"
#include "span_1000/code_8022E120.h"
#include "span_1000/code_8025E35C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 func_8027525C_de(void *arg0, s32 arg1, s32 arg2);
extern f32 func_80275DD4_de(s32, s32, s32);











void func_8022EA3C_de(void *arg0, void *arg1) {
    f32 first;
    f32 amount;

    if (arg0 != 0 && arg1 != 0 &&
        (((func_8022EA2C_S1 *)(arg0))->unk2 & 0x40)) {
        first = func_8027525C_de(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8);
        amount = (f32)(s32)(first - func_80275DD4_de(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8));
        if (amount < D_800C2E24_de) {
            func_8025E440_de(D_800C2E2C_de - (amount * D_800C2E28_de));
            return;
        }
    }
    func_8025E440_de(0.0f);
}
