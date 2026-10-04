#include "common/types.h"
#include "span_1000/code_80233C78.h"
#include "types.h"

/* Configures an emitter: stores a position vector, a shared value in three channels, a scale, and three rates converted by the constant in D_800C8628. */



extern f32 D_800C3538_de[];




static inline void set_emitter(char *obj, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    ((func_80239314_S1 *)(obj))->unkA8 = pos;
    ((func_80239314_S1 *)(obj))->unkB4 = scale;
    ((func_80239314_S1 *)(obj))->unkB8 = value;
    ((func_80239314_S1 *)(obj))->unkBC = a;
    ((func_80239314_S1 *)(obj))->unkCC = value;
    ((func_80239314_S1 *)(obj))->unkD0 = b;
    ((func_80239314_S1 *)(obj))->unkE0 = value;
    ((func_80239314_S1 *)(obj))->unkE4 = c;
}

void func_80239324_de(char *obj, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    if (obj != 0) {
        f32 k = D_800C3538_de[1];
        set_emitter(obj, a * k, b * k, c * k, scale, value, pos);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C346C_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C862C_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C37EC_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C382C_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C353C_4 = 0.100000001f;
#endif
