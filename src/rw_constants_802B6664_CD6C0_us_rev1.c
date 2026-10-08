/* Numeric constants used by func_802B6664_de; US rev1 ROM 0xcd6c0-0xcd6c8.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_802B6664_CD6C0_us_rev1_layout {
    float D_800C7870_de;
    float D_800C7874_de;
} __attribute__((packed));

const struct rw_constants_802B6664_CD6C0_us_rev1_layout rw_constants_802B6664_CD6C0_us_rev1 = {
    -1.0f,
    1.0f,
};
