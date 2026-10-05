#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80207ABC.h"
#include "types.h"

extern void func_80285DB0_de(void *, void *, s32);
extern s32 D_8011BDC8;




void func_80207F1C_de(void *arg0) {
    func_80285DB0_de(&D_8011BDC8, arg0, 0);
    ((func_80203C40_S1 *)(arg0))->unk100 &= ~0x100;
}
