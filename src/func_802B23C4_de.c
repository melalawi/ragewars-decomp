#include "span_1000/code_802B7488.h"
#include "span_1000/types.h"
#include "types.h"




/** Consume and return two big-endian bytes from the stream pointer at offset 8. */
s16 func_802B23C4_de(void *arg0) {
    unsigned char *p;
    u32 b0;
    u32 b1;

    p = ((func_802B742C_S1 *)(arg0))->unk8;
    b0 = p[0];
    p = p + 1;
    ((func_802B742C_S1 *)(arg0))->unk8 = p;
    b1 = p[0];
    ((func_802B742C_S1 *)(arg0))->unk8 = p + 1;
    return (s16)((b0 << 8) | b1);
}
