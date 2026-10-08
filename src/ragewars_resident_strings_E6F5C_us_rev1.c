/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6F5C {
    char label_music_none_0[24]; /* ROM0xE6F5C */
};
const struct MenuStrings_E6F5C ragewars_resident_strings_E6F5C_us_rev1 = {
    "music         :  none"
};
typedef char menu_strings_size_E6F5C[(sizeof(struct MenuStrings_E6F5C) == 24) ? 1 : -1];
