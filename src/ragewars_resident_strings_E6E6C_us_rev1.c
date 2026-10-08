/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6E6C {
    char label_amb_green_000_0[16]; /* ROM0xE6E6C */
};
const struct MenuStrings_E6E6C ragewars_resident_strings_E6E6C_us_rev1 = {
    "amb green 000"
};
typedef char menu_strings_size_E6E6C[(sizeof(struct MenuStrings_E6E6C) == 16) ? 1 : -1];
