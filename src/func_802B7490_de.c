#include "span_1000/code_802BB9D0.h"
#include "types.h"

/* Returns whether the audio interface status register at 0xA450000C has its top bit (FIFO full)
   set. */
s32 func_802B7490_de(void) {
    return *(volatile s32 *) 0xA450000C >> 31 != 0;
}
