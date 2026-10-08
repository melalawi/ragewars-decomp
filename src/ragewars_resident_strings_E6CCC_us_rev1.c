/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6CCC {
    char label_weapon_vis_0[24]; /* ROM0xE6CCC */
};
const struct MenuStrings_E6CCC ragewars_resident_strings_E6CCC_us_rev1 = {
    "weapon        :   vis"
};
typedef char menu_strings_size_E6CCC[(sizeof(struct MenuStrings_E6CCC) == 24) ? 1 : -1];
