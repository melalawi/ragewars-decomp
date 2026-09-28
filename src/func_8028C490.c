#include "basetypes.h"

typedef struct Record14 {
    s32 id;
    s32 value4;
    s32 value8;
    s32 unkC;
    s32 unk10;
} Record14;

extern void func_80278F70(Record14 *arg0);

void func_8028C490(void *arg0, s32 arg1) {
    Record14 *var_s1;
    Record14 *var_s1_2;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = *(s32 *)((char *)arg0 + 0x11C0);
    var_s1 = *(Record14 **)((char *)arg0 + 0x11D0);
    var_s0 -= 1;
    if (var_s0 != -1) {
        do {
            if (*(u8 *)((char *)var_s1 + 0xF) == arg1) {
                func_80278F70(var_s1);
            }
            var_s0 -= 1;
            var_s1 += 1;
        } while (var_s0 != -1);
    }

    var_s0_2 = *(s32 *)((char *)arg0 + 0x11C4);
    var_s1_2 = *(Record14 **)((char *)arg0 + 0x11D4);
    var_s0_2 -= 1;
    if (var_s0_2 != -1) {
        do {
            if (*(u8 *)((char *)var_s1_2 + 0xF) == arg1) {
                func_80278F70(var_s1_2);
            }
            var_s0_2 -= 1;
            var_s1_2 += 1;
        } while (var_s0_2 != -1);
    }
}
