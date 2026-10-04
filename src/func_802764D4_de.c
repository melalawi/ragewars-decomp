#include "span_1000/code_80276544.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80276510_de(void *arg0, s32 arg1, void *arg2);






void func_802764D4_de(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;

    if (arg1 != 0) {
        temp_f0 = ((func_8024E58C_S1 *)(arg2))->unk0;
        ((func_8024C8B4_S1 *)(arg0))->unk8 = temp_f0;
        ((func_8024C8B4_S1 *)(arg0))->unk0 = temp_f0;
        temp_f0_2 = ((func_8024E58C_S1 *)(arg2))->unk8;
        ((func_8024C8B4_S1 *)(arg0))->unkC = temp_f0_2;
        ((func_8024C8B4_S1 *)(arg0))->unk4 = temp_f0_2;
        func_80276510_de(arg0, arg1 - 1, (char *)arg2 + 0xC);
    }
}
