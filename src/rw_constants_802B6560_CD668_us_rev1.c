/* Numeric constants used by func_802B6560_de; US rev1 ROM 0xcd668-0xcd6a4.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_802B6560_CD668_us_rev1_layout {
    double D_800CCA68;
    double value_8;
    double value_10;
    double value_18;
    double D_800C7838_de;
    double D_800C7840_de;
    double D_800C7848_de;
    float D_800C7850_de;
} __attribute__((packed));

const struct rw_constants_802B6560_CD668_us_rev1_layout rw_constants_802B6560_CD668_us_rev1 = {
    -0.16666659550427756,
    0.008333066246082155,
    -0.0001980960290193795,
    2.605780637968037e-06,
    0.3183098861837907,
    3.1415926218032837,
    3.178650954705639e-08,
    0.0f,
};
