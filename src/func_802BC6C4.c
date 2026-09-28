#include "basetypes.h"

typedef struct { u8 dummy; u8 txsize; u8 rxsize; u8 cmd; u16 button; s8 stick_x; s8 stick_y; } ContReadFormat;
typedef struct { u16 button; s8 stick_x; s8 stick_y; u8 error; } ContPad;

extern s8 D_8014D46C;
extern u8 D_8014D470[];

void func_802BC6C4(ContPad *data) {
    u8 *ptr = D_8014D470;
    u8 *count = &D_8014D46C;
    ContReadFormat readformat;
    s32 i;

    for (i = 0; i < *count; i++, ptr += sizeof(ContReadFormat), data++) {
        readformat = *(ContReadFormat *)ptr;
        data->error = (readformat.rxsize & 0xC0) >> 4;
        if (data->error != 0) {
            continue;
        }
        data->button = readformat.button;
        data->stick_x = readformat.stick_x;
        data->stick_y = readformat.stick_y;
    }
}
