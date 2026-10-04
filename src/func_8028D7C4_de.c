#include "span_1000/code_8028CCB8.h"
#include "types.h"

extern s32 func_80265550_de(s32, s32, s32, s32 *, s32 *);




void func_8028D7C4_de(char *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    s32 sp18;
    s32 sp1C;
    s32 field0;
    s32 field1;
    s32 offset;

    if (arg1 != 0) {
        field0 = ((func_8028D7A0_S1 *)(arg0))->unk11CC;
        field1 = ((func_8028D7A0_S1 *)(arg0))->unk11C4;
    } else {
        field0 = ((func_8028D7A0_S1 *)(arg0))->unk11C8;
        field1 = ((func_8028D7A0_S1 *)(arg0))->unk11C0;
    }
    if (func_80265550_de(field0, field1, arg2, &sp18, &sp1C) != 0) {
        offset = sp18 * 0x14;
        if (arg1 != 0) {
            *arg3 = ((func_8028D7A0_S1 *)(arg0))->unk11D4 + offset;
        } else {
            *arg3 = ((func_8028D7A0_S1 *)(arg0))->unk11D0 + offset;
        }
        *arg4 = (sp1C - sp18) + 1;
    } else {
        *arg3 = 0;
        *arg4 = 0;
    }
}
