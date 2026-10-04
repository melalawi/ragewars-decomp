#include "span_1000/code_8027230C.h"
#include "span_1000/types.h"
#include "types.h"

extern f32 D_800C48C0_de;




/** Reset the matrix to identity-diagonal * D_800C99B0, zeroing the rest. */
void func_802727D8_de(void *arg0) {
    u8 *o = (u8 *)arg0;
    f32 zero = 0.0f;

    ((func_80272848_S1 *)(o))->unk3C = D_800C48C0_de;
    ((func_80272848_S1 *)(o))->unk28 = D_800C48C0_de;
    ((func_80272848_S1 *)(o))->unk14 = D_800C48C0_de;
    ((func_80272848_S1 *)(o))->unk0 = D_800C48C0_de;
    ((func_80272848_S1 *)(o))->unk38 = zero;
    ((func_80272848_S1 *)(o))->unk34 = zero;
    ((func_80272848_S1 *)(o))->unk30 = zero;
    ((func_80272848_S1 *)(o))->unk2C = zero;
    ((func_80272848_S1 *)(o))->unk24 = zero;
    ((func_80272848_S1 *)(o))->unk20 = zero;
    ((func_80272848_S1 *)(o))->unk1C = zero;
    ((func_80272848_S1 *)(o))->unk18 = zero;
    ((func_80272848_S1 *)(o))->unk10 = zero;
    ((func_80272848_S1 *)(o))->unkC = zero;
    ((func_80272848_S1 *)(o))->unk8 = zero;
    ((func_80272848_S1 *)(o))->unk4 = zero;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C47F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99B0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B70_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BB0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48C0_4 = 1.0f;
#endif
