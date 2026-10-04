#include "span_1000/code_8024E6C8.h"
#include "span_1000/types.h"



/** Return the low three mode bits when the record type is one. */
int func_8024E778_de(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return ((func_802428C0_S2 *)(arg0))->unk38 & 7;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE204_3[] = {0x27, 0xC2, 0x00};
#endif
