#include "common/types.h"
#include "span_1000/code_8023940C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 func_80245798_de(void);
extern s32 func_80286728_de(void *arg0, void *arg1);
extern f32 func_80275DD4_de(s32 arg0, f32 arg1, f32 arg2);
extern s32 D_8011BDC8;
extern s32 D_800CD8D0;









void func_80239FDC_de(void *arg0) {
    s32 object;
    f32 value;
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    if (func_80245798_de() != 0) {
        ((func_80239FCC_S1 *)(arg0))->unk58 = func_80286728_de(&D_8011BDC8, (char *)arg0 + 0x38);
    }
    object = ((func_80239FCC_S1 *)(arg0))->unk58;
    x = ((func_80239FCC_S1 *)(arg0))->unk38;
    y = ((func_80239FCC_S1 *)(arg0))->unk3C;
    z = ((func_80239FCC_S1 *)(arg0))->unk40;
    w = ((func_80239FCC_S1 *)(arg0))->unk44;
    ((func_80239FCC_S1 *)(arg0))->unk64 = D_800CD8D0;
    if (object != 0 && func_80245798_de() == 0) {
        value = ((y + w) - func_80275DD4_de(object, x, z)) * D_800C3590_de;
        if (value < D_800C3594_de && D_800C3598_de < value) {
            ((func_80239FCC_S1 *)(arg0))->unk64 = ((MenuRules *)(object))->locked;
        }
    }
    if (func_80245798_de() != 0) {
        ((func_80239FCC_S1 *)(arg0))->unk64 = D_800CD8D0;
    }
    if (((func_80239FCC_S1 *)(arg0))->unk5C > 0.0f) {
        ((func_80239FCC_S1 *)(arg0))->unk64 = D_800CD8D0;
    }
}
