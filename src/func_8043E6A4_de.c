#include "common/types.h"
#include "span_16E000/code_8043E364.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Steps the selection D_800E1DF8_de through func_804423BC_de (a second step when func_802643A0_de or
   func_8026437C_de reports the object's controller busy), then sets D_80142228 to the chosen entry of the
   float table D_00450854 plus the offset in D_800DE328, clamped between D_800DE330_de and (2.0f). */





extern s32 D_800E1DF8_de;
extern Extra D_800DE328;


extern f32 D_0044FC28_de[];

extern s32 func_804423BC_de(struct Shape_typemap_114 *, s32, s32, s32, s32, s32);
extern s32 func_802643A0_de(s32);
extern s32 func_8026437C_de(s32);

s32 func_8043E6A4_de(void *arg0, struct Shape_typemap_114 *obj)
{
    f32 scale;

    D_800E1DF8_de = func_804423BC_de(obj, D_800E1DF8_de, 1, 0, 15, 0);
    if (func_802643A0_de(obj->field_20) != 0 || func_8026437C_de(obj->field_20) != 0) {
        func_804423BC_de(obj, D_800E1DF8_de, 1, 0, 15, 0);
    }
    scale = D_0044FC28_de[D_800E1DF8_de] + D_800DE328.scale;
    if (!(scale < D_800DE330_de)) {
        if (!(scale > (2.0f))) {
            if (scale < D_800DE330_de) {
                scale = D_800DE330_de;
            }
        } else {
            scale = (2.0f);
        }
    } else {
        scale = D_800DE330_de;
    }
    D_80142228 = scale;
    return 0;
}
