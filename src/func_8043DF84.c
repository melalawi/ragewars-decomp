#include "basetypes.h"

/** Dispatches to func_80264790 or func_802647A8 with a byte read from arg0->unk20->unk4, chosen by arg1. */

extern void func_80264790(s32 arg);
extern void func_802647A8(s32 arg);

typedef struct func_8043DF84_S1 func_8043DF84_S1;
typedef struct func_8043DF84_S2 func_8043DF84_S2;
struct func_8043DF84_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8043DF84_S2 {
    char pad0[0x4];
    s8 unk4;
};

void func_8043DF84(void *arg0, s32 arg1) {
    s32 val;

    val = ((func_8043DF84_S2 *)((((func_8043DF84_S1 *)(arg0))->unk20)))->unk4;
    if (arg1 != 0) {
        func_80264790(val);
    } else {
        func_802647A8(val);
    }
}
