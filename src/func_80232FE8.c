#include "basetypes.h"

extern s32 func_80222A80(void *arg0, s16 arg1);
extern s16 func_8022F95C(void *arg0);
extern s32 func_802301E4(void *, void *);
extern s32 func_80214178(void *, void *, s32);

extern s16 D_800CE8DC;

void func_80232FE8(void *arg0, void *arg1) {
    char *o = (char *) arg0;
    void *temp_s0;
    s16 idx;
    s32 temp_s3;

    temp_s0 = *(void **) (o + 0x1D8);
    idx = *(s16 *) ((char *) temp_s0 + 0x650);
    temp_s3 = *(s16 *) ((char *) &D_800CE8DC + idx * 0x18);

    if (func_80222A80(temp_s0, *(s16 *) ((char *) temp_s0 + 0x62E)) == 0) {
        *(s16 *) ((char *) temp_s0 + 0x770) = func_8022F95C(temp_s0);
    } else {
        *(s32 *) ((char *) arg1 + 0x13C) = 1;
        if (func_802301E4(arg0, arg1) == 0 && !(*(s32 *) (o + 0x100) & 0x400)) {
            func_80214178(arg0, arg1, temp_s3);
        }
    }
}
