/* Numeric constants used by func_802B6DEC_de; US rev1 ROM 0xcd6f0-0xcd708.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_802B6DEC_CD6F0_us_rev1_layout {
    float D_800C78A0_de;
    float D_800C78A4_de;
    float D_800C78A8_de;
    float D_800C78AC_de;
    float D_800C78B0_de;
    float D_800C78B4_de;
} __attribute__((packed));

const struct rw_constants_802B6DEC_CD6F0_us_rev1_layout rw_constants_802B6DEC_CD6F0_us_rev1 = {
    0.01745329238474369f,
    0.5f,
    -1.0f,
    2.0f,
    131072.0f,
    2147483648.0f,
};
