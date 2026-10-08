/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_CAE00 {
    char label_level_index_0[12]; /* ROM0xCAE00 */
};
const struct MenuStrings_CAE00 ragewars_resident_strings_CAE00_us_rev1 = {
    "level index"
};
typedef char menu_strings_size_CAE00[(sizeof(struct MenuStrings_CAE00) == 12) ? 1 : -1];
