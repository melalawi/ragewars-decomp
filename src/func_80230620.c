#include "basetypes.h"

typedef struct AudioState {
    char pad0[0x54];
    s32 active;
    char pad58[0x18];
    s32 mode;
} AudioState;

extern char D_800CE8DC;
extern AudioState D_801468A0;

extern s32 func_80222A80(void *arg0, s16 arg1);
extern s16 func_8022F95C(void *arg0);
extern void func_8022B9B4(void *arg0);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8022FD9C(void *arg0, void *arg1);

void func_80230620(void *arg0, void *arg1) {
    s32 state;
    void *actor;
    AudioState *audio;
    s32 mode;

    actor = *(void **)((char *)arg0 + 0x1D8);
    state = *(s16 *)(&D_800CE8DC +
                     (*(s16 *)((char *)actor + 0x650) * 0x18));
    if (*(s8 *)((char *)arg1 + 0xCB) != 0) {
        if (func_80222A80(actor, *(s16 *)((char *)actor + 0x62E)) == 0) {
            if (*(s32 *)((char *)arg1 + 0x13C) == 2) {
                *(s32 *)((char *)arg1 + 0x13C) = 1;
                if (func_80222A80(actor, *(s16 *)((char *)actor + 0x62E)) == 0) {
                    *(s16 *)((char *)actor + 0x770) = func_8022F95C(actor);
                }
            }
        }
    }
    func_8022B9B4(actor);
    *(s32 *)((char *)actor + 0x11FC) = 0;
    *(s32 *)((char *)*(void **)((char *)actor + 0x698) + 0x168) = 0;
    *(s32 *)((char *)arg1 + 0x138) = 0;

    audio = &D_801468A0;
    if ((audio->active != 0) &&
        (*(u8 *)((char *)*(void **)((char *)actor + 0x5D8) + 0x8F) != 0)) {
        if (*(s32 *)((char *)actor + 0x6B0) & 0x2000) {
            mode = audio->mode;
            switch (mode) {
            case 0:
                func_8025DE74(0x18A1,
                              *(s32 *)((char *)actor + 8),
                              *(s32 *)((char *)actor + 0xC),
                              *(s32 *)((char *)actor + 0x10),
                              (s32)((char *)actor + 8), -1);
                break;
            case 1:
                func_8025DE74(0x1969,
                              *(s32 *)((char *)actor + 8),
                              *(s32 *)((char *)actor + 0xC),
                              *(s32 *)((char *)actor + 0x10),
                              (s32)((char *)actor + 8), -1);
                break;
            case 2:
                func_8025DE74(0x1905,
                              *(s32 *)((char *)actor + 8),
                              *(s32 *)((char *)actor + 0xC),
                              *(s32 *)((char *)actor + 0x10),
                              (s32)((char *)actor + 8), -1);
                break;
            }
        }
    } else if ((state != 1) && (state != 7) &&
               (*(s8 *)((char *)arg1 + 0xCB) != 0)) {
        func_8022FD9C(arg0, arg1);
    }
}
