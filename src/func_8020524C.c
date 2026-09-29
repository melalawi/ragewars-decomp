#include "basetypes.h"

extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_8020524C_S1 func_8020524C_S1;
struct func_8020524C_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_8020524C(void *arg0, void *arg1) {
    if (func_80285F28(&D_8011FE88, arg0) == 1) {
        func_80214178(arg0, arg1, 1);
    } else {
        func_80214178(arg0, arg1, 0);
        ((func_8020524C_S1 *)(arg0))->unk100 |= 0x10000;
    }
}
