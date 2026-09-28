/* Points the RDP command DMA at a new display-list buffer, returning -1 if the RDP is busy, otherwise clearing the XBUS flag, waiting for it to drop and writing the physical start and end addresses (libultra osDpSetNextBuffer). */
#include "basetypes.h"
typedef volatile u32 vu32;

#define PHYS_TO_K1(x) ((u32)(x) | 0xA0000000)
#define IO_READ(addr) (*(vu32 *)PHYS_TO_K1(addr))
#define IO_WRITE(addr, data) (*(vu32 *)PHYS_TO_K1(addr) = (u32)(data))

extern s32 func_802BCD00(void);
extern u32 func_802C0CB0(void *arg0);

s32 func_802BCC60(void *bufPtr, u64 size) {
    if (func_802BCD00()) {
        return -1;
    }
    IO_WRITE(0x0410000C, 1);
    do {
    } while (IO_READ(0x0410000C) & 1);
    IO_WRITE(0x04100000, func_802C0CB0(bufPtr));
    IO_WRITE(0x04100004, func_802C0CB0(bufPtr) + size);
    return 0;
}
