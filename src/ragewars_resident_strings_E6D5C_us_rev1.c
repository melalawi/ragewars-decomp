/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_E6D5C {
    char label_infinite_ammo_off_0[24]; /* ROM0xE6D5C */
};
const struct MenuStrings_E6D5C ragewars_resident_strings_E6D5C_us_rev1 = {
    "infinite ammo :   off"
};
typedef char menu_strings_size_E6D5C[(sizeof(struct MenuStrings_E6D5C) == 24) ? 1 : -1];
