/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_CAC40 {
    char label_cartridge_index_0[16]; /* ROM0xCAC40 */
};
const struct MenuStrings_CAC40 ragewars_resident_strings_CAC40_us_rev1 = {
    "cartridge index"
};
typedef char menu_strings_size_CAC40[(sizeof(struct MenuStrings_CAC40) == 16) ? 1 : -1];
