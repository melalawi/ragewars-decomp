#include "span_1000/code_802A6AC0.h"
#include "types.h"






void func_802A62BC_de(void *arg0) {
    f32 accum;
    f32 delta;
    void *node;

    if (((func_802A72AC_S1 *)(arg0))->unk4C > 0.0f) {
        accum = 0.0f;
        node = ((func_802A72AC_S1 *)(arg0))->unk40;
        if (node != 0) {
            do {
                ((func_802A72AC_S2 *)(node))->unkA8 = accum / ((func_802A72AC_S1 *)(arg0))->unk4C;
                delta = ((func_802A72AC_S2 *)(node))->unkAC;
                node = ((func_802A72AC_S2 *)(node))->unk4;
                accum += delta;
            } while (node != 0);
        }
    }
}
