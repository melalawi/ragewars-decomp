#include "basetypes.h"

extern char D_80145088;
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E70(void *, void *, void *);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

typedef struct func_802AE0D4_S1 func_802AE0D4_S1;
struct func_802AE0D4_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5DC - 0x10 - sizeof(s32)];
    void* unk5DC;
};

/** Apply optional resource, sound, and callback effects for an actor. */
void func_802AE0D4(void *arg0, void *resource, s32 sound, s32 callback) {
    if (((func_802AE0D4_S1 *)(arg0))->unk5DC != 0) {
        func_8023919C(((func_802AE0D4_S1 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E70(&D_80145088,
                          ((func_802AE0D4_S1 *)(arg0))->unk5DC,
                          *(void **)resource);
        }
    }
    if (sound != 0) {
        func_8025DE74((s16)sound,
                      ((func_802AE0D4_S1 *)(arg0))->unk8,
                      ((func_802AE0D4_S1 *)(arg0))->unkC,
                      ((func_802AE0D4_S1 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E13C(callback);
    }
}
