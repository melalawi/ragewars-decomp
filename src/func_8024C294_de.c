#include "common/types.h"
#include "span_1000/code_8024B644.h"
#include "types.h"
extern char D_800C3830_de;

extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern void func_80253754_de(s32 arg0, s32 arg1);






s32 func_8024C294_de(void *arg0, s32 arg1) {
    void *temp_v0;
    char *temp_v1;
    s32 temp_s0;

    if (((func_8024C284_S1 *)(arg0))->unk100 & 0x40000) {
        temp_v0 = func_8025193C_de(0, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkD0, 4, 0, 0, &D_800C3830_de, 1);
        if (temp_v0 != 0) {
            temp_v1 = (char *) func_8028FDB4_de(*(void **) temp_v0, 1);
            temp_v1 += arg1 * 4;
            temp_s0 = ((func_80254D70_S2 *)(temp_v1))->unk8;
            func_80253754_de(0, (s32) temp_v0);
            return temp_s0;
        }
    }
    return -1;
}
