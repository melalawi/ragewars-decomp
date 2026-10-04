#include "span_1000/code_802A137C.h"
/** Convert a lowercase ASCII letter to uppercase. */
int func_802A05A0_de(int arg0) {
    if ((unsigned int)(arg0 - 'a') < 26) {
        arg0 -= 'a' - 'A';
    }
    return arg0;
}
