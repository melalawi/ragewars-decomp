/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F8BFC {
    char label_m_motionstyle_0[16]; /* ROM0xF8BFC */
};
const struct MenuStrings_F8BFC ragewars_resident_strings_F8BFC_us_rev1 = {
    "\rm_MotionStyle*"
};
typedef char menu_strings_size_F8BFC[(sizeof(struct MenuStrings_F8BFC) == 16) ? 1 : -1];
