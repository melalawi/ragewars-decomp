#include "basetypes.h"

typedef struct {
    u8 dummy;
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u8 typeh;
    u8 typel;
    u8 status;
    u8 unused;
} ContReadFormat;

typedef struct {
    u16 type;
    u8 status;
    u8 error;
} OSContStatus;

extern u8 D_8014D46C[];
extern char D_8014D470;

void func_802BCBA8(u8 *valid, OSContStatus *data) {
    u8 *ptr;
    ContReadFormat readformat;
    s32 i;
    u8 mask = 0;

    ptr = (u8 *)&D_8014D470;
    for (i = 0; i < D_8014D46C[0]; i++, ptr += sizeof(readformat), data++) {
        readformat = *(ContReadFormat *)ptr;
        data->error = (readformat.rxsize & 0xC0) >> 4;
        if (data->error != 0) {
            continue;
        }
        data->type = (readformat.typel << 8) | readformat.typeh;
        data->status = readformat.status;
        mask |= 1 << i;
    }
    *valid = mask;
}
