/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6D94 {
    char label_fancy_lighting_off_0[24]; /* ROM0xE6D94 */
};
const struct MenuStrings_E6D94 ragewars_resident_strings_E6D94_us_rev1 = {
    "fancy lighting:   off"
};
typedef char menu_strings_size_E6D94[(sizeof(struct MenuStrings_E6D94) == 24) ? 1 : -1];
