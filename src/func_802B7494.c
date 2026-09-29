typedef struct func_802B7494_S1 func_802B7494_S1;
struct func_802B7494_S1 {
    char pad0[0x8];
    unsigned char* unk8;
};

#include "basetypes.h"

/** Consume and return two big-endian bytes from the stream pointer at offset 8. */
s16 func_802B7494(void *arg0) {
    unsigned char *p;
    u32 b0;
    u32 b1;

    p = ((func_802B7494_S1 *)(arg0))->unk8;
    b0 = p[0];
    p = p + 1;
    ((func_802B7494_S1 *)(arg0))->unk8 = p;
    b1 = p[0];
    ((func_802B7494_S1 *)(arg0))->unk8 = p + 1;
    return (s16)((b0 << 8) | b1);
}
