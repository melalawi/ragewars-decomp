/* osEPiRawStartDma, drafted from ultralib src/io/epirawdma.c with the 2.0I EPI_SYNC of PRinternal/piint.h. */
#include "basetypes.h"

typedef struct OSPiHandle_s {
    struct OSPiHandle_s *next;
    u8 type;
    u8 latency;
    u8 pageSize;
    u8 relDuration;
    u8 pulse;
    u8 domain;
    u32 baseAddress;
    u32 speed;
} OSPiHandle;

extern OSPiHandle *D_800D83B0[2];
extern u32 func_802C0CB0(void *addr);

#define IO_WRITE(addr, value) (*(volatile u32 *)(addr) = (value))
#define UPDATE_REG(pihandle, reg, var) \
    if (cHandle->var != pihandle->var) \
        IO_WRITE(reg, pihandle->var)

s32 func_802BE4A0(OSPiHandle *pihandle, s32 direction, u32 devAddr, void *dramAddr, u32 size)
{
    u32 stat;
    u32 domain;

    stat = *(volatile u32 *)0xA4600010;
    while (stat & 3)
        stat = *(volatile u32 *)0xA4600010;

    domain = pihandle->domain;
    if (D_800D83B0[domain] != pihandle) {
        OSPiHandle *cHandle = D_800D83B0[domain];
        if (domain == 0) {
            UPDATE_REG(pihandle, 0xA4600014, latency);
            UPDATE_REG(pihandle, 0xA460001C, pageSize);
            UPDATE_REG(pihandle, 0xA4600020, relDuration);
            UPDATE_REG(pihandle, 0xA4600018, pulse);
        } else {
            UPDATE_REG(pihandle, 0xA4600024, latency);
            UPDATE_REG(pihandle, 0xA460002C, pageSize);
            UPDATE_REG(pihandle, 0xA4600030, relDuration);
            UPDATE_REG(pihandle, 0xA4600028, pulse);
        }
        D_800D83B0[domain] = pihandle;
    }

    IO_WRITE(0xA4600000, func_802C0CB0(dramAddr));
    IO_WRITE(0xA4600004, (pihandle->baseAddress | devAddr) & 0x1FFFFFFF);

    switch (direction) {
        case 0:
            IO_WRITE(0xA460000C, size - 1);
            break;
        case 1:
            IO_WRITE(0xA4600008, size - 1);
            break;
        default:
            return -1;
    }
    return 0;
}
