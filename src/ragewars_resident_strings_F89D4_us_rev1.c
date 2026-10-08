/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F89D4 {
    char label_m_movetime_0[12]; /* ROM0xF89D4 */
};
const struct MenuStrings_F89D4 ragewars_resident_strings_F89D4_us_rev1 = {
    "m_MoveTime<"
};
typedef char menu_strings_size_F89D4[(sizeof(struct MenuStrings_F89D4) == 12) ? 1 : -1];
