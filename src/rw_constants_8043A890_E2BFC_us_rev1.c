/* Numeric constants used by func_8043A890_de; US rev1 ROM 0xe2bfc-0xe2c10.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_8043A890_E2BFC_us_rev1_layout {
    float D_800DDFCC;
    float D_800DDFD0;
    float value_8;
    float D_800DDFD8;
    float D_800DDFDC;
} __attribute__((packed));

const struct rw_constants_8043A890_E2BFC_us_rev1_layout rw_constants_8043A890_E2BFC_us_rev1 = {
    4.0f,
    255.0f,
    150.0f,
    255.0f,
    4.0f,
};
