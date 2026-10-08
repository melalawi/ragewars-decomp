/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F8BBC {
    char label_m_common_0[12]; /* ROM0xF8BBC */
};
const struct MenuStrings_F8BBC ragewars_resident_strings_F8BBC_us_rev1 = {
    "m_Common$"
};
typedef char menu_strings_size_F8BBC[(sizeof(struct MenuStrings_F8BBC) == 12) ? 1 : -1];
