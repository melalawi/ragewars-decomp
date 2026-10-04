#include "common/types.h"
#include "span_1000/code_8029FF18.h"
#include "types.h"

/* Sorts n elements of the given size with a comparator (qsort): records the element size, the four- and six-element thresholds and the comparator in D_8014D0C0 to D_8014D0CC, quick-sorts arrays of four or more through func_8029FB74_de, swaps the smallest of the first elements into place as a sentinel, and finishes with an insertion sort that shifts bytes. Written from the BSD qsort driver structure. */







void func_8029FE38_de(char *base, s32 n, s32 size, s32 (*compare)(char *a, char *b)) {
    char c;
    char *i;
    char *j;
    char *lo;
    char *hi;
    char *min;
    char *max;

    if (n <= 1) {
        return;
    }
    D_80146E44 = size * 4;
    D_80146E48 = size * 6;
    D_80146E40 = size;
    D_80146E4C = compare;
    max = base + n * size;
    if (n >= 4) {
        func_8029FB74_de(base, max);
        hi = base + D_80146E44;
    } else {
        hi = max;
    }
    for (j = lo = base; (lo += D_80146E40) < hi;) {
        if (D_80146E4C(j, lo) > 0) {
            j = lo;
        }
    }
    if (j != base) {
        for (i = base, hi = base + D_80146E40; i < hi;) {
            c = *j;
            *j++ = *i;
            *i++ = c;
        }
    }
    for (min = base; (hi = min += D_80146E40) < max;) {
        while (D_80146E4C(hi -= D_80146E40, min) > 0) {
        }
        if ((hi += D_80146E40) != min) {
            for (lo = min + D_80146E40; --lo >= min;) {
                c = *lo;
                for (i = j = lo; (j -= D_80146E40) >= hi; i = j) {
                    *i = *j;
                }
                *i = c;
            }
        }
    }
}
