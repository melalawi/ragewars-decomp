#include "span_1000/code_8027230C.h"
#include "span_1000/types.h"
#include "types.h"




/** Scale the xyz columns of a 4-row matrix by sx, sy, sz. */
void func_802735A8_de(void *arg0, f32 sx, f32 sy, f32 sz) {
    u8 *o = (u8 *)arg0;

    ((func_80272908_S2 *)(o))->unk0 = ((func_80272908_S2 *)(o))->unk0 * sx;
    ((func_80272908_S2 *)(o))->unk10 = ((func_80272908_S2 *)(o))->unk10 * sx;
    ((func_80272908_S2 *)(o))->unk20 = ((func_80272908_S2 *)(o))->unk20 * sx;
    ((func_80272908_S2 *)(o))->unk30 = ((func_80272908_S2 *)(o))->unk30 * sx;
    ((func_80272908_S2 *)(o))->unk4 = ((func_80272908_S2 *)(o))->unk4 * sy;
    ((func_80272908_S2 *)(o))->unk14 = ((func_80272908_S2 *)(o))->unk14 * sy;
    ((func_80272908_S2 *)(o))->unk24 = ((func_80272908_S2 *)(o))->unk24 * sy;
    ((func_80272908_S2 *)(o))->unk34 = ((func_80272908_S2 *)(o))->unk34 * sy;
    ((func_80272908_S2 *)(o))->unk8 = ((func_80272908_S2 *)(o))->unk8 * sz;
    ((func_80272908_S2 *)(o))->unk18 = ((func_80272908_S2 *)(o))->unk18 * sz;
    ((func_80272908_S2 *)(o))->unk28 = ((func_80272908_S2 *)(o))->unk28 * sz;
    ((func_80272908_S2 *)(o))->unk38 = ((func_80272908_S2 *)(o))->unk38 * sz;
}
