#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_80207F1C_S1 func_80207F1C_S1;
struct func_80207F1C_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_80207F1C(void *arg0) {
    func_80285D80(&D_8011FE88, arg0, 0);
    ((func_80207F1C_S1 *)(arg0))->unk100 &= ~0x100;
}
