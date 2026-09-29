#include "basetypes.h"

extern int func_80245788(void);
extern void func_802472E0(void *arg0);
extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_8020682C_S1 func_8020682C_S1;
struct func_8020682C_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_8020682C(void *arg0, s32 *arg1) {
    ((func_8020682C_S1 *)(arg0))->unk100 |= 0x2100;
    if (func_80245788() != 0) {
        *arg1 |= 0x200;
    }
    func_802472E0(arg0);
    func_80285D80(&D_8011FE88, arg0, 0);
}
