#if defined(VERSION_US_REV1)
/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D5EF4 {
    char label_nrwe_0[8]; /* ROM0xD5EF4 */
};
const struct MenuStrings_D5EF4 ragewars_menu_strings_D5EF4_us_rev1 = {
    "NRWE"
};
typedef char menu_strings_size_D5EF4[(sizeof(struct MenuStrings_D5EF4) == 8) ? 1 : -1];
#endif
