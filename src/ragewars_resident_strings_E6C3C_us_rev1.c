/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6C3C {
    char label_smeartsend_mode_on_0[28]; /* ROM0xE6C3C */
};
const struct MenuStrings_E6C3C ragewars_resident_strings_E6C3C_us_rev1 = {
    "_SMEartsend mode  :    on"
};
typedef char menu_strings_size_E6C3C[(sizeof(struct MenuStrings_E6C3C) == 28) ? 1 : -1];
