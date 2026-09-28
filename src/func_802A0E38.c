#include "basetypes.h"

/* Sorts n elements of the given size with a comparator (qsort): records the element size, the four- and six-element thresholds and the comparator in D_8014D0C0 to D_8014D0CC, quick-sorts arrays of four or more through func_802A0B74, swaps the smallest of the first elements into place as a sentinel, and finishes with an insertion sort that shifts bytes. Written from the BSD qsort driver structure. */

extern s32 D_8014D0C0;
extern s32 D_8014D0C4;
extern s32 D_8014D0C8;
extern s32 (*D_8014D0CC)(char *a, char *b);
extern void func_802A0B74(char *base, char *max);

void func_802A0E38(char *base, s32 n, s32 size, s32 (*compare)(char *a, char *b)) {
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
    D_8014D0C4 = size * 4;
    D_8014D0C8 = size * 6;
    D_8014D0C0 = size;
    D_8014D0CC = compare;
    max = base + n * size;
    if (n >= 4) {
        func_802A0B74(base, max);
        hi = base + D_8014D0C4;
    } else {
        hi = max;
    }
    for (j = lo = base; (lo += D_8014D0C0) < hi;) {
        if (D_8014D0CC(j, lo) > 0) {
            j = lo;
        }
    }
    if (j != base) {
        for (i = base, hi = base + D_8014D0C0; i < hi;) {
            c = *j;
            *j++ = *i;
            *i++ = c;
        }
    }
    for (min = base; (hi = min += D_8014D0C0) < max;) {
        while (D_8014D0CC(hi -= D_8014D0C0, min) > 0) {
        }
        if ((hi += D_8014D0C0) != min) {
            for (lo = min + D_8014D0C0; --lo >= min;) {
                c = *lo;
                for (i = j = lo; (j -= D_8014D0C0) >= hi; i = j) {
                    *i = *j;
                }
                *i = c;
            }
        }
    }
}
