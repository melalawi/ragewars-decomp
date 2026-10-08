/* Numeric constants used by func_804415F4_de; US rev1 ROM 0xe30f0-0xe3104.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_804415F4_E30F0_us_rev1_layout {
    double D_800DE4C0;
    float D_800DE4C8_de;
    float value_C;
    float D_800DE4D0;
} __attribute__((packed));

const struct rw_constants_804415F4_E30F0_us_rev1_layout rw_constants_804415F4_E30F0_us_rev1 = {
    4294967296.0,
    0.01745329424738884f,
    1.0f,
    50.0f,
};
