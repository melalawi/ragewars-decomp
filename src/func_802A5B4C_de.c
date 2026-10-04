#include "span_1000/code_802A6488.h"
#include "types.h"

extern f32 D_800C5EA0_de[2];

void func_802A5B4C_de(f32 *arg0) {
    f32 new_var;
    f32 new_var2;

    new_var2 = (new_var2 = *arg0);
    if (*arg0 < 0.0f) {
        *arg0 = 0.0f;
    } else {
        new_var = D_800C5EA0_de[1];
        if (new_var < new_var2) {
            *arg0 = new_var;
        }
    }
}
