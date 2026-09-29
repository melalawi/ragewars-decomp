#include "basetypes.h"

typedef struct {
    s32 m[4][4];
} Mtx;

extern void func_802BBD3C(f32 mf[4][4]);          /* guMtxIdentF */
extern void func_802BBD8C(f32 mf[4][4], Mtx *m);  /* guMtxF2L */
extern f32 func_802BB630(f32);                     /* cosf */
extern f32 func_802BC200(f32);                     /* sinf */

/* guPerspective (libultra gu): builds a perspective projection into a fixed-point matrix and reports its normalisation. */
void func_802BBEC0(Mtx *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale) {
    f32 mf[4][4];
    f32 cot;
    s32 i, j;
    f32 (*row)[4];

    row = mf; /* FAKEMATCH: copy-only local row stands in for the inlined guPerspectiveF parameter and steers the matrix pointer register */
    func_802BBD3C(row);
    fovy *= 3.1415926f / 180.0f;
    cot = func_802BB630(fovy / 2) / func_802BC200(fovy / 2);

    mf[0][0] = cot / aspect;
    mf[1][1] = cot;
    mf[2][2] = (near + far) / (near - far);
    mf[2][3] = -1;
    mf[3][2] = (2 * near * far) / (near - far);
    mf[3][3] = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            row[i][j] *= scale;
        }
    }

    if (perspNorm != 0) {
        if (near + far <= 2.0f) {
            *perspNorm = (u16)0xFFFF;
        } else {
            *perspNorm = (u16)((2.0f * 65536.0f) / (near + far));
            if (*perspNorm <= 0) {
                *perspNorm = (u16)0x0001;
            }
        }
    }

    func_802BBD8C(mf, m);
}
