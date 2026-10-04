#include "common/types.h"
#include "span_1000/code_80258760.h"
#include "span_1000/types.h"
#include "types.h"

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);






void func_80258740_de(s32 *arg0) {
    s32 *temp_s0;
    s32 temp_v1;
    u32 temp_a0;

    temp_s0 = &((func_80203B60_S3 *)(arg0))->unk110;
    temp_a0 = func_802BCF30_de();
    temp_v1 = ((MenuRules *)(temp_s0))->locked + 1;
    ((MenuRules *)(temp_s0))->locked = temp_v1;
    if (temp_v1 != 1) {
        func_802BCF50_de(temp_a0);
        func_802BB2A0_de((s32) temp_s0, 0, 1);
        return;
    }
    func_802BCF50_de(temp_a0);
}
