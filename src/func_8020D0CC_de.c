#include "common/types.h"
#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_8020C5A0_de(void *arg0, void *node);






/** Find a keyed node in the object's list and pass it to func_8020C5A0_de. */
void func_8020D0CC_de(void *arg0, s32 key) {
    void *node = ((func_8020D0CC_S1 *)(arg0))->unk24;

    if (node == 0) {
        goto not_found;
    }
loop:
    if (*(s32 *)node == key) {
        goto found;
    }
    node = ((func_8020D0CC_S2 *)(node))->unk10;
    if (node != 0) {
        goto loop;
    }
not_found:
    node = 0;
found:
    func_8020C5A0_de(arg0, node);
}
