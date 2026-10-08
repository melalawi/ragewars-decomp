/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F89EC {
    char label_m_rotation_0[12]; /* ROM0xF89EC */
};
const struct MenuStrings_F89EC ragewars_resident_strings_F89EC_us_rev1 = {
    "m_Rotation@"
};
typedef char menu_strings_size_F89EC[(sizeof(struct MenuStrings_F89EC) == 12) ? 1 : -1];
