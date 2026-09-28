#include "basetypes.h"

extern f32 D_800C7EFC;
extern void func_80273930(void *arg0, f32 arg1);

void func_8022E0A0(void *arg0, void *arg1) {
    void *range;
    void *actor;
    s32 value;
    f32 amount;

    range = *(void **)((char *)arg1 + 0x1C);
    value = *(s32 *)((char *)arg1 + 4);
    if (value < *(s8 *)((char *)range + 0x18)) {
        return;
    }
    if (*(s8 *)((char *)range + 0x19) < value) {
        return;
    }

    actor = *(void **)((char *)*(void **)((char *)arg1 + 8) + 0x1D8);
    amount = -*(f32 *)((char *)actor + 0x724);
    if (*(s16 *)((char *)actor + 0x650) == 0xF) {
        amount += D_800C7EFC;
    }
    func_80273930(arg0, amount / (f32)*(s8 *)((char *)range + 0x1A));
}
