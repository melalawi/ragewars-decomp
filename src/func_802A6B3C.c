#include "basetypes.h"

extern f32 D_800CB030[2];

void func_802A6B3C(f32 *arg0) {
    f32 new_var;
    f32 new_var2;

    new_var2 = (new_var2 = *arg0);
    if (*arg0 < 0.0f) {
        *arg0 = 0.0f;
    } else {
        new_var = D_800CB030[1];
        if (new_var < new_var2) {
            *arg0 = new_var;
        }
    }
}
