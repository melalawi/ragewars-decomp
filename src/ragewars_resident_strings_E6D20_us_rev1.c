/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6D20 {
    char label_edit_fog_0[12]; /* ROM0xE6D20 */
};
const struct MenuStrings_E6D20 ragewars_resident_strings_E6D20_us_rev1 = {
    "edit fog"
};
typedef char menu_strings_size_E6D20[(sizeof(struct MenuStrings_E6D20) == 12) ? 1 : -1];
