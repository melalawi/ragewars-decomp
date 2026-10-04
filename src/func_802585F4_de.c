#include "common/types.h"
#include "span_1000/code_80256234.h"
#include "span_1000/types.h"
#include "types.h"

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802BB420_de(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8025C17C_de(void *arg0, s32 arg1);
extern s32 func_80259AB8_de(void *arg0, s32 arg1);






s32 func_802585F4_de(void *arg0, s32 arg1) {
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_a0;

        temp_s0 = &((func_80258614_S1 *)(arg0))->unk110;
        temp_a0 = func_802BCF30_de();
        temp_v1 = ((MenuRules *)(temp_s0))->locked + 1;
        ((MenuRules *)(temp_s0))->locked = temp_v1;
        if (temp_v1 != 1) {
            func_802BCF50_de(temp_a0);
            func_802BB2A0_de((s32)temp_s0, 0, 1);
        } else {
            func_802BCF50_de(temp_a0);
        }
    }
    if (func_8025C17C_de(&((func_80258614_S1 *)(arg0))->unk1DB8, arg1) != 0) {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = &((func_80258614_S1 *)(arg0))->unk110;
        temp_v0 = func_802BCF30_de();
        temp_v1 = ((MenuRules *)(temp_s0))->locked - 1;
        ((MenuRules *)(temp_s0))->locked = temp_v1;
        if (temp_v1 != 0) {
            func_802BCF50_de(temp_v0);
            func_802BB420_de(temp_s0, 0, 1);
        } else {
            func_802BCF50_de(temp_v0);
        }
        return 1;
    }
    if (func_80259AB8_de(&((func_80258614_S1 *)(arg0))->unk138, arg1) != 0) {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = &((func_80258614_S1 *)(arg0))->unk110;
        temp_v0 = func_802BCF30_de();
        temp_v1 = ((MenuRules *)(temp_s0))->locked - 1;
        ((MenuRules *)(temp_s0))->locked = temp_v1;
        if (temp_v1 != 0) {
            func_802BCF50_de(temp_v0);
            func_802BB420_de(temp_s0, 0, 1);
        } else {
            func_802BCF50_de(temp_v0);
        }
        return 1;
    }
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = &((func_80258614_S1 *)(arg0))->unk110;
        temp_v0 = func_802BCF30_de();
        temp_v1 = ((MenuRules *)(temp_s0))->locked - 1;
        ((MenuRules *)(temp_s0))->locked = temp_v1;
        if (temp_v1 != 0) {
            func_802BCF50_de(temp_v0);
            func_802BB420_de(temp_s0, 0, 1);
        } else {
            func_802BCF50_de(temp_v0);
        }
    }
    return 0;
}
