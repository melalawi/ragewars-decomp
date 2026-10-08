/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E2D5C {
    char label_hdgfv_um_hd_0[12]; /* ROM0xE2D5C */
    char label_wicwwdrbp_yi_o_1[20]; /* ROM0xE2D68 */
    char label_ifmweg_f_2[12]; /* ROM0xE2D7C */
};
const struct MenuStrings_E2D5C ragewars_resident_strings_E2D5C_us_rev1 = {
    "HDGFV@UM]HD",
    "WICWWDRBP]_YI@O_",
    "IFMWEG@F"
};
typedef char menu_strings_size_E2D5C[(sizeof(struct MenuStrings_E2D5C) == 44) ? 1 : -1];
