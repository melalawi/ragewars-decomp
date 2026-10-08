/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D53E4 {
    char label_red_0[4]; /* ROM0xD53E4 */
    char label_green_1[8]; /* ROM0xD53E8 */
    char label_horizontal_2[12]; /* ROM0xD53F0 */
    char label_vertical_3[12]; /* ROM0xD53FC */
    char label_lorez_4[8]; /* ROM0xD5408 */
    char label_hirez_5[8]; /* ROM0xD5410 */
    char label_letterbox_6[12]; /* ROM0xD5418 */
};
const struct MenuStrings_D53E4 ragewars_menu_strings_D53E4_us_rev1 = {
    "RED",
    "GREEN",
    "HORIZONTAL",
    "VERTICAL",
    "LOREZ",
    "HIREZ",
    "LETTERBOX"
};
typedef char menu_strings_size_D53E4[(sizeof(struct MenuStrings_D53E4) == 64) ? 1 : -1];
