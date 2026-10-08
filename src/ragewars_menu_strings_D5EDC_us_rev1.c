/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D5EDC {
    char label_rage_wars_0[12]; /* ROM0xD5EDC */
    char label_turok_2_1[8]; /* ROM0xD5EE8 */
};
const struct MenuStrings_D5EDC ragewars_menu_strings_D5EDC_us_rev1 = {
    "RAGE WARS",
    "TUROK 2"
};
typedef char menu_strings_size_D5EDC[(sizeof(struct MenuStrings_D5EDC) == 20) ? 1 : -1];
