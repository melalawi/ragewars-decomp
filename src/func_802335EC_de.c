#include "span_1000/code_80232B44.h"
#include "span_C76B0/data.h"
#include "types.h"





extern f32 D_800C3068_de[];


extern s32 D_800CA2D8_de;
extern void func_80274870_de(f32 *, f32, f32);

#define FIELD(p, t, o) (*(t *)((s8 *)(p) + (o)))

void func_802335EC_de(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = FIELD(arg0, void *, 0x1D8);
    if (FIELD(arg1, s8, 0x34) == 5) {
        func_80274870_de(arg1 + 0x128, (f32) D_800CA2D8_de * D_800C3058_de, 0.4f);
    } else {
        func_80274870_de(arg1 + 0x128, 0.0f, 0.4f);
    }
    temp_f1 = FIELD(arg1, f32, 0x128);
    temp_v0 = FIELD(temp_s1, void *, 0x698);
    if (!(temp_f1 < 0.0f
              ? D_800C3060_de < (-temp_f1 * D_800C305C_de)
              : D_800C3068_de[0] < (temp_f1 * D_800C3064_de))) {
        temp_f2 = FIELD(arg1, f32, 0x128);
        if (temp_f2 < 0.0f) {
            FIELD(temp_v0, f32, 0x168) = (f32) (-temp_f2 * D_800C3068_de[1]);
            return;
        }
        FIELD(temp_v0, f32, 0x168) = (f32) (temp_f2 * D_800C3070_de);
        return;
    }
    FIELD(temp_v0, f32, 0x168) = (f32) D_800C3074_de;
}
