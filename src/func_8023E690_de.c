#include "span_1000/code_8023CBB0.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Stores a range and its parameters in a record: the low bound at 8, a count at 0xC, the high
   bound at 0x10 and a fourth value at 0x14, and at 0x18 the larger bound plus the pooled constant
   D_800C87B4. */




void func_8023E690_de(struct Range *range, f32 low, s32 count, f32 high, f32 extra) {
    f32 larger;

    range->count = count;
    range->low = low;
    range->high = high;
    range->extra = extra;
    larger = high;
    if (!(low <= high)) {
        larger = low;
    }
    range->limit = larger + D_800C36C4_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C35F4_4 = 1.02400005f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87B4_4 = 1.02400005f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3974_4 = 1.02400005f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C39B4_4 = 1.02400005f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36C4_4 = 1.02400005f;
#endif
