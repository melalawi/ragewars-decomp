#include "basetypes.h"

extern s32 func_80274544(void);

typedef struct func_80256130_S1 func_80256130_S1;
struct func_80256130_S1 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    u32 unk10;
};

void *func_80256130(void *arg0) {
    s32 index;
    s32 offset;
    void *node;

    node = *(void **)arg0;
    if (node == 0) {
        return 0;
    }
    index = func_80274544() % ((func_80256130_S1 *)(arg0))->unk10;
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
