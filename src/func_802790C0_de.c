#include "span_1000/code_80278C80.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80217388_de(void);
extern void func_80262C88_de(void *arg0);




void func_802790C0_de(void *arg0, s32 *arg1) {
    s32 temp_v0;

    func_80217388_de();
    *arg1 |= 0x20;
    temp_v0 = ((func_80203C40_S1 *)(arg0))->unk100 & 0xFFFEFFFF;
    temp_v0 = temp_v0 & ~0x2000;
    temp_v0 = temp_v0 & ~0x100;
    ((func_80203C40_S1 *)(arg0))->unk100 = temp_v0;
    if (temp_v0 & 0x80000) {
        func_80262C88_de(arg0);
    }
}
