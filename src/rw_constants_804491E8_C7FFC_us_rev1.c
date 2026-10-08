/* Numeric constants used by func_804491E8_de; US rev1 ROM 0xc7ffc-0xc8008.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_804491E8_C7FFC_us_rev1_layout {
    float D_800C73FC;
    float D_800C2310_de;
    float D_800C2314_de;
} __attribute__((packed));

const struct rw_constants_804491E8_C7FFC_us_rev1_layout rw_constants_804491E8_C7FFC_us_rev1 = {
    0.1875f,
    1.5707964897155762f,
    255.0f,
};
