#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80402FB4_de(s32, s32);
extern void func_80285DB0_de(void *, void *, s32);
extern s32 D_8011BDC8;




void func_802068C8_de(void *arg0, s32 arg1, s32 arg2) {
    func_80402FB4_de(arg0, arg2);
    ((func_80203C40_S1 *)(arg0))->unk100 |= 0x2100;
    func_80285DB0_de(&D_8011BDC8, arg0, 0);
}
