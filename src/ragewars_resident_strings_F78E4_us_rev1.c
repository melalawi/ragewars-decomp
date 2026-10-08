/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F78E4 {
    char label_m_leashradius_0[16]; /* ROM0xF78E4 */
};
const struct MenuStrings_F78E4 ragewars_resident_strings_F78E4_us_rev1 = {
    "m_LeashRadius,"
};
typedef char menu_strings_size_F78E4[(sizeof(struct MenuStrings_F78E4) == 16) ? 1 : -1];
