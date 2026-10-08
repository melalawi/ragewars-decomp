/* Numeric constants used by func_8041FC50_de; US rev1 ROM 0xe21a4-0xe21bc.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_8041FC50_E21A4_us_rev1_layout {
    float D_800E15A4;
    float D_800DD578;
    float D_800DD57C;
    float D_800DD580;
    float D_800DD584;
    float D_800DD588;
} __attribute__((packed));

const struct rw_constants_8041FC50_E21A4_us_rev1_layout rw_constants_8041FC50_E21A4_us_rev1 = {
    4.0f,
    100.0f,
    255.0f,
    150.0f,
    4.0f,
    255.0f,
};
