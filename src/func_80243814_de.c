#include "common/types.h"
#include "span_1000/code_80242BE0.h"


/** Swap two pairs of words. */
void func_80243814_de(struct Shape_func_802764D4_de_2 *arg0, struct Shape_func_802764D4_de_2 *arg1) {
    struct Shape_func_802764D4_de_2 temporary = *arg0;
    *arg0 = *arg1;
    *arg1 = temporary;
}
