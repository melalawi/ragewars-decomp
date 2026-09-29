#include "basetypes.h"

extern void func_802B7550(void *, void * *);

typedef struct func_802B5090_S1 func_802B5090_S1;
struct func_802B5090_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_802B5090(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    char *p;

    i = 0;
    ((func_802B5090_S1 *)(arg0))->unk10 = 0;
    ((func_802B5090_S1 *)(arg0))->unk8 = 0;
    ((func_802B5090_S1 *)(arg0))->unkC = 0;
    ((func_802B5090_S1 *)(arg0))->unk0 = 0;
    ((func_802B5090_S1 *)(arg0))->unk4 = 0;
    if (arg2 > 0) {
        p = (char *)arg1;
        do {
            func_802B7550(p, arg0);
            i += 1;
            p += 0x1C;
        } while (i < arg2);
    }
}
