#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"
#include "types.h"



extern char D_800C2BC0_de;

extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern void func_8024B4F4_de(void *arg0, s32 arg1);
extern void func_8024ADD0_de(void *arg0, Vec3 *arg1, s32 arg2);
extern void func_80253754_de(s32 arg0, s32 arg1);










void func_8022BC94_de(void *arg0, s32 arg1) {
    Vec3 sp28;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    if (((func_80228774_S4 *)(arg0))->unk100 & 0x40000) {
        temp_s1 = func_8025193C_de(0, ((func_80228774_S4 *)(arg0))->unkC4, ((func_80228774_S4 *)(arg0))->unkC4, ((func_80228774_S4 *)(arg0))->unkD0, 4, 0, 0, &D_800C2BC0_de, 1);
        if (temp_s1 != 0) {
            temp_s2 = ((func_80228774_S4 *)(arg0))->unk1D8;
            func_8024B4F4_de(arg0, (s32)func_8028FDB4_de(*(void **)temp_s1, 0));
            if (arg1 != 0) {
                temp_v0 = ((func_80228774_S5 *)(temp_s2))->unk5DC;
                if (temp_v0 != 0) {
                    sp28.x = ((func_80228774_S6 *)(temp_v0))->unk128 - ((func_80228774_S4 *)(arg0))->unk8;
                    sp28.y = 0.0f;
                    sp28.z = ((func_80228774_S7 *)(((func_80228774_S5 *)(temp_s2))->unk5DC))->unk130 - ((func_80228774_S4 *)(arg0))->unk10;
                    func_8024ADD0_de(arg0, &sp28, arg1);
                }
            }
            func_80253754_de(0, (s32)temp_s1);
        }
    }
}
