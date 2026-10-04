#include "common/types.h"
#include "span_1000/code_80258760.h"
#include "span_1000/types.h"
#include "types.h"

/* Counts how many of an object's seventeen 0xCC-byte slots at 0x1DC0 hold a given owner, holding the object's lock at 0x110 (raised and released under interrupts disabled through func_802BCF30_de and func_802BCF50_de) around the scan. */

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802BB420_de(void *arg0, s32 arg1, s32 arg2);






s32 func_80258D50_de(char *obj, s32 owner)
{
    s32 count;
    s32 i;

    count = 0;
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_a0;

        temp_s0 = &((func_80203B60_S3 *)(obj))->unk110;
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
    for (i = 0; i < 17; i++) {
        if (((struct IntegerState1DC4 *) (obj + (i * 0xCC)))->unk_1DC0 == owner) {
            count++;
        }
    }
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = &((func_80203B60_S3 *)(obj))->unk110;
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
    return count;
}
