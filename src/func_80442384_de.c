#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Returns whether func_80441EB0_de gives a non-zero answer for the third argument. */
extern s32 func_80441EB0_de(void *);

s32 func_80442384_de(void *first, void *second, void *third) {
    return func_80441EB0_de(third) != 0;
}
