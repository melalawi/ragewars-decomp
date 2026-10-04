#include "common/types.h"
#include "span_16E000/code_80447140.h"
#include "types.h"
/* Sets the last controller command to the given byte, marks the pak PIF RAM block for execution and packs one request-status command per controller followed by the end marker (libultra __osPfsRequestData). Adapted from func_802B7A20_de with the RAM clearing loop dropped, the command byte also stored to D_8014D4B0, and the pak PIF RAM block D_80154110 used in place of D_8014D470, with the pointer taken before the status word is written. */





extern u8 D_801471DC_de;
extern u8 D_80147220;
extern OSPifRam D_8014DE80;

void func_8044799C_de(u8 cmd) {
    u8 *ptr;
    __OSContRequesFormat requestformat;
    s32 i;
    u8 *count;

    D_80147220 = cmd;
    ptr = (u8 *)&D_8014DE80;
    D_8014DE80.pifstatus = 1;
    requestformat.dummy = 0xFF;
    requestformat.txsize = 1;
    requestformat.rxsize = 3;
    requestformat.cmd = cmd;
    requestformat.typeh = 0xFF;
    requestformat.typel = 0xFF;
    requestformat.status = 0xFF;
    requestformat.dummy1 = 0xFF;

    count = &D_801471DC_de;
    for (i = 0; i < *count; i++) {
        *(__OSContRequesFormat *)ptr = requestformat;
        ptr += sizeof(requestformat);
    }
    *ptr = 0xFE;
}
