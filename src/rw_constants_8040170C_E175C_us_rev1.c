/* Numeric constants used by func_8040170C_de; US rev1 ROM 0xe175c-0xe1764.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_8040170C_E175C_us_rev1_layout {
    float D_800E0B5C;
    float D_800E0B60;
} __attribute__((packed));

const struct rw_constants_8040170C_E175C_us_rev1_layout rw_constants_8040170C_E175C_us_rev1 = {
    1.0f,
    1.0f,
};
