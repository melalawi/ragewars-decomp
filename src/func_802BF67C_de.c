#include "common/types.h"
#include "span_1000/code_802C4604.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Prepares the FFT tables in D_800D9370 for n points: fills the first n / 2 entries of the sine and
   negated cosine tables for angles i * D_800CCF20 / n, fills the order table with 0..n - 1 and
   bit-reverses it with the standard index-swapping walk, records n and returns the tables. */



extern FftTables D_800D5340;


extern f32 func_802B6560_de(f32 angle);
extern f32 func_802B7130_de(f32 angle);

FftTables *func_802BF67C_de(s32 n) {
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
    tables = &D_800D5340;
    i = 0;
    if (i < half) {
        scale = D_800C7CD0_de;
        count = n;
        do {
            angle = i * scale / count;
            tables->sines[i] = func_802B6560_de(angle);
            tables->cosines[i] = -func_802B7130_de(angle);
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7BF0_4 = 6.28318548f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCF20_4 = 6.28318548f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C88C0_4 = 6.28318548f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C9290_4 = 6.28318548f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7CD0_4 = 6.28318548f;
#endif
