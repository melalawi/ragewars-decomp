#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 func_802301E4(void *, void *);
extern s32 func_8025DE74(s16, Vec3, s32, s32);
extern void func_8022AFFC(void *arg0);
extern s32 func_80214178(void *, void *, s32);
extern void func_8022B180(s32);

void func_80232CDC(void *arg0, void *arg1) {
    void *state;

    state = *(void **)((char *)arg0 + 0x1D8);
    if (*(s8 *)((char *)arg1 + 0xCB) != 0) {
        if (func_802301E4(arg0, arg1) != 0) {
            *(s8 *)((char *)arg1 + 0xCB) = 0;
            *(s8 *)((char *)arg1 + 0x35) = -1;
        } else {
            switch (*(s16 *)((char *)state + 0x62E)) {
            case 8:
                func_8025DE74(0xA3E, *(Vec3 *)((char *)state + 8),
                              (s32)((char *)state + 8), -1);
            case 0:
            case 14:
                func_8022AFFC(state);
                func_80214178(arg0, arg1, 2);
                break;
            default:
                func_80214178(arg0, arg1, 2);
                break;
            }
        }
        *(s32 *)((char *)state + 0x788) = 1;
        *(s32 *)((char *)state + 0x78C) = 0;
    } else if ((*(s16 *)((char *)state + 0x62E) == 12) &&
               ((*(s32 *)((char *)state + 0x6AC) & 0x4000) != 0)) {
        func_8022B180((s32)state);
    }
}
