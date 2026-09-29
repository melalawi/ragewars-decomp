#include "basetypes.h"

extern s32 D_8011FE88;
extern void func_80285D80(void *, void *, s32);

typedef struct func_802067BC_S1 func_802067BC_S1;
struct func_802067BC_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_802067BC(void *arg0) {
    s32 v = ((func_802067BC_S1 *)(arg0))->unk100;
    v &= ~0x2000;
    v &= ~0x100;
    ((func_802067BC_S1 *)(arg0))->unk100 = v;
    func_80285D80(&D_8011FE88, arg0, 1);
}
