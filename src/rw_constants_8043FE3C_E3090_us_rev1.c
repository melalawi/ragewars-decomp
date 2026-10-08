/* Numeric constants used by func_8043FE3C_de; US rev1 ROM 0xe3090-0xe30ac.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_8043FE3C_E3090_us_rev1_layout {
    float D_800DE460;
    float value_4;
    float D_800E2498;
    float D_800DE46C;
    float D_800DE470;
    float D_800DE474_de;
    float D_800DE478;
} __attribute__((packed));

const struct rw_constants_8043FE3C_E3090_us_rev1_layout rw_constants_8043FE3C_E3090_us_rev1 = {
    1.25f,
    0.8999999761581421f,
    0.25f,
    0.0035211266949772835f,
    0.0045045046135783195f,
    255.0f,
    1.0f,
};
