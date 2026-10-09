/* Numeric constants used by func_8029E1D4_de; US rev1 ROM 0xcba14-0xcba34.
 * Types follow actual lwc1/ldc1 uses, including symbol+offset loads.
 * Packed fields preserve the original resident offsets.
 */
struct rw_constants_8029E1D4_CBA14_us_rev1_layout {
    float D_800C5C84;
    float D_800C5C88_de;
    float D_800C5C8C;
    double D_800C5C90_de;
    float D_800C5C98_de;
    float D_800C5C9C;
    float D_800CAE30;
} __attribute__((packed));

const struct rw_constants_8029E1D4_CBA14_us_rev1_layout rw_constants_8029E1D4_CBA14_us_rev1 = {
    3.1415927410125732f,
    25.13274383544922f,
    -25.13274383544922f,
    6.283185958862305,
    6.283185958862305f,
    6.283185958862305f,
    3.1415927410125732f,
};
