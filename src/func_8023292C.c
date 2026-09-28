#include "basetypes.h"

extern s32 D_800D297C;
extern u8 D_801462E5;

extern s32 func_80442B98(void *arg0);
extern s32 func_8022AB10(void *arg0, s16 arg1);
extern void func_8026DA4C();

void func_8023292C(void *arg0, void *arg1, void *arg2) {
    void *actor;
    void *resource;
    s32 result;
    s32 one;
    s16 state;

    actor = *(void **)((char *)arg0 + 0x1D8);
    resource = *(void **)((char *)actor + 0x5DC);
    result = -1;
    if (resource == 0) {
        return;
    }
    if (D_801462E5 != 0) {
        if (func_80442B98((char *)resource + 0x554) != 0) {
            return;
        }
    }
    state = *(s16 *)((char *)actor + 0x62E);
    one = 1;
    if ((state == one) && (*(s32 *)((char *)arg1 + 0x144) == 0)) {
        return;
    }
    if ((state >= 0x12) && (func_8022AB10(actor, state) <= 0)) {
        return;
    }
    state = *(s16 *)((char *)actor + 0x62E);
    if ((state == 0xE) || (state == one) || (state == 0)) {
        result = *(s32 *)((char *)actor + 0x11F8);
    }
    func_8026DA4C(*(s32 *)((char *)arg2 + 0xC),
                  *(s32 *)((char *)arg0 + 0xB4), 1,
                  (char *)arg0 + (D_800D297C * 0x18 + 0x140), 0, result);
}
