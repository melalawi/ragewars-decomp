#include "basetypes.h"

/* Rounds a byte count up to whole 256-byte units; func_80435560 passes it the 0x648-byte size
   that func_80435600 returns. */
u32 func_804057EC(u32 bytes) {
    return (bytes + 0xFF) >> 8;
}
