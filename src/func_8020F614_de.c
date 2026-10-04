#include "span_1000/code_8020F2A8.h"
#include "span_1000/types.h"
#include "types.h"

extern void *func_8020C994_de(void *, s32);
extern void func_8020D220_de(void *, s32);
extern s32 D_801372A4;










s32 func_8020F614_de(void) {
    s32 *base;
    void *node;
    void *result;
    s32 count;

    base = &D_801372A4;
    node = ((func_8020D0CC_S1 *)(base))->unk24;
    count = 0;
    if (node != 0) {
        do {
            result = func_8020C994_de(base, *(s32 *)node);
            if ((((func_8020EEA4_S2 *)(result))->unkC & 1) &&
                ((func_8020EEA4_S2 *)(result))->unkE == 0x64E &&
                ((func_8020F444_S3 *)((((func_8020F444_S2 *)(node))->unk34)))->unk1A4 == 0) {
                func_8020D220_de(base, *(s32 *)node);
                count += 1;
            }
            node = ((func_8020F444_S2 *)(node))->unk10;
        } while (node != 0);
    }
    return count;
}
