#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);
extern s32 func_80285F58_de(void *, void *);
extern s32 D_8011BDC8;









void func_802066A4_de(void *arg0, void *arg1) {
    ((func_802066A4_S1 *)(arg1))->unk124 = ((func_802066A4_S3 *)(((func_80204468_S2 *)(arg0))->unk18))->unk18;
    func_80214178_de(arg0, arg1, 0);
    ((func_802066A4_S1 *)(arg1))->unk128 = D_800C1AE0_de;
    ((func_802066A4_S1 *)(arg1))->unk12C = D_800C1AE0_de;
    if (func_80285F58_de(&D_8011BDC8, arg0) == 1) {
        ((func_80204468_S2 *)(arg0))->unk100 &= ~0x2000;
        ((func_80204468_S2 *)(arg0))->unk100 &= ~0x100;
    }
}
