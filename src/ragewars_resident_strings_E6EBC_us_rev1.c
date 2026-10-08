/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6EBC {
    char label_dir_blue_000_0[16]; /* ROM0xE6EBC */
};
const struct MenuStrings_E6EBC ragewars_resident_strings_E6EBC_us_rev1 = {
    "dir blue  000"
};
typedef char menu_strings_size_E6EBC[(sizeof(struct MenuStrings_E6EBC) == 16) ? 1 : -1];
