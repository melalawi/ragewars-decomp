/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6C78 {
    char label_person_1st_0[24]; /* ROM0xE6C78 */
};
const struct MenuStrings_E6C78 ragewars_resident_strings_E6C78_us_rev1 = {
    "person        :   1st"
};
typedef char menu_strings_size_E6C78[(sizeof(struct MenuStrings_E6C78) == 24) ? 1 : -1];
