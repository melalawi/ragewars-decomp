#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern s32 D_8011FE88;

typedef struct func_802045CC_S1 func_802045CC_S1;
struct func_802045CC_S1 {
    char pad0[0x12C];
    s32 unk12C;
};

void func_802045CC(void *arg0, void *arg1) {
    func_80285D80(&D_8011FE88, arg0, 0);
    func_80278DE8(arg0, 0x200000, arg0);
    ((func_802045CC_S1 *)(arg1))->unk12C = 0;
}
