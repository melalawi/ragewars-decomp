#include "span_16E000/code_80408E1C.h"
#include "types.h"

/* Returns the address of block n, n times 256; block zero is the area 0x610 bytes into the
   buffer D_8011FECC points to. */
extern char *D_8011BE0C;

char *func_80409884_de(s32 block) {
    if (block == 0) {
        return D_8011BE0C + 0x610;
    }
    return (char *) (block << 8);
}
