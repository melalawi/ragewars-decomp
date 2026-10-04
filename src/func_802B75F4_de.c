#include "span_1000/code_802BC630.h"
#include "types.h"




extern s8 D_801471DC_de;
extern u8 D_801471E0[];

void func_802B75F4_de(ContPad *data) {
    u8 *ptr = D_801471E0;
    u8 *count = &D_801471DC_de;
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
