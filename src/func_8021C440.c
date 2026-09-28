#include "basetypes.h"

typedef struct AudioState {
    char pad0[0x98];
    s32 field98;
    char pad9C[4];
    s32 fieldA0;
} AudioState;

extern AudioState D_801468A0;

extern s32 func_8022C450(void *arg0);
extern void func_8022B68C(void *arg0, f32 arg1, void *arg2);
extern void func_8022B540(void *arg0, f32 arg1, f32 arg2, void *arg3,
                          s32 arg4);
extern void func_8022B5FC(void *arg0, f32 arg1, void *arg2);
extern void func_8022B7E8(void *arg0, void *arg1);
extern void func_802227D0(void *, void *, s32);

void func_8021C440(void *arg0, void *arg1, s32 arg2, void *arg3) {
    char *actor = arg0;
    char *event = arg3;
    AudioState *audio;
    u16 type;

    if (*(s32 *)(actor + 0x5E4) == 0) {
        return;
    }
    if (func_8022C450(actor) != 0) {
        return;
    }
    if (*(f32 *)(actor + 0x670) > 0.0f) {
        return;
    }
    audio = &D_801468A0;
    if (audio->field98 != 0 &&
        *(s8 *)(*(char **)(actor + 0x5D8) + 0x80) == 0xB &&
        audio->fieldA0 > 0) {
        return;
    }
    if (*(s32 *)(actor + 0x122C) & 0x8000) {
        return;
    }

    type = *(u16 *)(event + 4);
    switch (type) {
    case 0x3FB:
    case 0x4CD:
        func_8022B68C(actor, 0.1f, *(void **)(event + 0x12C));
        return;
    case 0x3FD:
    case 0x4CF:
        func_8022B68C(actor, 0.125f, *(void **)(event + 0x12C));
        return;
    case 0x3FE:
    case 0x4D0:
        func_8022B68C(actor, 0.3f, *(void **)(event + 0x12C));
        return;
    case 0x432:
    case 0x4E3:
        func_8022B540(actor, 80.0f, 2.0f, *(void **)(event + 0x12C), 1);
        return;
    case 0x408:
    case 0x4E0:
        func_8022B5FC(actor, 0.25f, *(void **)(event + 0x12C));
        return;
    case 0x419:
    case 0x4D3:
        func_8022B7E8(actor, *(void **)(event + 0x12C));
        return;
    case 0x129:
        *(s32 *)(actor + 0x11D8) = 0;
        *(s32 *)(actor + 0x11E4) = 0;
        if (!(*(s32 *)(actor + 0x122C) & 0x8000)) {
            if (*(void **)(actor + 0x13D8) == 0) {
                *(void **)(actor + 0x13D8) = *(void **)(event + 0x12C);
            }
            func_802227D0(actor, actor, 0x26);
        }
        return;
    }
}
