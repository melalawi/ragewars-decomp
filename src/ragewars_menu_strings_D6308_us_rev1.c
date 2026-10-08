/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D6308 {
    char label_save_0[8]; /* ROM0xD6308 */
    char label_load_1[8]; /* ROM0xD6310 */
    char label_health_2[8]; /* ROM0xD6318 */
    char label_ammo_3[8]; /* ROM0xD6320 */
    char label_go_back_4[8]; /* ROM0xD6328 */
};
const struct MenuStrings_D6308 ragewars_menu_strings_D6308_us_rev1 = {
    "   save",
    "   load",
    " health",
    "   ammo",
    "go back"
};
typedef char menu_strings_size_D6308[(sizeof(struct MenuStrings_D6308) == 40) ? 1 : -1];
