#include "span_1000/code_8027230C.h"
#include "types.h"




/** Scale the first three rows of a matrix's basis columns by sx, sy, sz. */
void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz) {
    u8 *o = (u8 *)arg0;

    ((func_80272BA8_S2 *)(o))->unk0 = ((func_80272BA8_S2 *)(o))->unk0 * sx;
    ((func_80272BA8_S2 *)(o))->unk4 = ((func_80272BA8_S2 *)(o))->unk4 * sx;
    ((func_80272BA8_S2 *)(o))->unk8 = ((func_80272BA8_S2 *)(o))->unk8 * sx;
    ((func_80272BA8_S2 *)(o))->unk10 = ((func_80272BA8_S2 *)(o))->unk10 * sy;
    ((func_80272BA8_S2 *)(o))->unk14 = ((func_80272BA8_S2 *)(o))->unk14 * sy;
    ((func_80272BA8_S2 *)(o))->unk18 = ((func_80272BA8_S2 *)(o))->unk18 * sy;
    ((func_80272BA8_S2 *)(o))->unk20 = ((func_80272BA8_S2 *)(o))->unk20 * sz;
    ((func_80272BA8_S2 *)(o))->unk24 = ((func_80272BA8_S2 *)(o))->unk24 * sz;
    ((func_80272BA8_S2 *)(o))->unk28 = ((func_80272BA8_S2 *)(o))->unk28 * sz;
}
