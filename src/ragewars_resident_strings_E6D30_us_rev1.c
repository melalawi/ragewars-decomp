/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6D30 {
    char label_edit_light_0[12]; /* ROM0xE6D30 */
};
const struct MenuStrings_E6D30 ragewars_resident_strings_E6D30_us_rev1 = {
    "edit light"
};
typedef char menu_strings_size_E6D30[(sizeof(struct MenuStrings_E6D30) == 12) ? 1 : -1];
