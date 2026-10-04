#include "common/types.h"
#include "span_1000/code_80206DD4.h"
#include "types.h"
typedef struct Owner Owner;

extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);






void func_80207B5C_de(void *arg0, u32 *arg1) {
    void *temp_s0;

    temp_s0 = ((Owner *)(arg0))->track + 0x14;
    func_80278D78_de(arg0, 0x10000, arg0);
    if (!(((func_80207B5C_S2 *)(temp_s0))->unk24 & 0x40)) {
        *arg1 &= 0xFFFEFFFF;
    }
}
