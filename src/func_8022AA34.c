#include "shared/func_8022aa34.h"
f32 func_8022AA34(Shared_func_8022AA34_View *arg0) {
    f32 value;
    f32 scaled;
    f32 initial;
    initial = arg0->value - 285.0f;
    if (arg0->override != 0) {
        value = 1.0f;
    } else {
        scaled = initial * 0.06666667f;
        if (scaled > 1.0f) {
            value = 1.0f;
        } else {
            value = scaled;
        }
    }
    return 1.0f - value;
}
