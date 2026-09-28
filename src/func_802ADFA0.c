#include "basetypes.h"

extern char D_80145088;
extern void func_80222BC4(void *, s16, s16);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E70(void *, void *, void *);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

/** Apply a three-channel effect descriptor and its optional payloads. */
s32 func_802ADFA0(void *arg0, void *arg1) {
    void *resource;
    s32 sound;
    s32 callback;

    func_80222BC4(arg0, 0, *(s16 *)((char *)arg1 + 0xC));
    func_80222BC4(arg0, 1, *(s16 *)((char *)arg1 + 0xE));
    func_80222BC4(arg0, 2, *(s16 *)((char *)arg1 + 0x10));

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
    return 1;
}
