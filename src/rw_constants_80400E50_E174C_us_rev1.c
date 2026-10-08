/* Numeric constants used by func_80400E50_de; US rev1 ROM 0xe174c-0xe1758.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_80400E50_E174C_us_rev1_layout {
    float D_800E0B4C;
    float D_800DCB20_de;
    float value_8;
} __attribute__((packed));

const struct rw_constants_80400E50_E174C_us_rev1_layout rw_constants_80400E50_E174C_us_rev1 = {
    1.0f,
    1.0f,
    0.1666666716337204f,
};
