/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6C5C {
    char label_artsend_mode_off_0[24]; /* ROM0xE6C5C */
};
const struct MenuStrings_E6C5C ragewars_resident_strings_E6C5C_us_rev1 = {
    "artsend mode  :   off"
};
typedef char menu_strings_size_E6C5C[(sizeof(struct MenuStrings_E6C5C) == 24) ? 1 : -1];
