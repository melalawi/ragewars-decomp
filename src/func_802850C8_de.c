#include "common/types.h"
#include "span_1000/code_80283D24.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 func_802726BC_de(f32 *a, f32 *b);









void func_802850C8_de(void *arg0, void *arg1, f32 *arg2) {
    f32 temp;
    void *node;

    *arg2 = D_800C4EA0_de;
    node = ((func_8028509C_S1 *)(arg0))->unkFC14;
    if (node != 0) {
        do {
            if (((func_8028509C_S2 *)(node))->unk12C != arg1 && (((func_8028509C_S2 *)(node))->unk5C & 0x100)) {
                temp = func_802726BC_de(&((func_8028509C_S2 *)(node))->unk8, &((func_80212828_S7 *)(arg1))->unk8);
                if (temp < *arg2) {
                    *arg2 = temp;
                }
            }
            node = ((func_8028509C_S2 *)(node))->unk1F4;
        } while (node != 0);
    }
}
