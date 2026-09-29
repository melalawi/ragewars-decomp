#include "basetypes.h"

extern s32 func_8028B1F8(void *arg0, s32 arg1);
extern s32 func_8028C174(void *arg0, s32 arg1);
extern void func_8026DF30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 D_8011FE88;
extern char D_800D0EF8;

typedef struct func_8022B474_S1 func_8022B474_S1;
struct func_8022B474_S1 {
    char pad0[0x120C];
    s32 unk120C;
};

void func_8022B474(char *arg0) {
    s32 index;

    if (((func_8022B474_S1 *)(arg0))->unk120C != 0) {
        index = func_8028B1F8(&D_8011FE88, 0xC84);
    } else {
        index = func_8028B1F8(&D_8011FE88, 0xC85);
    }
    if (index != -1) {
        func_8026DF30(func_8028C174(&D_8011FE88, index),
                      (s32)((char *)arg0 + 0x1600), (s32)&D_800D0EF8, 0, -1);
    }
}
