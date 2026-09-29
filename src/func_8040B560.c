#include "basetypes.h"

typedef struct {
    char pad0[4];
    s8 value;
} Inner;

typedef struct {
    char pad0[0x1C];
    void *unk1C;
    Inner *unk20;
    void *unk24;
} Action;

extern s32 D_8015375C;
extern s32 D_80153784;
extern s32 D_800E28C8;
extern char D_44FAD8;
extern char D_8014561C;
extern s32 func_80406178(Action *action, s32 channel, s32 arg2);
extern void func_804426E4(void *dst, void *text, void *arg2, void *arg3, void *arg4);

/* Starts the action's channel (D_800E28C8 in demo mode, else the record's inner value) through func_80406178; on success loads the record's actor resource into D_8014561C and latches D_80153784, otherwise loads the shared fallback text with the actor as extra argument. Returns 1. */
s32 func_8040B560(s32 arg0, Action *arg1) {
    s32 channel;

    if (D_8015375C != 0) {
        channel = D_800E28C8;
    } else {
        channel = arg1->unk20->value;
    }
    if (func_80406178(arg1, channel, 1) == 0) {
        func_804426E4(&D_8014561C, &D_44FAD8, arg1->unk1C, arg1->unk20, arg1->unk24);
    } else {
        D_80153784 = 1;
        func_804426E4(&D_8014561C, arg1->unk24, arg1->unk1C, arg1->unk20, 0);
    }
    return 1;
    do {
    } while (0);
}
