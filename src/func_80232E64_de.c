#include "span_1000/code_80231F5C.h"
#include "types.h"




extern f32 D_800C3030_de[];


extern f32 D_800CD738;

extern s32 func_802301F4_de(void *, void *);
extern void func_8022B00C_de(void *arg0);

#define FIELD(p, t, o) (*(t *)((s8 *)(p) + (o)))

void func_80232E64_de(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = FIELD(arg0, void *, 0x1D8);
    FIELD(arg1, f32, 0x124) += (FIELD(arg1, f32, 0x128) * D_800CD738) * 2.0f;
    temp_f1 = FIELD(arg1, f32, 0x128);
    temp_v0 = FIELD(temp_s1, void *, 0x698);
    if (!(temp_f1 < 0.0f
              ? D_800C3028_de < (-temp_f1 * *(&D_800C3020_de + 1))
              : D_800C3030_de[0] < (temp_f1 * D_800C302C_de))) {
        temp_f2 = FIELD(arg1, f32, 0x128);
        if (temp_f2 < 0.0f) {
            FIELD(temp_v0, f32, 0x168) = (f32) (-temp_f2 * D_800C3030_de[1]);
        } else {
            FIELD(temp_v0, f32, 0x168) = (f32) (temp_f2 * D_800C3038_de);
        }
    } else {
        FIELD(temp_v0, f32, 0x168) = (f32) D_800C303C_de;
    }

    if (FIELD(arg1, s8, 0xCB) != 0) {
        FIELD(arg1, s32, 0x13C) = 2;
        if (func_802301F4_de(arg0, arg1) != 0) {
            FIELD(arg1, s32, 0x13C) = 1;
            func_8022B00C_de(temp_s1);
        }
    }
}
