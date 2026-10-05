#include "span_1000/code_80245980.h"
#include "types.h"

extern f32 func_8040184C_de(f32 arg0);
extern void *D_800DE7E0;






f32 func_802459A0_de(void) {
    void *record = D_800DE7E0;
    f32 temp_f1;

    if (((func_80245990_S1 *)(record))->unk38 == 0) {
        return D_800C37D4_de;
    }
    temp_f1 = ((func_80245990_S1 *)(record))->unk100;
    if (!(D_800C37D8_de < temp_f1)) {
        return func_8040184C_de(((func_80245990_S1 *)(record))->unk1C);
    }
    return temp_f1;
}
