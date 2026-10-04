#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_8011BDC8;
extern void func_80285DB0_de(void *, void *, s32);




void func_802067BC_de(void *arg0) {
    s32 v = ((func_80203C40_S1 *)(arg0))->unk100;
    v &= ~0x2000;
    v &= ~0x100;
    ((func_80203C40_S1 *)(arg0))->unk100 = v;
    func_80285DB0_de(&D_8011BDC8, arg0, 1);
}
