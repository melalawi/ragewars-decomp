#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

/** Expand the four-float X/Z bounds in arg0 over arg1 packed vectors. */
void func_80276580(f32 *arg0, s32 arg1, volatile Vec3 *arg2)
{
    f32 value;
    f32 bound;
    s32 i;

    i = 0;
    if (arg1 > 0) {
        do {
            value = arg2->x;
            bound = arg0[0];
            if (!(value <= bound)) {
                value = bound;
            }
            arg0[0] = value;

            value = arg2->z;
            bound = arg0[1];
            if (!(value <= bound)) {
                value = bound;
            }
            arg0[1] = value;

            value = arg2->x;
            bound = arg0[2];
            if (!(bound <= value)) {
                value = bound;
            }
            arg0[2] = value;

            value = arg2->z;
            bound = arg0[3];
            if (!(bound <= value)) {
                value = bound;
            }
            arg0[3] = value;

            i += 1;
            arg2 += 1;
        } while (i < arg1);
    }
}

/** Empty adjacent entry point included in func_80276580's Splat span. */
void func_80276610(void)
{
}
