#include "basetypes.h"

typedef struct func_80255F58_S1 func_80255F58_S1;
struct func_80255F58_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_80255F58(void *arg0, s32 arg1) {
    char *o = (char *)arg0;
    s32 next;
    s32 prev;
    s32 head;

    next = *(s32 *)(arg1 + ((func_80255F58_S1 *)(o))->unk8);
    if (next != 0) {
        s32 off = ((func_80255F58_S1 *)(o))->unkC;
        *(s32 *)(next + off) = *(s32 *)(arg1 + off);
    }
    prev = *(s32 *)(arg1 + ((func_80255F58_S1 *)(o))->unkC);
    if (prev != 0) {
        s32 off = ((func_80255F58_S1 *)(o))->unk8;
        *(s32 *)(prev + off) = *(s32 *)(arg1 + off);
    }
    if (*(s32 *)o == arg1) {
        *(s32 *)o = *(s32 *)(arg1 + ((func_80255F58_S1 *)(o))->unkC);
    }
    if (((func_80255F58_S1 *)(o))->unk4 == arg1) {
        ((func_80255F58_S1 *)(o))->unk4 = *(s32 *)(arg1 + ((func_80255F58_S1 *)(o))->unk8);
    }
    ((func_80255F58_S1 *)(o))->unk10 = ((func_80255F58_S1 *)(o))->unk10 - 1;

    head = *(s32 *)o;
    if (head != 0) {
        *(s32 *)(arg1 + ((func_80255F58_S1 *)(o))->unkC) = head;
        *(s32 *)(*(s32 *)o + ((func_80255F58_S1 *)(o))->unk8) = arg1;
    } else {
        *(s32 *)(arg1 + ((func_80255F58_S1 *)(o))->unkC) = 0;
        ((func_80255F58_S1 *)(o))->unk4 = arg1;
    }
    *(s32 *)(arg1 + ((func_80255F58_S1 *)(o))->unk8) = 0;
    *(s32 *)o = arg1;
    ((func_80255F58_S1 *)(o))->unk10 = ((func_80255F58_S1 *)(o))->unk10 + 1;
}
