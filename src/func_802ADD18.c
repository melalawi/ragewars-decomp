#include "basetypes.h"

extern char D_80145088;
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E70(void *, void *, void *);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

typedef struct func_802ADD18_S1 func_802ADD18_S1;
typedef struct func_802ADD18_S2 func_802ADD18_S2;
typedef union func_802ADD18_S1_U5E8 { u16 v0; s16 v1; } func_802ADD18_S1_U5E8;
typedef union func_802ADD18_S1_U5EA { s16 v0; u16 v1; } func_802ADD18_S1_U5EA;
struct func_802ADD18_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5DC - 0x10 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x5E8 - 0x5DC - sizeof(void*)];
    func_802ADD18_S1_U5E8 unk5E8;
    char pad5E8[0x5EA - 0x5E8 - sizeof(func_802ADD18_S1_U5E8)];
    func_802ADD18_S1_U5EA unk5EA;
};
struct func_802ADD18_S2 {
    char pad0[0x6];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    u16 unkC;
};

/** Apply an accumulating effect descriptor and its optional payloads. */
s32 func_802ADD18(void *arg0, void *arg1) {
    void *resource;
    s32 sound;
    s32 callback;
    s32 amount;

    amount = ((func_802ADD18_S1 *)(arg0))->unk5E8.v0 +
             ((func_802ADD18_S2 *)(arg1))->unkC;
    ((func_802ADD18_S1 *)(arg0))->unk5E8.v1 = amount;
    if ((s16)amount >= 100) {
        ((func_802ADD18_S1 *)(arg0))->unk5E8.v1 = amount - 100;
        if (((func_802ADD18_S1 *)(arg0))->unk5EA.v0 < 9) {
            ((func_802ADD18_S1 *)(arg0))->unk5EA.v0 =
                ((func_802ADD18_S1 *)(arg0))->unk5EA.v1 + 1;
        }
    }

    resource = *(void **)arg1;
    sound = ((func_802ADD18_S2 *)(arg1))->unk6;
    callback = ((func_802ADD18_S2 *)(arg1))->unk8;
    if (((func_802ADD18_S1 *)(arg0))->unk5DC != 0) {
        func_8023919C(((func_802ADD18_S1 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E70(&D_80145088,
                          ((func_802ADD18_S1 *)(arg0))->unk5DC,
                          *(void **)resource);
        }
    }
    if (sound != 0) {
        func_8025DE74(sound,
                      ((func_802ADD18_S1 *)(arg0))->unk8,
                      ((func_802ADD18_S1 *)(arg0))->unkC,
                      ((func_802ADD18_S1 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E13C(callback);
    }
    return 1;
}
