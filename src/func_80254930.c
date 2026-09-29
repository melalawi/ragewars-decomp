#include "basetypes.h"

extern char D_801051A0;

extern void func_80254D70(void *arg0, void *arg1);
extern void func_80255ACC(void *arg0, s32 arg1);
extern void func_80254A70(s32, s32);

typedef struct func_80254930_S1 func_80254930_S1;
struct func_80254930_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
};

void func_80254930(void *unused, void *arg1) {
    s32 temp_v0;

    ((func_80254930_S1 *)(arg1))->unkC = ((func_80254930_S1 *)(arg1))->unkC & ~2;
    if (((func_80254930_S1 *)(arg1))->unk8 != 0) {
    loop_1:
        do {
            temp_v0 = ((func_80254930_S1 *)(arg1))->unk8 - 1;
            ((func_80254930_S1 *)(arg1))->unk8 = temp_v0;
            if (temp_v0 != 0) {
                goto loop_1;
            }
            ((func_80254930_S1 *)(arg1))->unkC = ((func_80254930_S1 *)(arg1))->unkC & ~0x100;
        } while (((func_80254930_S1 *)(arg1))->unk8 != 0);
    }
    if (!(((func_80254930_S1 *)(arg1))->unkC & 0x702)) {
        func_80254D70(0, arg1);
        func_80255ACC(&D_801051A0, *(s32 *) arg1);
        func_80254A70(0, arg1);
    }
}
