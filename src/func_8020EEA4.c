#include "basetypes.h"

extern void *func_8020C994(void *, s32);
extern s32 func_8020F55C(s32 arg0);
extern s32 func_8020F57C(s32 arg0);
extern s32 D_8013B364;
extern f32 D_800C6FD4;

typedef struct func_8020EEA4_S1 func_8020EEA4_S1;
typedef struct func_8020EEA4_S2 func_8020EEA4_S2;
typedef struct func_8020EEA4_S3 func_8020EEA4_S3;
struct func_8020EEA4_S1 {
    char pad0[0x24];
    void* unk24;
};
struct func_8020EEA4_S2 {
    char pad0[0xC];
    u16 unkC;
    char padC[0xE - 0xC - sizeof(u16)];
    u16 unkE;
};
struct func_8020EEA4_S3 {
    char pad0[0x10];
    void* unk10;
    char pad10[0x18 - 0x10 - sizeof(void*)];
    f32 unk18;
};

void func_8020EEA4(void) {
    s32 *base;
    void *node;
    void *result;
    f32 addVal;
    u16 field0E;

    base = &D_8013B364;
    node = ((func_8020EEA4_S1 *)(base))->unk24;
    if (node != 0) {
        addVal = D_800C6FD4;
        do {
            result = func_8020C994(base, *(s32 *)node);
            if (((func_8020EEA4_S2 *)(result))->unkC & 1) {
                field0E = ((func_8020EEA4_S2 *)(result))->unkE;
                if (func_8020F55C(field0E) != 0 || func_8020F57C(((func_8020EEA4_S2 *)(result))->unkE) != 0) {
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
