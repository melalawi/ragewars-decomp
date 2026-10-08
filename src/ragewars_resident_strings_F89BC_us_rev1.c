/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F89BC {
    char label_m_horizdir8_0[12]; /* ROM0xF89BC */
};
const struct MenuStrings_F89BC ragewars_resident_strings_F89BC_us_rev1 = {
    "m_HorizDir8"
};
typedef char menu_strings_size_F89BC[(sizeof(struct MenuStrings_F89BC) == 12) ? 1 : -1];
