#include "basetypes.h"

typedef struct {
    s16 f0;
    s16 f2;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fA;
    s16 fC;
} Event;

typedef struct {
    s32 (*callback)(void);
} Callback;

extern Callback *D_8014D0B0;
extern s32 func_8029A958(void);
extern void func_8029A5D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8029AE80(Event *arg0);
extern void func_8029B324(Event *arg0);

void func_8029B558(Event *arg0) {
    s32 temp_s0;

    if (D_8014D0B0->callback != 0 && D_8014D0B0->callback() == 1) {
        return;
    }

    switch (arg0->f4) {
    case 0:
        temp_s0 = ((u16)arg0->f0 << 16) | (u16)arg0->f2;
        func_8029A5D4(func_8029A958(), 0x11, temp_s0, arg0->fC, arg0->f6);
        break;
    case 1:
        if (arg0->f0 == 4) {
            arg0->f0 = 3;
            func_8029AE80(arg0);
        }
        break;
    case 2:
    case 3:
    case 4:
        if (arg0->f0 == 4) {
            arg0->f0 = 3;
            func_8029B324(arg0);
        }
        break;
    }
}
