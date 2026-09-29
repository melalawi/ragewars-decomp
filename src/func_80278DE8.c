#include "basetypes.h"

extern s32 func_80279274(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6);
extern s32 func_8028C248(s8 *arg0, void *arg1, s32 *arg2, s32 *arg3);
extern s8 D_8011FE88[];

typedef struct func_80278DE8_S1 func_80278DE8_S1;
struct func_80278DE8_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_80278DE8(void *arg0, s32 arg1, void *arg2) {
    s32 sp20;
    s32 sp24;

    if (!(((func_80278DE8_S1 *)(arg0))->unk100 & 0x80000)) {
        func_8028C248(D_8011FE88, arg0, &sp20, &sp24);
        if (sp24 != 0) {
            func_80279274(sp20, sp24, 0, arg1 & 0x3FC1FF, arg1 & 0x400000, 0x400000, arg2);
        }
    }
}
