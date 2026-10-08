#if defined(VERSION_US_REV1)
/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D6358 {
    char label_pmf_shot_0[12]; /* ROM0xD6358 */
    char label_body_shot_1[12]; /* ROM0xD6364 */
    char label_head_shot_2[12]; /* ROM0xD6370 */
    char label_arm_shot_3[12]; /* ROM0xD637C */
    char label_edit_4[8]; /* ROM0xD6388 */
};
const struct MenuStrings_D6358 ragewars_menu_strings_D6358_us_rev1 = {
    "pmf shot!",
    "body shot!",
    "head shot!",
    "arm shot!",
    "edit"
};
typedef char menu_strings_size_D6358[(sizeof(struct MenuStrings_D6358) == 56) ? 1 : -1];
#endif
