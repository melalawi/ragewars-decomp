#include "span_1000/code_80283D24.h"
#include "types.h"

extern void func_80255D70_de(void *, s32, s32);
extern s32 func_80255CB8_de(void *, s32);
extern s32 func_80255D14_de(void *, s32);










void func_80284758_de(void *arg0, void *arg1)
{
    void *current;
    s32 key;

    current = ((func_8028472C_S1 *)(arg0))->unkFC14.v0;
    if (current != 0) {
        key = ((func_8028472C_S2 *)(arg1))->unk118.v0;
loop:
        if (((func_8028472C_S3 *)(current))->unk118 != key) {
            current = ((func_8028472C_S3 *)(current))->unk1F4;
            if (current != 0) {
                goto loop;
            }
        }
    }

    if (current != 0) {
        func_80255D70_de(&((func_8028472C_S1 *)(arg0))->unkFC14.v1, current, arg1);
    } else if (*((func_8028472C_S2 *)(arg1))->unk118.v1 & 0x2000) {
        func_80255CB8_de(&((func_8028472C_S1 *)(arg0))->unkFC14.v1, arg1);
    } else {
        func_80255D14_de(&((func_8028472C_S1 *)(arg0))->unkFC14.v1, arg1);
    }

    ((func_8028472C_S2 *)(arg1))->unk5C |= 0x01000000;
}
