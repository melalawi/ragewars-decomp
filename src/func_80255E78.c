#include "basetypes.h"

typedef struct func_80255E78_S1 func_80255E78_S1;
struct func_80255E78_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_80255E78(void *arg0, s32 arg1) {
    s32 next;
    s32 prev;

    next = *(s32 *)(arg1 + ((func_80255E78_S1 *)(arg0))->unk8);
    if (next != 0) {
        s32 off = ((func_80255E78_S1 *)(arg0))->unkC;
        *(s32 *)(next + off) = *(s32 *)(arg1 + off);
    }
    prev = *(s32 *)(arg1 + ((func_80255E78_S1 *)(arg0))->unkC);
    if (prev != 0) {
        s32 off = ((func_80255E78_S1 *)(arg0))->unk8;
        *(s32 *)(prev + off) = *(s32 *)(arg1 + off);
    }
    if (*(s32 *)arg0 == arg1) {
        *(s32 *)arg0 = *(s32 *)(arg1 + ((func_80255E78_S1 *)(arg0))->unkC);
    }
    if (((func_80255E78_S1 *)(arg0))->unk4 == arg1) {
        ((func_80255E78_S1 *)(arg0))->unk4 = *(s32 *)(arg1 + ((func_80255E78_S1 *)(arg0))->unk8);
    }
    ((func_80255E78_S1 *)(arg0))->unk10 = ((func_80255E78_S1 *)(arg0))->unk10 - 1;
}
