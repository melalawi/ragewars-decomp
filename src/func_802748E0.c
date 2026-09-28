#include "basetypes.h"

extern f32 D_800C9A50[2];
extern f32 D_800D2988;

void func_802748E0(f32 *value, f32 target, f32 rate) {
    f32 current;
    f32 next;

    current = *value;
    next = (target - current) * rate * D_800D2988;
    if (rate == D_800C9A50[1]) {
        *value = target;
    } else if (current < target) {
        *value += next;
        if (target < *value) {
            *value = target;
        }
    } else if (target < current) {
        *value += next;
        if (*value < target) {
            *value = target;
        }
    }
}
