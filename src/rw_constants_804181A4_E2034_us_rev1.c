/* Numeric constants used by func_804181A4_de; US rev1 ROM 0xe2034-0xe2040.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_804181A4_E2034_us_rev1_layout {
    float D_800DD404;
    float D_800DD408_de;
    float value_8;
} __attribute__((packed));

const struct rw_constants_804181A4_E2034_us_rev1_layout rw_constants_804181A4_E2034_us_rev1 = {
    1024.0f,
    1024.0f,
    1024.0f,
};
