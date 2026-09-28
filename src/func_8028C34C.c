#include "basetypes.h"

extern void func_80278EEC(void *arg0);

void func_8028C34C(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s0_2;
    void *var_s1;
    void *var_s1_2;

    var_s0 = *(s32 *)((char *)arg0 + 0x11C0);
    var_s1 = *(void **)((char *)arg0 + 0x11D0);
    var_s0 -= 1;
    if (var_s0 != -1) {
        do {
            if (*(u8 *)((char *)var_s1 + 0xF) == arg1) {
                func_80278EEC(var_s1);
            }
            var_s0 -= 1;
            var_s1 = (char *)var_s1 + 0x14;
        } while (var_s0 != -1);
    }
    var_s1_2 = *(void **)((char *)arg0 + 0x11D4);
    var_s0_2 = *(s32 *)((char *)arg0 + 0x11C4);
    var_s0_2 -= 1;
    if (var_s0_2 != -1) {
        do {
            if (*(u8 *)((char *)var_s1_2 + 0xF) == arg1) {
                func_80278EEC(var_s1_2);
            }
            var_s0_2 -= 1;
            var_s1_2 = (char *)var_s1_2 + 0x14;
        } while (var_s0_2 != -1);
    }
}
