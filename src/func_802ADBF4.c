#include "basetypes.h"

extern char D_80145088;
extern s32 func_8022ABF0(void *arg0);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E70(void *, void *, void *);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

/** Advance a timed effect and apply its optional resource, sound, and callback. */
s32 func_802ADBF4(void *arg0, void *arg1) {
    s32 result;
    void *resource;
    s32 sound;
    s32 callback;

    result = 0;
    if (*(s32 *)((char *)arg0 + 0x5E4) > 0) {
        s32 limit;

        *(s32 *)((char *)arg0 + 0x5E4) +=
            *(s32 *)((char *)arg1 + 0xC) << 8;
        limit = func_8022ABF0(arg0);
        if (*(s32 *)((char *)arg0 + 0x5E4) < limit) {
            limit = *(s32 *)((char *)arg0 + 0x5E4);
        }
        result = 1;
        *(s32 *)((char *)arg0 + 0x5E4) = limit;
        *(s32 *)((char *)arg0 + 0x174) = limit;
    }

    if (result != 0) {
        resource = *(void **)arg1;
        sound = *(s16 *)((char *)arg1 + 6);
        callback = *(s16 *)((char *)arg1 + 8);
        if (*(void **)((char *)arg0 + 0x5DC) != 0) {
            func_8023919C(*(void **)((char *)arg0 + 0x5DC),
                          0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
            if (resource != 0) {
                func_80237E70(&D_80145088,
                              *(void **)((char *)arg0 + 0x5DC),
                              *(void **)resource);
            }
        }
        if (sound != 0) {
            func_8025DE74(sound,
                          *(s32 *)((char *)arg0 + 8),
                          *(s32 *)((char *)arg0 + 0xC),
                          *(s32 *)((char *)arg0 + 0x10), 0, -1);
        }
        if (callback != 0) {
            func_8025E13C(callback);
        }
    }
    return result;
}
