#include "span_1000/code_80273744.h"
#include "types.h"

extern f32 D_800C4960_de[2];
extern f32 D_800CD738;

void func_80274870_de(f32 *value, f32 target, f32 rate) {
    f32 current;
    f32 next;

    current = *value;
    next = (target - current) * rate * D_800CD738;
    if (rate == D_800C4960_de[1]) {
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4894_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A54_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C14_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C54_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4964_4 = 1.0f;
#endif
