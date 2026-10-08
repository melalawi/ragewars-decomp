/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F8118 {
    char label_m_common8_0[12]; /* ROM0xF8118 */
};
const struct MenuStrings_F8118 ragewars_resident_strings_F8118_us_rev1 = {
    "m_Common8"
};
typedef char menu_strings_size_F8118[(sizeof(struct MenuStrings_F8118) == 12) ? 1 : -1];
