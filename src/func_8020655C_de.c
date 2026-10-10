#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80206258.h"
#include "types.h"


extern char D_80145040;
extern void *func_8022A8F0_de(void *arg0);




s32 func_8020655C_de(s32 arg0) {
    void *node;

    if (arg0 == 0x84F) {
        node = D_80137064.head;
        while (node != 0) {
            if (*((func_8020655C_S1 *)(node))->unk18 == 4) {
                return 0;
            }
            node = ((func_8020655C_S1 *)(node))->unk2EC;
        }
        return func_8022A8F0_de(&D_80145040) == 0;
    }
    return 1;
}
