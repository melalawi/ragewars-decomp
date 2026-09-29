#include "basetypes.h"

extern void func_80296DDC(s32 *arg0, s32 arg1);
extern void func_80283038(void *arg0, s32 *arg1);

typedef struct func_802A6F8C_S1 func_802A6F8C_S1;
struct func_802A6F8C_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x34 - 0x14 - sizeof(s32)];
    s32 unk34;
};

void func_802A6F8C(void *unused, void *arg1, void *arg2) {
    s32 field34;
    s32 *p;

    field34 = ((func_802A6F8C_S1 *)(arg1))->unk34;
    if (field34 != -1) {
        p = &((func_802A6F8C_S1 *)(arg1))->unk14;
        func_80296DDC(p, field34);
        if (arg2 != 0) {
            func_80283038(arg2, p);
        }
    }
}
