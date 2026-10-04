#include "common/types.h"
#include "span_16E000/code_8040EBC8.h"
#include "types.h"

/* Orders two records by the unsigned halfword at offset 0x14, returning the difference in the
   shape a sort comparator uses. */


int func_8040F570_de(struct Field_u16_14 *a, struct Field_u16_14 *b) {
    return a->value - b->value;
}
