/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6E10 {
    char label_far_clip_0[20]; /* ROM0xE6E10 */
};
const struct MenuStrings_E6E10 ragewars_resident_strings_E6E10_us_rev1 = {
    "far clip        "
};
typedef char menu_strings_size_E6E10[(sizeof(struct MenuStrings_E6E10) == 20) ? 1 : -1];
