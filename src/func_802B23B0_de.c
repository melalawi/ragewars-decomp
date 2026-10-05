#include "span_1000/code_802B243C.h"



/** Consume and return one byte from the stream pointer at offset 8. */
int func_802B23B0_de(void *stream) {
    unsigned char *cursor = ((func_802B742C_S1 *)(stream))->unk8;
    int value = *cursor;
    ((func_802B742C_S1 *)(stream))->unk8 = cursor + 1;
    return value;
}
