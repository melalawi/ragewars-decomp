#include "span_1000/code_802AD4B4.h"
#include "types.h"

extern char D_80140FC8;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
extern s32 func_8022AC00_de(void *arg0);
extern void func_802391AC_de(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E80_de(void *, void *, void *);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E11C_de(s32 arg0);

/** Advance a timed effect and apply its optional resource, sound, and callback. */
s32 func_802ACC04_de(void *arg0, void *arg1) {
    s32 result;
    void *resource;
    s32 sound;
    s32 callback;

    result = 0;
    if (((func_802ADBF4_S1 *)(arg0))->unk5E4 > 0) {
        s32 limit;

        ((func_802ADBF4_S1 *)(arg0))->unk5E4 +=
            ((func_802ADBF4_S2 *)(arg1))->unkC << 8;
        limit = func_8022AC00_de(arg0);
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
            func_802391AC_de(((func_802ADBF4_S1 *)(arg0))->unk5DC,
                          0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
            if (resource != 0) {
                func_80237E80_de(&D_80140FC8,
                              ((func_802ADBF4_S1 *)(arg0))->unk5DC,
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                          ((void **)resource)[D_80152789]);
#else
                          *(void **)resource);
#endif
            }
        }
        if (sound != 0) {
            func_8025DE54_de(sound,
                          ((func_802ADBF4_S1 *)(arg0))->unk8,
                          ((func_802ADBF4_S1 *)(arg0))->unkC,
                          ((func_802ADBF4_S1 *)(arg0))->unk10, 0, -1);
        }
        if (callback != 0) {
            func_8025E11C_de(callback);
        }
    }
    return result;
}
