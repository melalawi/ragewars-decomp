#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "span_1000/code_8026D4F0.h"
#include "types.h"



extern s32 func_80245908_de(void);
extern void func_8021C9D8_de(void *arg0, void *arg1);








void func_8022A2A0_de(void *arg0, void *arg1) {
    void *cur;

    func_8026D980_de();
    cur = ((func_80228774_S1 *)(arg0))->unk20;
    if (cur != 0) {
        do {
            if (((func_8022A274_S2 *)(cur))->unk5DC != arg1 ||
                ((func_80207B5C_S2 *)(arg1))->unk24 == 1 ||
                func_80245908_de() != 0) {
                func_8021C9D8_de(cur, arg1);
            }
            cur = ((func_8022A274_S2 *)(cur))->unk16E0;
        } while (cur != 0);
    }
    func_8026D9D0_de();
}
