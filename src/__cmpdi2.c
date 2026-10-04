#include "span_1000/code_802C4604.h"
int __cmpdi2(int ahi, unsigned alo, int bhi, unsigned blo) {
    if (ahi < bhi) {
        return 0;
    }
    if (bhi < ahi) {
        return 2;
    }
    if (alo < blo) {
        return 0;
    }
    if (blo < alo) {
        return 2;
    }
    return 1;
}
