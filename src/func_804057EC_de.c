#include "span_16E000/code_80405454.h"
#include "types.h"

/* Rounds a byte count up to whole 256-byte units; func_80435384_de passes it the 0x648-byte size
   that func_80435424_de returns. */
u32 func_804057EC_de(u32 bytes) {
    return (bytes + 0xFF) >> 8;
}
