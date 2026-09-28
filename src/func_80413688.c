#include "basetypes.h"

/* The argument is a pointer into 0x8068xxxx whose first byte the debugger read as 0x14, and the
   stride is 52. D_800E2B40, which func_80413758 indexes with the same stride and the same
   argument, sits 24 bytes further on, so both are fields of one 52-byte record. */
extern s32 D_800E2B28[][13];

s32 func_80413688(u8 *record) {
    return D_800E2B28[*record][0];
}
