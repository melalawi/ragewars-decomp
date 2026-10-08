/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_CAE70 {
    char label_level_nav_nodes_0[16]; /* ROM0xCAE70 */
    char label_level_nav_links_1[16]; /* ROM0xCAE80 */
};
const struct MenuStrings_CAE70 ragewars_resident_strings_CAE70_us_rev1 = {
    "level nav nodes",
    "level nav links"
};
typedef char menu_strings_size_CAE70[(sizeof(struct MenuStrings_CAE70) == 32) ? 1 : -1];
