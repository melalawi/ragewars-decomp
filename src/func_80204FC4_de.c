#include "span_1000/code_80204A68.h"
/** Report whether the actor on the given cell is within the scaled trigger distance. */




int func_80204FC4_de(Actor_func_80204FC4_de *actor, Cell *cell, float scale) {
    if (actor->always == 1) {
        return 1;
    }
    if (actor->x == (signed char)cell->pos && actor->y == (signed char)cell->pos) {
        if (cell->open != 0 && !(actor->flags & 0x400)) {
            return 1;
        }
        if (actor->level < 3 && (actor->flags & 0x400)) {
            if (actor->altLevel * scale <= actor->altRange) {
                return 1;
            }
            return 0;
        }
        if (actor->level * scale <= actor->range) {
            return 1;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2098_4 = 3.40282347e+38f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7218_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2340_4 = 360000.0f;
const float unbake_rodata_800C2344_4 = 0.400000006f;
const float unbake_rodata_800C2348_4 = 3.14159274f;
const float unbake_rodata_800C234C_4 = 1.57079637f;
const float unbake_rodata_800C2350_4 = 100.0f;
const float unbake_rodata_800C2354_4 = 3.14159274f;
const float unbake_rodata_800C2358_4 = 1.57079637f;
const float unbake_rodata_800C235C_4 = 100.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2380_4 = 360000.0f;
const float unbake_rodata_800C2384_4 = 0.400000006f;
const float unbake_rodata_800C2388_4 = 3.14159274f;
const float unbake_rodata_800C238C_4 = 1.57079637f;
const float unbake_rodata_800C2390_4 = 100.0f;
const float unbake_rodata_800C2394_4 = 3.14159274f;
const float unbake_rodata_800C2398_4 = 1.57079637f;
const float unbake_rodata_800C239C_4 = 100.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C20E0_4 = 102.399994f;
const float unbake_rodata_800C20E4_4 = 51.1999969f;
#endif
