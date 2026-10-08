/* Numeric constants used by func_80440838_de; US rev1 ROM 0xe30c0-0xe30d4.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_80440838_E30C0_us_rev1_layout {
    double D_800DE490;
    float D_800DE498_de;
    float value_C;
    float D_800DE4A0;
} __attribute__((packed));

const struct rw_constants_80440838_E30C0_us_rev1_layout rw_constants_80440838_E30C0_us_rev1 = {
    4294967296.0,
    0.01745329424738884f,
    1.0f,
    50.0f,
};
