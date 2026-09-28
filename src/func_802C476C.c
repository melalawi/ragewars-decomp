/* Prepares the FFT tables in D_800D9370 for n points: fills the first n / 2 entries of the sine and
   negated cosine tables for angles i * D_800CCF20 / n, fills the order table with 0..n - 1 and
   bit-reverses it with the standard index-swapping walk, records n and returns the tables. */
#include "basetypes.h"

typedef struct {
    f32 *sines;
    f32 *cosines;
    s32 *order;
    s32 size;
} FftTables;

extern FftTables D_800D9370;
extern f32 D_800CCF20;

extern f32 func_802BB630(f32 angle);
extern f32 func_802BC200(f32 angle);

FftTables *func_802C476C(s32 n) {
    FftTables *tables;
    s32 half;
    s32 i;
    s32 k;
    s32 j;
    s32 m;
    s32 swap;
    s32 limit;
    s32 *order;
    f32 angle;
    f32 scale;
    f32 count;

    half = n >> 1;
    tables = &D_800D9370;
    i = 0;
    if (i < half) {
        scale = D_800CCF20;
        count = n;
        do {
            angle = i * scale / count;
            tables->sines[i] = func_802BB630(angle);
            tables->cosines[i] = -func_802BC200(angle);
            i++;
        } while (i < half);
    }
    order = tables->order;
    limit = n * 2;
    for (k = 0; k < n; k++) {
        order[k] = k;
    }
    j = 1;
    for (k = 1; k <= limit; k += 2) {
        if (k < j) {
            swap = order[(j - 1) / 2];
            order[(j - 1) / 2] = order[(k - 1) / 2];
            order[(k - 1) / 2] = swap;
        }
        m = n;
        while (m >= 2 && j > m) {
            j -= m;
            m >>= 1;
        }
        j += m;
    }
    tables->size = n;
    return tables;
}
