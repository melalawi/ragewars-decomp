#include "span_1000/code_802555C8.h"
#include "types.h"

extern s32 func_802744D4_de(void);




void *func_80256190_de(void *arg0) {
    s32 index;
    s32 offset;
    void *node;

    node = *(void **)arg0;
    if (node == 0) {
        return 0;
    }
    index = func_802744D4_de() % ((func_80256130_S1 *)(arg0))->unk10;
    index--;
    if (index != -1) {
        offset = ((func_80256130_S1 *)(arg0))->unkC;
        do {
            { u8 *cursor = (u8 *)node; cursor += offset; node = *(void **)cursor; }
            index--;
        } while (index != -1);
    }
    return node;
}
