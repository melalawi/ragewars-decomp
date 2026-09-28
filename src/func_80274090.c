#include "basetypes.h"

extern f32 D_800C9A08;
extern f32 D_800C9A10;
extern f32 D_800C9A18;

void func_80274090(f32 *value)
{
    {
        f32 val;
        f32 limit;
        f32 step;

        val = *value;
        limit = *(&D_800C9A08 + 1);
        if (val < limit) {
            step = D_800C9A10;
            do {
                val += step;
                *value = val;
            } while (val < limit);
        }
    }
    {
        f32 val;
        f32 limit;
        f32 step;

        val = *value;
        limit = *(&D_800C9A10 + 1);
        if (limit <= val) {
            step = D_800C9A18;
            do {
                val -= step;
                *value = val;
            } while (limit <= val);
        }
    }
}
