/* Sets the last controller command to the given byte, marks the pak PIF RAM block for execution and packs one request-status command per controller followed by the end marker (libultra __osPfsRequestData). Adapted from func_802BCAF0 with the RAM clearing loop dropped, the command byte also stored to D_8014D4B0, and the pak PIF RAM block D_80154110 used in place of D_8014D470, with the pointer taken before the status word is written. */
#include "basetypes.h"

typedef struct {
    u32 ramarray[15];
    u32 pifstatus;
} OSPifRam;

typedef struct {
    u8 dummy;
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u8 typeh;
    u8 typel;
    u8 status;
    u8 dummy1;
} __OSContRequesFormat;

extern u8 D_8014D46C;
extern u8 D_8014D4B0;
extern OSPifRam D_80154110;

void func_804485EC(u8 cmd) {
    u8 *ptr;
    __OSContRequesFormat requestformat;
    s32 i;
    u8 *count;

    D_8014D4B0 = cmd;
    ptr = (u8 *)&D_80154110;
    D_80154110.pifstatus = 1;
    requestformat.dummy = 0xFF;
    requestformat.txsize = 1;
    requestformat.rxsize = 3;
    requestformat.cmd = cmd;
    requestformat.typeh = 0xFF;
    requestformat.typel = 0xFF;
    requestformat.status = 0xFF;
    requestformat.dummy1 = 0xFF;

    count = &D_8014D46C;
    for (i = 0; i < *count; i++) {
        *(__OSContRequesFormat *)ptr = requestformat;
        ptr += sizeof(requestformat);
    }
    *ptr = 0xFE;
}
