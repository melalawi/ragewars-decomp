#include "common/types.h"
#include "span_1000/code_8023940C.h"
#include "types.h"

/* Spawns an emitter record: takes the head of the free list at 0x11D8 into the active list at 0x11EC (or reuses the record at 0x11F0 when none is free) and fills its position, scale, shared value and three rates converted by D_800C8630. */



extern f32 D_800C3540_de[];
extern void func_80255ED8_de(void *list, void *node);
extern void func_80255CB8_de(void *list, void *node);






static inline void set_emitter(char *node, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    ((func_802394AC_S1 *)(node))->unk8 = pos;
    ((func_802394AC_S1 *)(node))->unk14 = scale;
    ((func_802394AC_S1 *)(node))->unk18 = value;
    ((func_802394AC_S1 *)(node))->unk1C = a;
    ((func_802394AC_S1 *)(node))->unk2C = value;
    ((func_802394AC_S1 *)(node))->unk30 = b;
    ((func_802394AC_S1 *)(node))->unk40 = value;
    ((func_802394AC_S1 *)(node))->unk44 = c;
}

void func_802394BC_de(char *obj, f32 a, f32 b, f32 c, f32 scale, s32 value, Vec3 pos)
{
    char *node = ((func_802394AC_S2 *)(obj))->unk11D8;
    f32 k;

    if (node != 0) {
        func_80255ED8_de(obj + 0x11D8, node);
        func_80255CB8_de(obj + 0x11EC, node);
    } else {
        node = ((func_802394AC_S2 *)(obj))->unk11F0;
    }
    k = D_800C3540_de[1];
    set_emitter(node, a * k, b * k, c * k, scale, value, pos);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3474_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8634_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C37F4_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3834_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3544_4 = 0.100000001f;
#endif
