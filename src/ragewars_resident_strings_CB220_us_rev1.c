/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_CB220 {
    char label_artsend_deactivated_0[20]; /* ROM0xCB220 */
};
const struct MenuStrings_CB220 ragewars_resident_strings_CB220_us_rev1 = {
    "Artsend Deactivated"
};
typedef char menu_strings_size_CB220[(sizeof(struct MenuStrings_CB220) == 20) ? 1 : -1];
