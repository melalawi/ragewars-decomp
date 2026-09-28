/* Sets the buffer pool flag, then runs func_8041174C on every buffer pool entry, func_804106F4 in mode 2 on every resource slot and func_80410FD4 on every chunk. */
#include "basetypes.h"

typedef struct {
    s16 count;
    void *primary;
    void *secondary;
    void *flags;
    void *refs;
    s32 dirty;
} BufferPool;

extern BufferPool D_80153C40;
extern s16 D_80153C0C;
extern s16 D_80153C20;

extern void func_8041174C(s32 index);
extern void func_804106F4(s32 index, s32 mode);
extern void func_80410FD4(s32 arg0, s32 index, s32 arg2);

void func_80411FC8(void) {
    s32 i;

    D_80153C40.dirty = 1;
    for (i = 0; i < D_80153C40.count; i++) {
        func_8041174C(i);
    }
    for (i = 0; i < D_80153C0C; i++) {
        func_804106F4(i, 2);
    }
    for (i = 0; i < D_80153C20; i++) {
        func_80410FD4(0, i, 0);
    }
}
