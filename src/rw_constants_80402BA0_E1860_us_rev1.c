/* Numeric constants used by func_80402BA0_de; US rev1 ROM 0xe1860-0xe186c.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_80402BA0_E1860_us_rev1_layout {
    double D_800DCC30;
    float D_800E0C68;
} __attribute__((packed));

const struct rw_constants_80402BA0_E1860_us_rev1_layout rw_constants_80402BA0_E1860_us_rev1 = {
    4294967296.0,
    2147483648.0f,
};
