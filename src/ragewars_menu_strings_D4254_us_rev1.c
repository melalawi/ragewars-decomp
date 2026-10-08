/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D4254 {
    char label_d_times_0[8]; /* ROM0xD4254 */
    char label_acqunone_1[12]; /* ROM0xD425C */
};
const struct MenuStrings_D4254 ragewars_menu_strings_D4254_us_rev1 = {
    "d times",
    "acqunone"
};
typedef char menu_strings_size_D4254[(sizeof(struct MenuStrings_D4254) == 20) ? 1 : -1];
