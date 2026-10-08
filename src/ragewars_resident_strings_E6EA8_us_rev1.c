/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6EA8 {
    char label_dir_green_000_0[16]; /* ROM0xE6EA8 */
};
const struct MenuStrings_E6EA8 ragewars_resident_strings_E6EA8_us_rev1 = {
    "dir green 000"
};
typedef char menu_strings_size_E6EA8[(sizeof(struct MenuStrings_E6EA8) == 16) ? 1 : -1];
