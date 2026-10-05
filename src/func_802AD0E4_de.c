#include "span_1000/code_802AB3FC.h"
#include "types.h"
extern LocalizedEffectContext D_80140FC8;
extern void func_802391AC_de(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E80_de(void *, void *, void *);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E11C_de(s32 arg0);

/** Apply optional resource, sound, and callback effects for an actor. */
void func_802AD0E4_de(void *arg0, void *resource, s32 sound, s32 callback) {
    if (((func_802ADD18_S1 *)(arg0))->unk5DC != 0) {
        func_802391AC_de(((func_802ADD18_S1 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E80_de(&D_80140FC8,
                          ((func_802ADD18_S1 *)(arg0))->unk5DC,
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                          ((void **)resource)[D_80140FC8.language]);
#else
                          *(void **)resource);
#endif
        }
    }
    if (sound != 0) {
        func_8025DE54_de((s16)sound,
                      ((func_802ADD18_S1 *)(arg0))->unk8,
                      ((func_802ADD18_S1 *)(arg0))->unkC,
                      ((func_802ADD18_S1 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E11C_de(callback);
    }
}
