/* Numeric constants used by func_80441BE0_de; US rev1 ROM 0xe3104-0xe311c.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_80441BE0_E3104_us_rev1_layout {
    float D_800E2504;
    float D_800DE4D8;
    float D_800DE4DC;
    float D_800DE4E0_de;
    float D_800DE4E4;
    float D_800DE4E8;
} __attribute__((packed));

const struct rw_constants_80441BE0_E3104_us_rev1_layout rw_constants_80441BE0_E3104_us_rev1 = {
    0.5f,
    0.21621622145175934f,
    9.0f,
    13.0f,
    192.0f,
    2147483648.0f,
};
