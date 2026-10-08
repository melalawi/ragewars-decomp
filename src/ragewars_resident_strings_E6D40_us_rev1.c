/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6D40 {
    char label_infinite_ammo_on_0[24]; /* ROM0xE6D40 */
};
const struct MenuStrings_E6D40 ragewars_resident_strings_E6D40_us_rev1 = {
    "infinite ammo :    on"
};
typedef char menu_strings_size_E6D40[(sizeof(struct MenuStrings_E6D40) == 24) ? 1 : -1];
