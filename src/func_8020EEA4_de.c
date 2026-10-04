#include "span_1000/code_8020D328.h"
#include "span_1000/code_8020F2A8.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void *func_8020C994_de(void *, s32);


extern s32 D_801372A4;









void func_8020EEA4_de(void) {
    s32 *base;
    void *node;
    void *result;
    f32 addVal;
    u16 field0E;

    base = &D_801372A4;
    node = ((func_8020D0CC_S1 *)(base))->unk24;
    if (node != 0) {
        addVal = D_800C1EE4_de;
        do {
            result = func_8020C994_de(base, *(s32 *)node);
            if (((func_8020EEA4_S2 *)(result))->unkC & 1) {
                field0E = ((func_8020EEA4_S2 *)(result))->unkE;
                if (func_8020F55C_de(field0E) != 0 || func_8020F57C_de(((func_8020EEA4_S2 *)(result))->unkE) != 0) {
                    ((func_8020EEA4_S3 *)(node))->unk18 = ((func_8020EEA4_S3 *)(node))->unk18 + addVal;
                }
            }
            node = ((func_8020EEA4_S3 *)(node))->unk10;
        } while (node != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1E14_4 = (-614.399963f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6FD4_4 = (-614.399963f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C2184_4 = (-614.399963f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C21C4_4 = (-614.399963f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C1EE4_4 = (-614.399963f);
#endif
