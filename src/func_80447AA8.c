/* __osPfsRequestOneChannel, drafted from the ultralib io pfsgetstatus source (2.0I branch): fill the pak
   PIF RAM block with one skip byte per preceding channel, a status request for the given channel and
   the end marker. */
#include "basetypes.h"

typedef struct {
    u32 ramarray[15];
    u32 pifstatus;
} OSPifRam;

typedef struct {
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u8 typeh;
    u8 typel;
    u8 status;
} __OSContRequesFormatShort;

extern u8 D_8014D4B0;
extern OSPifRam D_80154110;

void func_80447AA8(int channel)
{
    u8 *base;
    u8 *ptr;
    __OSContRequesFormatShort requestformat;
    int i;

    D_8014D4B0 = 0;
    base = (u8 *)&D_80154110;
    D_80154110.pifstatus = 1;
    ptr = base;

    requestformat.txsize = 1;
    requestformat.rxsize = 3;
    requestformat.cmd = 0;
    requestformat.typeh = 0xFF;
    requestformat.typel = 0xFF;
    requestformat.status = 0xFF;

    for (i = 0; i < channel; i++) {
        *ptr++ = 0;
    }

    *(__OSContRequesFormatShort *)ptr = requestformat;
    ptr += sizeof(__OSContRequesFormatShort);
    *ptr = 0xFE;
}
