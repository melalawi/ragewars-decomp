#include "common/types.h"
#include "span_1000/code_8029FF18.h"
#include "types.h"

/* Quick-sorts the elements between base and max for func_8029FE38_de (the qsort helper qst): picks the median of the first, middle and last elements as the pivot when the span reaches the six-element threshold D_8014D0C8, partitions around it with the comparator D_8014D0CC swapping D_8014D0C0 bytes at a time, then recurses into the smaller side and loops on the larger while it spans at least D_8014D0C4 bytes. Written from the BSD qsort qst structure with the halving shift unsigned. */






void func_8029FB74_de(char *base, char *max) {
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
        mid = i = base + D_80146E40 * ((unsigned)(lo / D_80146E40) >> 1);
        if (lo >= D_80146E48) {
            j = (D_80146E4C((jj = base), i) > 0 ? jj : i);
            if (D_80146E4C(j, (tmp = max - D_80146E40)) > 0) {
                j = (j == jj ? i : jj);
                if (D_80146E4C(j, tmp) < 0) {
                    j = tmp;
                }
            }
            if (j != i) {
                ii = D_80146E40;
                do {
                    c = *i;
                    *i++ = *j;
                    *j++ = c;
                } while (--ii);
            }
        }
        for (i = base, j = max - D_80146E40;;) {
            while (i < mid && D_80146E4C(i, mid) <= 0) {
                i += D_80146E40;
            }
            while (j > mid) {
                if (D_80146E4C(mid, j) <= 0) {
                    j -= D_80146E40;
                    continue;
                }
                tmp = i + D_80146E40;
                if (i == mid) {
                    mid = jj = j;
                } else {
                    jj = j;
                    j -= D_80146E40;
                }
                goto swap;
            }
            if (i == mid) {
                break;
            } else {
                jj = mid;
                tmp = mid = i;
                j -= D_80146E40;
            }
swap:
            ii = D_80146E40;
            do {
                c = *i;
                *i++ = *jj;
                *jj++ = c;
            } while (--ii);
            i = tmp;
        }
        i = (j = mid) + D_80146E40;
        if ((lo = j - base) <= (hi = max - i)) {
            if (lo >= D_80146E44) {
                func_8029FB74_de(base, j);
            }
            base = i;
            lo = hi;
        } else {
            if (hi >= D_80146E44) {
                func_8029FB74_de(i, max);
            }
            max = j;
        }
    } while (lo >= D_80146E44);
}
