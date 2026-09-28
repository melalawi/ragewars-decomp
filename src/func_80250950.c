#include "basetypes.h"

extern void *func_80250754(void *arg0, s32 arg1);
extern void func_8026E158(void **arg0);
extern s32 func_80251F0C(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5, void *arg6, void *arg7, s32 arg8);
extern void func_802536F4(s32 arg0, s32 arg1);

extern s32 D_800D2640;
extern char D_250BD4;
extern char D_800C8F30;

void func_80250950(void *arg0) {
    char *o = (char *) arg0;
    void *temp_v0;
    s32 ret2;

    if (!(*(u16 *) (o + 0xD8) & 0x40)) {
        temp_v0 = func_80250754(arg0, *(s8 *) (o + 1));
        if (temp_v0 != 0) {
            func_8026E158((void **) temp_v0);
            ret2 = func_80251F0C(0, *(s32 *) (o + 0xD0) | D_800D2640, temp_v0, *(s32 *) (o + 0x20), 8, arg0, &D_250BD4, &D_800C8F30, 0);
            if (ret2 != 0) {
                func_802536F4(0, ret2);
            }
            func_802536F4(0, (s32) temp_v0);
        }
    }
}
