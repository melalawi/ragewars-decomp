/* Numeric constants used by func_80402BA0_de; US rev1 ROM 0xe1870-0xe18a0.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_80402BA0_E1870_us_rev1_layout {
    double D_800DCC40_de;
    float D_800DCC48_de;
    float D_800DCC4C_de;
    float D_800E0C80;
    float value_14;
    float D_800DCC58_de;
    float value_1C;
    float D_800DCC60;
    float value_24;
    float D_800E0C98;
    float value_2C;
} __attribute__((packed));

const struct rw_constants_80402BA0_E1870_us_rev1_layout rw_constants_80402BA0_E1870_us_rev1 = {
    4294967296.0,
    2147483648.0f,
    1.0f,
    255.0f,
    2147483648.0f,
    255.0f,
    2147483648.0f,
    255.0f,
    2147483648.0f,
    255.0f,
    2147483648.0f,
};
