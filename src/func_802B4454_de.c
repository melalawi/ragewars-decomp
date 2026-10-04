#include "common/types.h"
#include "span_1000/code_802B8D4C.h"
#include "types.h"
typedef s32 M2C_UNK;





extern M2C_UNK D_002B5400;
extern M2C_UNK D_002B5540;
void func_802B4454_de(void *arg0, s32 arg1, s32 arg2) {
    func_802B53E0_de(arg0, (s32) &D_002B5400, (s32) &D_002B5540, 7);
    (((struct TextLayerRect *) ((s8 *) arg0))->x) = 0;
    (((struct TextLayerRect *) ((s8 *) arg0))->right) = arg2;
    (((struct TextLayerRect *) ((s8 *) arg0))->y) = arg1;
}
