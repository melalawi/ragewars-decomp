/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6D04 {
    char label_3d_shadows_off_0[24]; /* ROM0xE6D04 */
};
const struct MenuStrings_E6D04 ragewars_resident_strings_E6D04_us_rev1 = {
    "3d shadows    :   off"
};
typedef char menu_strings_size_E6D04[(sizeof(struct MenuStrings_E6D04) == 24) ? 1 : -1];
