#include "span_1000/code_8025AE3C.h"
#include "span_C76B0/data.h"
#include "types.h"




f32 func_8025C10C_de(f32 *a, f32 *b) {
    f32 dx = a[0] - b[0];
    f32 dy = a[1] - b[1];
    f32 dz = a[2] - b[2];
    f32 distSq = (dx * dx) + (dy * dy) + (dz * dz);
    if (D_800CBAD0 <= distSq) {
        return 0.0f;
    }
    return D_800C3F88_de - (distSq / D_800CBAD0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3EB8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9078_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4238_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4278_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F88_4 = 1.0f;
#endif
