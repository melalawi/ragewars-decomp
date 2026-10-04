#include "span_1000/code_80232B44.h"
#include "span_C76B0/data.h"
/* Applies the negated, scaled speed of the event's source (float at 0x294, scaled by D_800C8130) to an
   object through func_802739C4_de when the event side at 0x4 matches the mode: side 2 in mode 1, side 0
   otherwise. */





extern int D_80140FF8;
extern void func_802739C4_de(void *, float);

void func_80232F8C_de(void *obj, Event *event) {
    float v = event->source->speed * D_800C3040_de;

    if (D_80140FF8 == 1) {
        if (event->side == 2) {
            func_802739C4_de(obj, -v);
        }
    } else if (event->side == 0) {
        func_802739C4_de(obj, -v);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F70_4 = 1.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8130_4 = 1.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32F0_4 = 1.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3330_4 = 1.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3040_4 = 1.5f;
#endif
