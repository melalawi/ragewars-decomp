#include "span_1000/code_80231F5C.h"
#include "types.h"
#include "common/draft_fields_func_80232E64_de.h"




extern f32 D_800C3030_de[];


extern f32 D_800CD738;

extern s32 func_802301F4_de(void *, void *);
extern void func_8022B00C_de(void *arg0);


void func_80232E64_de(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = ((struct Measured_func_80232E64_de_254bde2b70a7 *)(arg0))->value;
    ((struct Measured_func_80232E64_de_63e464e681dd *)(arg1))->value += (((struct Measured_func_80232E64_de_1121ff480e8c *)(arg1))->value * D_800CD738) * 2.0f;
    temp_f1 = ((struct Measured_func_80232E64_de_1121ff480e8c *)(arg1))->value;
    temp_v0 = ((struct Measured_func_80232E64_de_e14799a7bd20 *)(temp_s1))->value;
    if (!(temp_f1 < 0.0f
              ? D_800C3028_de < (-temp_f1 * *(&D_800C3020_de + 1))
              : D_800C3030_de[0] < (temp_f1 * D_800C302C_de))) {
        temp_f2 = ((struct Measured_func_80232E64_de_1121ff480e8c *)(arg1))->value;
        if (temp_f2 < 0.0f) {
            ((struct Measured_func_80232E64_de_3b88d34c5017 *)(temp_v0))->value = (f32) (-temp_f2 * D_800C3030_de[1]);
        } else {
            ((struct Measured_func_80232E64_de_3b88d34c5017 *)(temp_v0))->value = (f32) (temp_f2 * D_800C3038_de);
        }
    } else {
        ((struct Measured_func_80232E64_de_3b88d34c5017 *)(temp_v0))->value = (f32) D_800C303C_de;
    }

    if (((struct Measured_func_80232E64_de_290aeff52e0f *)(arg1))->value != 0) {
        ((struct Measured_func_80232E64_de_c81749e15341 *)(arg1))->value = 2;
        if (func_802301F4_de(arg0, arg1) != 0) {
            ((struct Measured_func_80232E64_de_c81749e15341 *)(arg1))->value = 1;
            func_8022B00C_de(temp_s1);
        }
    }
}
