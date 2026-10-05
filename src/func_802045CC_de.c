#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80203F04.h"
#include "types.h"

extern void func_80285DB0_de(void *, void *, s32);
extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);
extern s32 D_8011BDC8;




void func_802045CC_de(void *arg0, void *arg1) {
    func_80285DB0_de(&D_8011BDC8, arg0, 0);
    func_80278D78_de(arg0, 0x200000, arg0);
    ((func_802045CC_S1 *)(arg1))->unk12C = 0;
}
