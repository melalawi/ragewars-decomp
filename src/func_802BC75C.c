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
    u16 button;
    s8 stick_x;
    s8 stick_y;
} ContReadFormat;

extern s8 D_8014D46C;
extern OSPifRam D_8014D470;

void func_802BC75C(void) {
    ContReadFormat readformat;
    u8 *ptr;
    u8 *count;
    s32 i;

    ptr = (u8 *)D_8014D470.ramarray;
    for (i = 14; i >= 0; i--) {
        ((s32 *)ptr)[i] = 0;
    }

    D_8014D470.pifstatus = 1;
    readformat.dummy = 0xFF;
    readformat.txsize = 1;
    readformat.rxsize = 4;
    readformat.cmd = 1;
    readformat.button = 0xFFFF;
    readformat.stick_x = -1;
    readformat.stick_y = -1;

    count = &D_8014D46C;
    for (i = 0; i < *count; i++) {
        *(ContReadFormat *)ptr = readformat;
        ptr += sizeof(ContReadFormat);
    }
    *ptr = 0xFE;
}
