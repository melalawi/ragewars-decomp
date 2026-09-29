#include "basetypes.h"

extern char D_80145088;
extern s32 func_8022ABF0(void *arg0);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E70(void *, void *, void *);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

typedef struct func_802ADBF4_S1 func_802ADBF4_S1;
typedef struct func_802ADBF4_S2 func_802ADBF4_S2;
struct func_802ADBF4_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x174 - 0x10 - sizeof(s32)];
    s32 unk174;
    char pad174[0x5DC - 0x174 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x5E4 - 0x5DC - sizeof(void*)];
    s32 unk5E4;
};
struct func_802ADBF4_S2 {
    char pad0[0x6];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    s32 unkC;
};

/** Advance a timed effect and apply its optional resource, sound, and callback. */
s32 func_802ADBF4(void *arg0, void *arg1) {
    s32 result;
    void *resource;
    s32 sound;
    s32 callback;

    result = 0;
    if (((func_802ADBF4_S1 *)(arg0))->unk5E4 > 0) {
        s32 limit;

        ((func_802ADBF4_S1 *)(arg0))->unk5E4 +=
            ((func_802ADBF4_S2 *)(arg1))->unkC << 8;
        limit = func_8022ABF0(arg0);
        if (((func_802ADBF4_S1 *)(arg0))->unk5E4 < limit) {
            limit = ((func_802ADBF4_S1 *)(arg0))->unk5E4;
        }
        result = 1;
        ((func_802ADBF4_S1 *)(arg0))->unk5E4 = limit;
        ((func_802ADBF4_S1 *)(arg0))->unk174 = limit;
    }

    if (result != 0) {
        resource = *(void **)arg1;
        sound = ((func_802ADBF4_S2 *)(arg1))->unk6;
        callback = ((func_802ADBF4_S2 *)(arg1))->unk8;
        if (((func_802ADBF4_S1 *)(arg0))->unk5DC != 0) {
            func_8023919C(((func_802ADBF4_S1 *)(arg0))->unk5DC,
                          0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
            if (resource != 0) {
                func_80237E70(&D_80145088,
                              ((func_802ADBF4_S1 *)(arg0))->unk5DC,
                              *(void **)resource);
            }
        }
        if (sound != 0) {
            func_8025DE74(sound,
                          ((func_802ADBF4_S1 *)(arg0))->unk8,
                          ((func_802ADBF4_S1 *)(arg0))->unkC,
                          ((func_802ADBF4_S1 *)(arg0))->unk10, 0, -1);
        }
        if (callback != 0) {
            func_8025E13C(callback);
        }
    }
    return result;
}
