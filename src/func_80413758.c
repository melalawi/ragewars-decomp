#include "basetypes.h"

/* The same table as func_80413688 reads, at the field 24 bytes into the 52-byte record. The
   debugger returned 1 on every one of 400 calls, so the observed records all carry a non-zero
   value here and the zero arm is untested by execution. */
extern s32 D_800E2B40[][13];

s32 func_80413758(u8 *record) {
    return D_800E2B40[*record][0] != 0;
}
