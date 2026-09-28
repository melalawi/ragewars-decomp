/* Drops one reference to buffer pool entry i and, when none remain, frees its primary and secondary buffers and clears the entry. */
#include "basetypes.h"

typedef struct {
    char pad0[8];
    void *buffer;
} BufferEntry;

typedef struct {
    s16 count;
    BufferEntry *primary;
    BufferEntry *secondary;
    u16 *flags;
    s16 *refs;
} BufferPool;

extern BufferPool D_80153C40;
extern s32 D_800E2AC4;

extern void func_80254784(void *buffer);

void func_80411E98(s32 i) {
    D_80153C40.refs[i]--;
    if (D_80153C40.primary[i].buffer != 0 && D_80153C40.refs[i] == 0) {
        func_80254784(D_80153C40.primary[i].buffer);
        if (D_800E2AC4 != 0 && D_80153C40.secondary != 0 &&
            D_80153C40.secondary[i].buffer != 0) {
            func_80254784(D_80153C40.secondary[i].buffer);
        }
        D_80153C40.primary[i].buffer = 0;
    }
}
