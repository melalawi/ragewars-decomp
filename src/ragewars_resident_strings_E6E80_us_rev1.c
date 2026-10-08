/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6E80 {
    char label_amb_blue_000_0[16]; /* ROM0xE6E80 */
};
const struct MenuStrings_E6E80 ragewars_resident_strings_E6E80_us_rev1 = {
    "amb blue  000"
};
typedef char menu_strings_size_E6E80[(sizeof(struct MenuStrings_E6E80) == 16) ? 1 : -1];
