#include "basetypes.h"

/* Returns whether the audio interface status register at 0xA450000C has its top bit (FIFO full)
   set. */
s32 func_802BC560(void) {
    return *(volatile s32 *) 0xA450000C >> 31 != 0;
}
