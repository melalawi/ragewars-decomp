#include "common/types.h"
#include "span_1000/code_80258760.h"
#include "span_1000/types.h"
#include "types.h"

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB420_de(void *arg0, s32 arg1, s32 arg2);






void func_802587A4_de(s32 *arg0) {
    s32 *temp_s0;
    s32 temp_v1;
    u32 temp_v0;

    temp_s0 = &((func_80203B60_S3 *)(arg0))->unk110;
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
