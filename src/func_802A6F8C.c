#include "basetypes.h"

extern void func_80296DDC(s32 *arg0, s32 arg1);
extern void func_80283038(void *arg0, s32 *arg1);

void func_802A6F8C(void *unused, void *arg1, void *arg2) {
    s32 field34;
    s32 *p;

    field34 = *(s32 *)((char *)arg1 + 0x34);
    if (field34 != -1) {
        p = (s32 *)((char *)arg1 + 0x14);
        func_80296DDC(p, field34);
        if (arg2 != 0) {
            func_80283038(arg2, p);
        }
    }
}
