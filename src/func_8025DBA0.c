#include "basetypes.h"

extern f32 D_800C910C;

extern s32 func_80265508(void *arg0, s32 arg1, s32 arg2);
extern char *func_8028FD94(s32 *, s32);
extern f32 func_802B2350(s32 arg0);

typedef struct func_8025DBA0_S1 func_8025DBA0_S1;
typedef struct func_8025DBA0_S2 func_8025DBA0_S2;
typedef struct func_8025DBA0_S3 func_8025DBA0_S3;
typedef struct func_8025DBA0_S4 func_8025DBA0_S4;
struct func_8025DBA0_S1 {
    char pad0[0x2B60];
    void* unk2B60;
    char pad2B60[0x2B64 - 0x2B60 - sizeof(void*)];
    s32 unk2B64;
};
struct func_8025DBA0_S2 {
    char pad0[0x2B50];
    void* unk2B50;
};
struct func_8025DBA0_S3 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x30 - 0x24 - sizeof(s32)];
    f32 unk30;
};
struct func_8025DBA0_S4 {
    char pad0[0x4];
    u16 unk4;
};

void *func_8025DBA0(void *arg0, s32 arg1) {
    void *root;
    s32 index;
    void *first;
    void *second;
    f32 value;

    root = *(void **)arg0;
    index = func_80265508(((func_8025DBA0_S1 *)(root))->unk2B60,
                          ((func_8025DBA0_S1 *)(root))->unk2B64, arg1);
    if (index != -1) {
        index *= 2;
        first = func_8028FD94(((func_8025DBA0_S2 *)(*(void **)arg0))->unk2B50, index | 1);
        second = func_8028FD94(((func_8025DBA0_S2 *)(*(void **)arg0))->unk2B50, index);
        ((func_8025DBA0_S3 *)(arg0))->unk24 = *(s32 *)second;
        value = func_802B2350(((func_8025DBA0_S4 *)(second))->unk4);
        ((func_8025DBA0_S3 *)(arg0))->unk30 = value;
        if (value <= 0.0f) {
            ((func_8025DBA0_S3 *)(arg0))->unk30 = D_800C910C;
        }
        return first;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3F4C_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C910C_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C42CC_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C430C_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C401C_4 = 0.100000001f;
#endif
