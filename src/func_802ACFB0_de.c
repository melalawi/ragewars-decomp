#include "span_1000/code_802AB3FC.h"
#include "types.h"

extern char D_80140FC8;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
extern void func_80222BE8_de(void *, s16, s16);
extern void func_802391AC_de(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E80_de(void *, void *, void *);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E11C_de(s32 arg0);






/** Apply a three-channel effect descriptor and its optional payloads. */
s32 func_802ACFB0_de(void *arg0, void *arg1) {
    void *resource;
    s32 sound;
    s32 callback;

    func_80222BE8_de(arg0, 0, ((func_802ADFA0_S1 *)(arg1))->unkC);
    func_80222BE8_de(arg0, 1, ((func_802ADFA0_S1 *)(arg1))->unkE);
    func_80222BE8_de(arg0, 2, ((func_802ADFA0_S1 *)(arg1))->unk10);

    resource = *(void **)arg1;
    sound = ((func_802ADFA0_S1 *)(arg1))->unk6;
    callback = ((func_802ADFA0_S1 *)(arg1))->unk8;
    if (((func_802ADB08_S2 *)(arg0))->unk5DC != 0) {
        func_802391AC_de(((func_802ADB08_S2 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E80_de(&D_80140FC8,
                          ((func_802ADB08_S2 *)(arg0))->unk5DC,
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                          ((void **)resource)[D_80152789]);
#else
                          *(void **)resource);
#endif
        }
    }
    if (sound != 0) {
        func_8025DE54_de(sound,
                      ((func_802ADB08_S2 *)(arg0))->unk8,
                      ((func_802ADB08_S2 *)(arg0))->unkC,
                      ((func_802ADB08_S2 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E11C_de(callback);
    }
    return 1;
}
