/* Numeric constants used by func_802B7130_de; US rev1 ROM 0xcd728-0xcd76c.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_802B7130_CD728_us_rev1_layout {
    double D_800CCB28;
    double value_8;
    double value_10;
    double value_18;
    double D_800C78F8_de;
    double D_800C7900_de;
    double D_800C7908_de;
    float D_800C7910_de;
    float D_800C7914_de;
    float D_800C7918_de;
} __attribute__((packed));

const struct rw_constants_802B7130_CD728_us_rev1_layout rw_constants_802B7130_CD728_us_rev1 = {
    -0.16666659550427756,
    0.008333066246082155,
    -0.0001980960290193795,
    2.605780637968037e-06,
    0.3183098861837907,
    3.1415926218032837,
    3.178650954705639e-08,
    0.0f,
    0.5f,
    0.5f,
};
