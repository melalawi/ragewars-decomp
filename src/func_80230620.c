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

typedef struct func_80230620_S1 func_80230620_S1;
typedef struct func_80230620_S2 func_80230620_S2;
typedef struct func_80230620_S3 func_80230620_S3;
typedef struct func_80230620_S4 func_80230620_S4;
typedef struct func_80230620_S5 func_80230620_S5;
struct func_80230620_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80230620_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5D8 - 0x10 - sizeof(s32)];
    void* unk5D8;
    char pad5D8[0x62E - 0x5D8 - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x698 - 0x650 - sizeof(s16)];
    void* unk698;
    char pad698[0x6B0 - 0x698 - sizeof(void*)];
    s32 unk6B0;
    char pad6B0[0x770 - 0x6B0 - sizeof(s32)];
    s16 unk770;
    char pad770[0x11FC - 0x770 - sizeof(s16)];
    s32 unk11FC;
};
struct func_80230620_S3 {
    char pad0[0xCB];
    s8 unkCB;
    char padCB[0x138 - 0xCB - sizeof(s8)];
    s32 unk138;
    char pad138[0x13C - 0x138 - sizeof(s32)];
    s32 unk13C;
};
struct func_80230620_S4 {
    char pad0[0x168];
    s32 unk168;
};
struct func_80230620_S5 {
    char pad0[0x8F];
    u8 unk8F;
};

void func_80230620(void *arg0, void *arg1) {
    s32 state;
    void *actor;
    AudioState *audio;
    s32 mode;

    actor = ((func_80230620_S1 *)(arg0))->unk1D8;
    state = *(s16 *)(&D_800CE8DC +
                     (((func_80230620_S2 *)(actor))->unk650 * 0x18));
    if (((func_80230620_S3 *)(arg1))->unkCB != 0) {
        if (func_80222A80(actor, ((func_80230620_S2 *)(actor))->unk62E) == 0) {
            if (((func_80230620_S3 *)(arg1))->unk13C == 2) {
                ((func_80230620_S3 *)(arg1))->unk13C = 1;
                if (func_80222A80(actor, ((func_80230620_S2 *)(actor))->unk62E) == 0) {
                    ((func_80230620_S2 *)(actor))->unk770 = func_8022F95C(actor);
                }
            }
        }
    }
    func_8022B9B4(actor);
    ((func_80230620_S2 *)(actor))->unk11FC = 0;
    ((func_80230620_S4 *)(((func_80230620_S2 *)(actor))->unk698))->unk168 = 0;
    ((func_80230620_S3 *)(arg1))->unk138 = 0;

    audio = &D_801468A0;
    if ((audio->active != 0) &&
        (((func_80230620_S5 *)(((func_80230620_S2 *)(actor))->unk5D8))->unk8F != 0)) {
        if (((func_80230620_S2 *)(actor))->unk6B0 & 0x2000) {
            mode = audio->mode;
            switch (mode) {
            case 0:
                func_8025DE74(0x18A1,
                              ((func_80230620_S2 *)(actor))->unk8,
                              ((func_80230620_S2 *)(actor))->unkC,
                              ((func_80230620_S2 *)(actor))->unk10,
                              (s32)((char *)actor + 8), -1);
                break;
            case 1:
                func_8025DE74(0x1969,
                              ((func_80230620_S2 *)(actor))->unk8,
                              ((func_80230620_S2 *)(actor))->unkC,
                              ((func_80230620_S2 *)(actor))->unk10,
                              (s32)((char *)actor + 8), -1);
                break;
            case 2:
                func_8025DE74(0x1905,
                              ((func_80230620_S2 *)(actor))->unk8,
                              ((func_80230620_S2 *)(actor))->unkC,
                              ((func_80230620_S2 *)(actor))->unk10,
                              (s32)((char *)actor + 8), -1);
                break;
            }
        }
    } else if ((state != 1) && (state != 7) &&
               (((func_80230620_S3 *)(arg1))->unkCB != 0)) {
        func_8022FD9C(arg0, arg1);
    }
}
