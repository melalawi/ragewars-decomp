/* Numeric constants used by func_80441214_de; US rev1 ROM 0xe30d4-0xe30e4.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_80441214_E30D4_us_rev1_layout {
    float D_800E24D4;
    float D_800DE4A8;
    float D_800DE4AC;
    float D_800DE4B0_de;
} __attribute__((packed));

const struct rw_constants_80441214_E30D4_us_rev1_layout rw_constants_80441214_E30D4_us_rev1 = {
    1.0f,
    0.4000000059604645f,
    1.0f,
    0.4000000059604645f,
};
