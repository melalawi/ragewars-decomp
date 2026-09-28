/* Allocates a node from the free pool D_8010513C (as func_802549C8 does: pops it, resets its fields,
 * stamps the current frame and links it through func_80255C58 with the caller's 0xC flags); when the pool
 * is empty it runs the collector func_802512C8 (keeping the 0x10-flagged kind) and retries once, returning
 * 0 when nothing could be freed. Adapted by inlining func_802549C8 as a static helper. */
#include "basetypes.h"

typedef struct {
    s32 count;    /* 0x0 */
    char pad[0x40];
    s32 field44;  /* 0x44 */
} Pool;

extern Pool D_8010513C;
extern void **D_80104564;

extern s32 func_80255C58(void *arg0, s32 arg1);
extern s32 func_802512C8(s32, s32, s32);

static inline void *pool_alloc(s32 arg1) {
    void *temp_s0;

    if (D_8010513C.count == 0) {
        return 0;
    }
    D_8010513C.count -= 1;
    temp_s0 = D_80104564[D_8010513C.count];
    *(s32 *)((char *)temp_s0 + 0xC) = 0x800;
    *(s32 *)((char *)temp_s0 + 0x8) = 0;
    *(s32 *)((char *)temp_s0 + 0x0) = 0;
    *(s32 *)((char *)temp_s0 + 0x24) = 0;
    *(s32 *)((char *)temp_s0 + 0x20) = 0;
    *(s32 *)((char *)temp_s0 + 0x14) = 0;
    *(s32 *)((char *)temp_s0 + 0x10) = D_8010513C.field44;
    func_80255C58((char *)&D_8010513C - 0xBCC, (s32)temp_s0);
    *(s32 *)((char *)temp_s0 + 0xC) |= (arg1 & 0xC);
    return temp_s0;
}

void *func_80251448(s32 unused0, s32 flags) {
    void *node;

    node = pool_alloc(flags);
    if (node == 0) {
        s32 keep = flags & 0x10;

        if (func_802512C8(0, 2, keep == 0) != 0) {
            node = pool_alloc(flags);
        }
    }
    return node;
}
