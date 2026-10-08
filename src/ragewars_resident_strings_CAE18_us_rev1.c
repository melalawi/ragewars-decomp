/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_CAE18 {
    char label_grid_bounds_0[12]; /* ROM0xCAE18 */
    char label_grid_sections_index_1[20]; /* ROM0xCAE24 */
};
const struct MenuStrings_CAE18 ragewars_resident_strings_CAE18_us_rev1 = {
    "grid bounds",
    "grid sections index"
};
typedef char menu_strings_size_CAE18[(sizeof(struct MenuStrings_CAE18) == 32) ? 1 : -1];
