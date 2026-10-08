/* Numeric constants used by func_80442BA8_de; US rev1 ROM 0xe32bc-0xe32c4.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_80442BA8_E32BC_us_rev1_layout {
    float D_800E26BC;
    float D_800E26C0;
} __attribute__((packed));

const struct rw_constants_80442BA8_E32BC_us_rev1_layout rw_constants_80442BA8_E32BC_us_rev1 = {
    5.0f,
    4.0f,
};
