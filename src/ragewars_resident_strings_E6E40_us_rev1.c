/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6E40 {
    char label_affect_all_regions_0[20]; /* ROM0xE6E40 */
};
const struct MenuStrings_E6E40 ragewars_resident_strings_E6E40_us_rev1 = {
    "affect all regions"
};
typedef char menu_strings_size_E6E40[(sizeof(struct MenuStrings_E6E40) == 20) ? 1 : -1];
