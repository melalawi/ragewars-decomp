#include "basetypes.h"

extern void func_80402FB4(s32, s32);
extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_802068C8_S1 func_802068C8_S1;
struct func_802068C8_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_802068C8(void *arg0, s32 arg1, s32 arg2) {
    func_80402FB4(arg0, arg2);
    ((func_802068C8_S1 *)(arg0))->unk100 |= 0x2100;
    func_80285D80(&D_8011FE88, arg0, 0);
}
