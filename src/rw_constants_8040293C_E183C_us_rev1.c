/* Numeric constants used by func_8040293C_de; US rev1 ROM 0xe183c-0xe1854.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_8040293C_E183C_us_rev1_layout {
    float D_800E0C3C;
    float D_800DCC10_de;
    float D_800DCC14_de;
    float D_800DCC18_de;
    float D_800DCC1C;
    float D_800DCC20;
} __attribute__((packed));

const struct rw_constants_8040293C_E183C_us_rev1_layout rw_constants_8040293C_E183C_us_rev1 = {
    1.0f,
    0.5f,
    0.30000001192092896f,
    1.0f,
    1.0f,
    2147483648.0f,
};
