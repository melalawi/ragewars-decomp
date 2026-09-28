#include "basetypes.h"

/* Returns the last word of a self-sized block: the first word holds the block's byte length and
   the result is the word just before that many bytes from the start. */
s32 func_804098E4(s32 *block) {
    return *(s32 *) (block[0] + (s32) block - 4);
}
