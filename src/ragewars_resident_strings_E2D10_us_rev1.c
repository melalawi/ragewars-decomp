/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E2D10 {
    char label_j_lfwriillxmyay_b_v_0[20]; /* ROM0xE2D10 */
    char label_bdubv_ied_bccg_qezrzq_1[24]; /* ROM0xE2D24 */
};
const struct MenuStrings_E2D10 ragewars_resident_strings_E2D10_us_rev1 = {
    "J@LFWRIILLXMYAY@B]V",
    "BDUBV@IED@\\BCCG\\QEZRZQ"
};
typedef char menu_strings_size_E2D10[(sizeof(struct MenuStrings_E2D10) == 44) ? 1 : -1];
