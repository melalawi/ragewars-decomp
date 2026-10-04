#include "common/types.h"
#include "span_16E000/code_80410E9C.h"
/* Returns the halfword at offset 0xE of the object held at offset 0x48C of record i in the
   1180-byte record table D_80153C28 points to; func_80411C60_de reads offset 0x10 of the same
   object. */
extern char *D_8014D998;

short func_80411C28_de(int index) {
    return ((struct func_802B67B0_S2 *) ((struct ObjectLinks490 *) (D_8014D998 + (index * 1180)))->unk_48C)->unkE;
}
