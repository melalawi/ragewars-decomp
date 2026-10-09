#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802AFEAC.h"
#include "types.h"

extern s32 func_802BD170_de(s32);
extern void func_802B2450_de(void *arg0);

extern void func_802B2480_de(void *arg0, void *arg1);






s32 func_802B003C_de(void *arg0, s16 *arg1) {
    void *node;
    s32 saved;
    s32 result;

    saved = func_802BD170_de(1);
    node = ((func_80255BEC_S1 *)(arg0))->unk8;
    if (node != 0) {
        func_802B2450_de(node);
        ((void (*)(void *, void *, s32))func_802B0310_de)(&((func_802B510C_S2 *)(node))->unkC, arg1, 0x10);
        func_802B2480_de(node, arg0);
        result = ((func_802B510C_S2 *)(node))->unk8;
    } else {
        *arg1 = -1;
        result = 0;
    }
    func_802BD170_de(saved);
    return result;
}
