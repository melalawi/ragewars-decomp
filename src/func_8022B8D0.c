#include "basetypes.h"

extern void func_80216488(void *arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800D2988;
extern s32 D_801462C8;

typedef struct {
    char data[24];
} Local;

void func_8022B8D0(void *arg0) {
    volatile Local sp18;
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = *(f32 *)((char *)arg0 + 0x11E4);
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800D2988;
        *(f32 *)((char *)arg0 + 0x11E4) = temp_f0;
        if ((temp_f0 <= 0.0f) && !(D_801462C8 & 1)) {
            func_80216488(&sp18,
                          *(s32 *)((char *)arg0 + 0x13E0),
                          *(s32 *)((char *)arg0 + 0x174) + 0x1900,
                          25.599998f, 0x4000, 0);
            func_80219A40(arg0, (char *)arg0 + 0x170, &sp18);
        }
    }
}
