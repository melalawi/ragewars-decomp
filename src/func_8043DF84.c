#include "basetypes.h"

/** Dispatches to func_80264790 or func_802647A8 with a byte read from arg0->unk20->unk4, chosen by arg1. */

extern void func_80264790(s32 arg);
extern void func_802647A8(s32 arg);

void func_8043DF84(void *arg0, s32 arg1) {
    s32 val;

    val = *(s8 *)((char *)(*(void **)((char *)arg0 + 0x20)) + 4);
    if (arg1 != 0) {
        func_80264790(val);
    } else {
        func_802647A8(val);
    }
}
