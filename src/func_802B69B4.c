#include "basetypes.h"

extern void func_802B6B10(void *arg0, s32 arg1);
extern void func_802B6B90(void *arg0, void *arg1, s32 arg2);

typedef struct func_802B69B4_S1 func_802B69B4_S1;
typedef struct func_802B69B4_S2 func_802B69B4_S2;
typedef struct func_802B69B4_S3 func_802B69B4_S3;
struct func_802B69B4_S1 {
    char pad0[0x4];
    char unk4;
    char pad4[0xC - 0x4 - sizeof(char)];
    void* unkC;
};
struct func_802B69B4_S2 {
    char pad0[0x34];
    u8 unk34;
};
struct func_802B69B4_S3 {
    char pad0[0x8];
    void* unk8;
};

void func_802B69B4(void *arg0, void *arg1) {
    s32 i;
    void *p;
    void *found;

    p = arg1;
    do {
        found = ((func_802B69B4_S1 *)(p))->unkC;
        p = &((func_802B69B4_S1 *)(p))->unk4;
    } while (found == 0);
    i = 0;
    if (((func_802B69B4_S2 *)(arg0))->unk34 != 0) {
        do {
            func_802B6B10(arg0, i);
            func_802B6B90(arg0, found, i);
            i += 1;
        } while (i < ((func_802B69B4_S2 *)(arg0))->unk34);
    }
    if (((func_802B69B4_S3 *)(arg1))->unk8 != 0) {
        func_802B6B10(arg0, i);
        func_802B6B90(arg0, ((func_802B69B4_S3 *)(arg1))->unk8, 9);
    }
}
