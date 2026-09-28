#include "basetypes.h"

/* Decodes the six-byte short controller status reply found one byte per preceding channel into D_80154110 for the given channel, recording its error bits and, without error, its type and status.
   Adapted from func_80448688 with the per-channel loop over eight-byte replies changed to a single six-byte reply reached by skipping one byte per preceding channel. */

typedef struct {
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u8 typeh;
    u8 typel;
    u8 status;
} ContRequestFormatShort;

typedef struct {
    u16 type;
    u8 status;
    u8 error;
} OSContStatus;

extern char D_80154110;

void func_80447B34(s32 channel, OSContStatus *data) {
    u8 *ptr;
    ContRequestFormatShort requestformat;
    s32 i;

    ptr = (u8 *)&D_80154110;
    for (i = 0; i < channel; i++) {
        ptr++;
    }
    requestformat = *(ContRequestFormatShort *)ptr;
    data->error = (requestformat.rxsize & 0xC0) >> 4;
    if (data->error == 0) {
        data->type = (requestformat.typel << 8) | requestformat.typeh;
        data->status = requestformat.status;
    }
}
