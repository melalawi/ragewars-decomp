#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8024BA6C.h"
#include "types.h"








/** Lerp a 4-component vector: out = a + t * (b - a). */
void func_8024C8C4_de(void *arg0, f32 t, void *a, void *b) {
    ((func_8024C8B4_S1 *)(arg0))->unk0 = ((func_8024C8B4_S1 *)(a))->unk0 + (t * (((func_8024C8B4_S1 *)(b))->unk0 - ((func_8024C8B4_S1 *)(a))->unk0));
    ((func_8024C8B4_S1 *)(arg0))->unk4 = ((func_8024C8B4_S1 *)(a))->unk4 + (t * (((func_8024C8B4_S1 *)(b))->unk4 - ((func_8024C8B4_S1 *)(a))->unk4));
    ((func_8024C8B4_S1 *)(arg0))->unk8 = ((func_8024C8B4_S1 *)(a))->unk8 + (t * (((func_8024C8B4_S1 *)(b))->unk8 - ((func_8024C8B4_S1 *)(a))->unk8));
    ((func_8024C8B4_S1 *)(arg0))->unkC = ((func_8024C8B4_S1 *)(a))->unkC + (t * (((func_8024C8B4_S1 *)(b))->unkC - ((func_8024C8B4_S1 *)(a))->unkC));
}
