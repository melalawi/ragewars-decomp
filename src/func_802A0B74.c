#include "basetypes.h"

/* Quick-sorts the elements between base and max for func_802A0E38 (the qsort helper qst): picks the median of the first, middle and last elements as the pivot when the span reaches the six-element threshold D_8014D0C8, partitions around it with the comparator D_8014D0CC swapping D_8014D0C0 bytes at a time, then recurses into the smaller side and loops on the larger while it spans at least D_8014D0C4 bytes. Written from the BSD qsort qst structure with the halving shift unsigned. */

extern s32 D_8014D0C0;
extern s32 D_8014D0C4;
extern s32 D_8014D0C8;
extern s32 (*D_8014D0CC)(char *a, char *b);

void func_802A0B74(char *base, char *max) {
    char c;
    char *i;
    char *j;
    char *jj;
    s32 ii;
    char *mid;
    char *tmp;
    s32 lo;
    s32 hi;

    lo = max - base;
    do {
        mid = i = base + D_8014D0C0 * ((unsigned)(lo / D_8014D0C0) >> 1);
        if (lo >= D_8014D0C8) {
            j = (D_8014D0CC((jj = base), i) > 0 ? jj : i);
            if (D_8014D0CC(j, (tmp = max - D_8014D0C0)) > 0) {
                j = (j == jj ? i : jj);
                if (D_8014D0CC(j, tmp) < 0) {
                    j = tmp;
                }
            }
            if (j != i) {
                ii = D_8014D0C0;
                do {
                    c = *i;
                    *i++ = *j;
                    *j++ = c;
                } while (--ii);
            }
        }
        for (i = base, j = max - D_8014D0C0;;) {
            while (i < mid && D_8014D0CC(i, mid) <= 0) {
                i += D_8014D0C0;
            }
            while (j > mid) {
                if (D_8014D0CC(mid, j) <= 0) {
                    j -= D_8014D0C0;
                    continue;
                }
                tmp = i + D_8014D0C0;
                if (i == mid) {
                    mid = jj = j;
                } else {
                    jj = j;
                    j -= D_8014D0C0;
                }
                goto swap;
            }
            if (i == mid) {
                break;
            } else {
                jj = mid;
                tmp = mid = i;
                j -= D_8014D0C0;
            }
swap:
            ii = D_8014D0C0;
            do {
                c = *i;
                *i++ = *jj;
                *jj++ = c;
            } while (--ii);
            i = tmp;
        }
        i = (j = mid) + D_8014D0C0;
        if ((lo = j - base) <= (hi = max - i)) {
            if (lo >= D_8014D0C4) {
                func_802A0B74(base, j);
            }
            base = i;
            lo = hi;
        } else {
            if (hi >= D_8014D0C4) {
                func_802A0B74(i, max);
            }
            max = j;
        }
    } while (lo >= D_8014D0C4);
}
