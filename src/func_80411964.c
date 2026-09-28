/* Releases the buffers of the pool at D_80153C40: every entry holding a buffer that is not locked
   (flag 1) unless force is set has its reference count forced to one and dropped, and when it
   reaches zero the buffer is freed through func_80254784, along with the entry's secondary buffer
   when secondary buffers are in use (D_800E2AC4), and the entry is cleared. Pool fields read as one struct at D_80153C40, as in func_80410E9C. */
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

void func_80411964(s32 force) {
    s32 i;

    for (i = 0; i < D_80153C40.count; i++) {
        if (D_80153C40.primary[i].buffer != 0 && (!(D_80153C40.flags[i] & 1) || force != 0)) {
            D_80153C40.refs[i] = 1;
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
    }
}
