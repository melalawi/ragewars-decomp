/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F7918 {
    char label_m_tranqhealth_0[16]; /* ROM0xF7918 */
};
const struct MenuStrings_F7918 ragewars_resident_strings_F7918_us_rev1 = {
    "\rm_TranqHealth."
};
typedef char menu_strings_size_F7918[(sizeof(struct MenuStrings_F7918) == 16) ? 1 : -1];
