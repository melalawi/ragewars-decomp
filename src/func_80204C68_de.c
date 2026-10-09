#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80203F04.h"
#include "types.h"





extern s32 D_8011BDC8;
extern char D_801379C0;

extern void func_80285DB0_de(void *, void *, s32);
extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);
extern void func_802A5D38_de(void *, s32);
extern void func_80267198_de(void *, void *, s32, Triple, struct Shape_func_802764D4_de_2);






void func_80204C68_de(void *arg0, void *arg1) {
    struct Shape_func_802764D4_de_2 local;
    s32 *flag;

    local.field_0 = 0;
    flag = &D_8011BDC8;
    func_80285DB0_de(flag, arg0, 1);
    func_80278D78_de(arg0, 0x4000, arg0);
    ((func_80204C68_S1 *)(arg1))->unk64 = 0;
    func_802A5D38_de(&D_801379C0, arg0);
    if (*flag != 4) {
        func_80267198_de(arg0, arg0, 6,
                      ((func_80204C68_S2 *)(arg0))->unk8, local);
        ((func_80204C68_S2 *)(arg0))->unk100 |= 0x08000000;
    }
}
