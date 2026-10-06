#include "span_1000/code_80293A04.h"
#include "common/unused.h"
#include "span_C76B0/data.h"
struct func_80293B0C_S1;
#include "types.h"
#include "span_1000/code_80293A04.h"




extern s32 D_800CD77C;
extern u32 func_80265350_de(void);
extern s32 func_80293904_de(s32 arg0, u32 arg1, s32 arg2, s32 arg3);

void func_80293F44_de(void *arg0) {
    s32 var_a2;
    s32 call_result;
    u32 result;

    result = func_80265350_de();
    var_a2 = 4;
    if ((result > 0x400000U) && (D_800CD778_de != 0)) {
        var_a2 = 3;
    }
    if (((func_80293B0C_S1 *)(arg0))->unk26DB0.v0 > D_800C54C4_de) {
        D_800CD77C = 0;
    }
    if (D_800CD77C != 0) {
        call_result = func_80293904_de((s32)arg0, 0x41400000U, var_a2, -1);
    } else {
        call_result = func_80293904_de((s32)arg0, 0x41400000U, var_a2, var_a2);
    }
    if (call_result != 0) {
        D_800CD77C = 0;
    }
}
