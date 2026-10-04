#include "common/types.h"
#include "span_1000/code_80258760.h"
#include "types.h"

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_8025BF08_de(void *, s32);
extern void func_802599EC_de(void *, s32);
extern void func_802BB420_de(void *, s32, s32);






void func_802588D4_de(void *arg0, s32 arg1) {
    void *temp_s0;
    void *var_a0;
    s32 temp_v1;
    u32 temp_a0;
    u32 temp_v0;

    temp_s0 = &((func_802588F4_S1 *)(arg0))->unk110;
    temp_a0 = func_802BCF30_de();
    temp_v1 = ((MenuRules *)(temp_s0))->locked + 1;
    ((MenuRules *)(temp_s0))->locked = temp_v1;
    if (temp_v1 != 1) {
        func_802BCF50_de(temp_a0);
        func_802BB2A0_de((s32)temp_s0, 0, 1);
        var_a0 = &((func_802588F4_S1 *)(arg0))->unk1DB8;
    } else {
        func_802BCF50_de(temp_a0);
        var_a0 = &((func_802588F4_S1 *)(arg0))->unk1DB8;
    }
    func_8025BF08_de(var_a0, arg1);
    func_802599EC_de(&((func_802588F4_S1 *)(arg0))->unk138, arg1);
    temp_s0 = &((func_802588F4_S1 *)(arg0))->unk110;
    temp_v0 = func_802BCF30_de();
    temp_v1 = ((MenuRules *)(temp_s0))->locked - 1;
    ((MenuRules *)(temp_s0))->locked = temp_v1;
    if (temp_v1 != 0) {
        func_802BCF50_de(temp_v0);
        func_802BB420_de(temp_s0, 0, 1);
        return;
    }
    func_802BCF50_de(temp_v0);
}
