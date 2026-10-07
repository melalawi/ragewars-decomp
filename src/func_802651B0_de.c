#ifdef NON_MATCHING
#include "types.h"
#include "common/data.h"
#include "span_1000/code_802646F4.h"

extern u32 D_8010C070;
extern u32 D_8010C07C;
extern void func_80264F60_de(s32, s32);

s32 func_802651B0_de(s32 destinations, void *encoded, s32 channels) {
    s32 *outputs = (s32 *)destinations;
    u8 *cursor = (u8 *)encoded;
    s32 samples;
    s32 control_bits;
    s32 alignment;
    s32 channel;
    u8 *data;
    samples = (s32)*cursor++ << 8;
    samples |= *cursor++;
    control_bits = ((samples + 3) / 4) * 6;
    data = cursor + control_bits / 8;
    D_8010C07C = data[0];
    D_8010C07C |= (u32)data[1] << 8;
    D_8010C07C |= (u32)data[2] << 16;
    alignment = control_bits & 7;
    D_8010C080_de = 32 - alignment;
    D_8010C084 = data + 4;
    D_8010C07C = (D_8010C07C | ((u32)data[3] << 24)) >> alignment;
    for (channel = 0; channel < channels; channel++) {
        D_8010C070 = cursor[0];
        D_8010C070 |= (u32)cursor[1] << 8;
        D_8010C070 |= (u32)cursor[2] << 16;
        D_8010C074 = 32;
        D_8010C078 = cursor + 4;
        D_8010C070 |= (u32)cursor[3] << 24;
        func_80264F60_de(*outputs++, samples);
    }
    return samples;
}
#endif /* NON_MATCHING */
