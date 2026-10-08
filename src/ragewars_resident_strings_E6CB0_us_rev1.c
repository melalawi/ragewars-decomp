/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6CB0 {
    char label_weapon_hidden_0[24]; /* ROM0xE6CB0 */
};
const struct MenuStrings_E6CB0 ragewars_resident_strings_E6CB0_us_rev1 = {
    "weapon        :hidden"
};
typedef char menu_strings_size_E6CB0[(sizeof(struct MenuStrings_E6CB0) == 24) ? 1 : -1];
