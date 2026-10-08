/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6F24 {
    char label_lod_chg_dist_0[24]; /* ROM0xE6F24 */
};
const struct MenuStrings_E6F24 ragewars_resident_strings_E6F24_us_rev1 = {
    "lod chg dist  :      "
};
typedef char menu_strings_size_E6F24[(sizeof(struct MenuStrings_E6F24) == 24) ? 1 : -1];
