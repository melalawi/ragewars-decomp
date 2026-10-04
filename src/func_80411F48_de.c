#include "span_16E000/code_80411FB8.h"
#include "types.h"
/* Sets the buffer pool flag, then runs func_804116CC_de on every buffer pool entry, func_80410674_de in mode 2 on every resource slot and func_80410F54_de on every chunk. */



extern BufferPool_func_80411F48_de D_8014D9B0;
extern s16 D_8014D97C;
extern s16 D_8014D990;

extern void func_804116CC_de(s32 index);
extern void func_80410674_de(s32 index, s32 mode);
extern void func_80410F54_de(s32 arg0, s32 index, s32 arg2);

void func_80411F48_de(void) {
    s32 i;

    D_8014D9B0.dirty = 1;
    for (i = 0; i < D_8014D9B0.count; i++) {
        func_804116CC_de(i);
    }
    for (i = 0; i < D_8014D97C; i++) {
        func_80410674_de(i, 2);
    }
    for (i = 0; i < D_8014D990; i++) {
        func_80410F54_de(0, i, 0);
    }
}
