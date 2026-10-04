#include "common/types.h"
#include "span_16E000/code_80447140.h"
#include "types.h"

/* Decodes the six-byte short controller status reply found one byte per preceding channel into D_80154110 for the given channel, recording its error bits and, without error, its type and status.
   Adapted from func_80447A38_de with the per-channel loop over eight-byte replies changed to a single six-byte reply reached by skipping one byte per preceding channel. */





extern char D_8014DE80;

void func_80446EE4_de(s32 channel, Entry_func_8023B9C0_eu *data) {
    u8 *ptr;
    __OSContRequesFormatShort requestformat;
    s32 i;

    ptr = (u8 *)&D_8014DE80;
    for (i = 0; i < channel; i++) {
        ptr++;
    }
    requestformat = *(__OSContRequesFormatShort *)ptr;
    data->slot = (requestformat.rxsize & 0xC0) >> 4;
    if (data->slot == 0) {
        data->id = (requestformat.typel << 8) | requestformat.typeh;
        data->team = requestformat.status;
    }
}
