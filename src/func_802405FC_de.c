#include "common/types.h"
#include "span_1000/code_8023ECAC.h"


/** Swap two eight-byte pairs. */
void func_802405FC_de(struct Shape_func_802764D4_de_2 *left, struct Shape_func_802764D4_de_2 *right) {
    struct Shape_func_802764D4_de_2 temporary = *left;
    *left = *right;
    *right = temporary;
}
