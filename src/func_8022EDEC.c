#include "basetypes.h"

extern s32 D_80146910;

extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_80218464(void *arg0);
extern s32 func_80214178(void *arg0, void *arg1, s32 arg2);
extern void func_8021B1E4(void *, s32, s32, s32);
extern void func_802266E4(void *arg0);

void func_8022EDEC(void *arg0) {
    s32 mode;

    *(char *)((char *)*(void **)((char *)arg0 + 0x5D8) + 0x8F) = 1;
    mode = D_80146910;
    switch (mode) {
    case 0:
        func_8025DE74(0x18A1,
                      *(s32 *)((char *)arg0 + 8),
                      *(s32 *)((char *)arg0 + 0xC),
                      *(s32 *)((char *)arg0 + 0x10),
                      (s32)((char *)arg0 + 8), -1);
        break;
    case 1:
        func_8025DE74(0x1969,
                      *(s32 *)((char *)arg0 + 8),
                      *(s32 *)((char *)arg0 + 0xC),
                      *(s32 *)((char *)arg0 + 0x10),
                      (s32)((char *)arg0 + 8), -1);
        break;
    case 2:
        func_8025DE74(0x1905,
                      *(s32 *)((char *)arg0 + 8),
                      *(s32 *)((char *)arg0 + 0xC),
                      *(s32 *)((char *)arg0 + 0x10),
                      (s32)((char *)arg0 + 8), -1);
        break;
    }
    func_80218464((char *)arg0 + 0x938);
    *(s32 *)((char *)arg0 + 0x11B4) = 0;
    func_80214178((char *)arg0 + 0x2E8, (char *)arg0 + 0x458, 1);
    func_8021B1E4(arg0, *(void **)((char *)arg0 + 0x5EC), 0, 1);
    func_802266E4(arg0);
}
