#include "common/types.h"
#include "span_16E000/code_8040AC98.h"
#include "types.h"
/* Starts the configured action using the actor resource or the shared fallback. */
#define NULL ((void *)0)
 
void func_80442574_de(void *, s32, void *, s32, s32);        /* extern */
extern s32 D_800DE870;
extern char D_8014155C;
extern s32 D_80146CE0;
extern s32 D_8014D480;
extern s32 D_8014D4CC;

s32 func_8040B648_de(s32 arg0, Action_func_8040B648_de *arg1) {
    void *var_a0;
    func_8024795C_S2 *temp_v0;

    D_800DE870 = 1;
    D_8014D480 = 0;
    if (D_8014D4CC != 0) {
        D_80146CE0 = 1;
    } else {
        temp_v0 = arg1->unk1C;
        if (temp_v0 != NULL) {
            var_a0 = temp_v0->unk5DC + 0x554;
        } else {
            var_a0 = &D_8014155C;
        }
        func_80442574_de(var_a0, arg1->unk24, arg1->unk1C, arg1->unk20, 0);
    }
    return 1;
}
