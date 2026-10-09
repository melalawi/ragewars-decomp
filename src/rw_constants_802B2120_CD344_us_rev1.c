/* Numeric constants used by func_802B2120_de; US rev1 ROM 0xcd344-0xcd354.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_802B2120_CD344_us_rev1_layout {
    float D_800C74F4_de;
    double D_800C74F8_de;
    float D_800C7500_de;
} __attribute__((packed));

const struct rw_constants_802B2120_CD344_us_rev1_layout rw_constants_802B2120_CD344_us_rev1 = {
    1000000.0f,
    4294967296.0,
    2147483648.0f,
};
