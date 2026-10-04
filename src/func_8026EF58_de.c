#include "span_1000/code_8026E5DC.h"
#include "types.h"

extern f32 D_800C46C0_de;

/**
 * Invert a row-major affine 4x4 transform, copying singular inputs unchanged.
 *
 * @name CMtxF__Invert
 * @param out Destination for the 16-float inverse; it must not overlap `m`.
 * @param m Source matrix stored as four contiguous rows. Its last column is
 *          (0, 0, 0, 1), its final row holds translation, and it transforms
 *          row vectors.
 *
 * Computes the determinant and adjugate of the upper-left 3x3 linear block,
 * scales them by the reciprocal determinant, then derives the inverse
 * translation as -translation * inverse_linear. If the determinant is exactly
 * zero, all 16 source elements are copied to `out` instead.
 *
 * Game role: Callers invert model or camera transforms so positions can be
 * moved from world space into object-local or view space for spatial and
 * rendering calculations.
 */
void func_8026EF58_de(f32 *out, f32 *m) {
    f32 determinant;
    f32 reciprocalDeterminant;
    f32 m01TimesM22;
    f32 m00TimesM12;
    f32 inverseTranslationZNumeratorPartial;
    f32 affineHomogeneousOne;

    determinant = m[0] * m[5] * m[10]
                - m[0] * m[9] * m[6]
                - m[4] * m[1] * m[10]
                + m[4] * m[9] * m[2]
                + m[8] * m[1] * m[6]
                - m[8] * m[5] * m[2];

    if (determinant == 0.0f) {
        out[0] = m[0];
        out[1] = m[1];
        out[2] = m[2];
        out[3] = m[3];
        out[4] = m[4];
        out[5] = m[5];
        out[6] = m[6];
        out[7] = m[7];
        out[8] = m[8];
        out[9] = m[9];
        out[10] = m[10];
        out[11] = m[11];
        out[12] = m[12];
        out[13] = m[13];
        out[14] = m[14];
        out[15] = m[15];
        return;
    }

    affineHomogeneousOne = D_800C46C0_de;
    reciprocalDeterminant = affineHomogeneousOne / determinant;
    out[0] = (m[5] * m[10] - m[9] * m[6]) * reciprocalDeterminant;
    m01TimesM22 = m[1] * m[10];
    out[1] = (m[9] * m[2] - m01TimesM22) * reciprocalDeterminant;
    out[2] = (m[1] * m[6] - m[5] * m[2]) * reciprocalDeterminant;
    out[3] = 0.0f;
    out[4] = (-m[4] * m[10] + m[8] * m[6]) * reciprocalDeterminant;
    out[5] = (m[0] * m[10] - m[8] * m[2]) * reciprocalDeterminant;
    m00TimesM12 = m[0] * m[6];
    out[6] = (m[4] * m[2] - m00TimesM12) * reciprocalDeterminant;
    out[7] = 0.0f;
    out[8] = -(-m[4] * m[9] + m[8] * m[5]) * reciprocalDeterminant;
    out[9] = (-m[0] * m[9] + m[8] * m[1]) * reciprocalDeterminant;
    out[10] = -(-m[0] * m[5] + m[4] * m[1]) * reciprocalDeterminant;
    out[11] = 0.0f;
    out[12] = (-m[4] * m[9] * m[14]
             + m[4] * m[10] * m[13]
             + m[8] * m[5] * m[14]
             - m[8] * m[6] * m[13]
             - m[12] * m[5] * m[10]
             + m[12] * m[9] * m[6]) * reciprocalDeterminant;
    out[13] = (m[0] * m[9] * m[14]
             - m[0] * m[10] * m[13]
             - m[8] * m[1] * m[14]
             + m[8] * m[2] * m[13]
             + m[12] * m[1] * m[10]
             - m[12] * m[9] * m[2]) * reciprocalDeterminant;
    inverseTranslationZNumeratorPartial = m[0] * m[5] * m[14]
                                        - m[0] * m[6] * m[13]
                                        - m[4] * m[1] * m[14]
                                        + m[4] * m[2] * m[13]
                                        + m[12] * m[1] * m[6];
    out[14] = (m[12] * m[5] * m[2] - inverseTranslationZNumeratorPartial) * reciprocalDeterminant;
    out[15] = affineHomogeneousOne;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C45F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C97B0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4970_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C49B0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C46C0_4 = 1.0f;
#endif
