#include "common/types.h"
#include "span_1000/code_802BC630.h"
#include "types.h"





extern s8 D_801471DC_de;
extern OSPifRam D_801471E0;

void func_802B768C_de(void) {
    ContReadFormat readformat;
    u8 *ptr;
    u8 *count;
    s32 i;

    ptr = (u8 *)D_801471E0.ramarray;
    for (i = 14; i >= 0; i--) {
        ((s32 *)ptr)[i] = 0;
    }

    D_801471E0.pifstatus = 1;
    readformat.dummy = 0xFF;
    readformat.txsize = 1;
    readformat.rxsize = 4;
    readformat.cmd = 1;
    readformat.button = 0xFFFF;
    readformat.stick_x = -1;
    readformat.stick_y = -1;

    count = &D_801471DC_de;
    for (i = 0; i < *count; i++) {
        *(ContReadFormat *)ptr = readformat;
        ptr += sizeof(ContReadFormat);
    }
    *ptr = 0xFE;
}
