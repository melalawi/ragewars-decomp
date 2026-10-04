#include "span_1000/code_802A137C.h"
/** Convert an uppercase ASCII letter to lowercase. */
int func_802A05B8_de(int arg0) {
    if ((unsigned int)(arg0 - 'A') < 26) {
        arg0 += 'a' - 'A';
    }
    return arg0;
}
