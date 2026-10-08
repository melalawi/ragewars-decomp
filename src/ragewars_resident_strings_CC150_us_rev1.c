/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_CC150 {
    char label_controller_pak_0[16]; /* ROM0xCC150 */
};
const struct MenuStrings_CC150 ragewars_resident_strings_CC150_us_rev1 = {
    "controller pak"
};
typedef char menu_strings_size_CC150[(sizeof(struct MenuStrings_CC150) == 16) ? 1 : -1];
