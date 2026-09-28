#include "basetypes.h"

extern void *func_802833A4(void *arg0);
extern s32 func_8022B168(void *arg0);
extern void func_80229530(void *arg0, s32 arg1, s32 arg2);
extern void func_802227D0(void *, void *, s32);
extern s32 func_80284408(void *arg0);
extern void func_8025E1E4(s32);

void func_80279A70(void *arg0) {
    char *actor = arg0;
    char *state;
    char *owner;
    char *resource;

    if (*(u16 *)(actor + 4) != 0x414) {
        if (*(u16 *)(actor + 4) == 0x42D) {
            state = func_802833A4(actor);
            if (*(s32 *)(state + 0x5A8) != 0 && func_8022B168(state) == 0) {
                func_80229530(state, *(s32 *)(state + 0x5A4),
                               *(s32 *)(state + 0x5A8));
            }
            goto reset_state;
        }
    } else {
reset_state:
        state = func_802833A4(actor);
        *(s32 *)(state + 0x5A8) = 0;
        if (func_8022B168(state) == 0) {
            *(s32 *)(state + 0x59C) = 1;
        }
    }

    if (*(s8 *)(actor + 0x1B9) == 8 ||
        *(s8 *)(actor + 0x1BA) == 8 ||
        *(s8 *)(actor + 0x1B8) == 8) {
        resource = *(char **)(actor + 0x12C);
        if (resource != 0 && *(u8 *)resource == 1 &&
            (*(s32 *)(resource + 0x100) & 0x300000) != 0) {
            func_802227D0(*(void **)(resource + 0x1D8), resource, 2);
        }
    }

    func_80284408(actor);
    owner = *(char **)(actor + 0x118);
    if (*(u16 *)(*(char **)(owner + 0x18) + 0xBE) != 0xFFFF) {
        func_8025E1E4((s32)actor);
    }
    if (*(u16 *)(*(char **)(owner + 0x18) + 0xC2) != 0xFFFF) {
        func_8025E1E4((s32)actor);
    }
}
