/* Cycles a menu selection from directional input while skipping reserved entries. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct Input { char pad0[176]; s32 unkB0; } Input;
typedef struct State { char pad0[32]; Input * unk20; } State;
void func_8025E2F4(s32);                               /* extern */
extern s32 D_800E63B8;

s32 func_80445E28(s32 arg0, State *arg1) {
    s32 var_a0;

    var_a0 = D_800E63B8;
    if (arg1->unk20->unkB0 & 0x20202) {
        var_a0 -= 1;
        if (var_a0 < 0) {
            var_a0 = 0x16;
        } else if (var_a0 == 0xE) {
            var_a0 = 0xB;
        }
    }
    if (arg1->unk20->unkB0 & 0x4D101) {
        var_a0 += 1;
        if (var_a0 >= 0x17) {
            var_a0 = 0;
        } else if (var_a0 == 0xC) {
            var_a0 = 0xF;
        }
    }
    D_800E63B8 = var_a0;
    func_8025E2F4(var_a0);
    return 0;
}
