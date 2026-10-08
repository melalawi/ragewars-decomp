#if defined(VERSION_US_REV1)
/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D639C {
    char label_tagged_by_0[12]; /* ROM0xD639C */
    char label_you_tagged_1[12]; /* ROM0xD63A8 */
    char label_killed_by_2[12]; /* ROM0xD63B4 */
    char label_you_killed_3[12]; /* ROM0xD63C0 */
    char label_you_killed_yourself_4[20]; /* ROM0xD63CC */
    char label_you_lost_the_flag_5[24]; /* ROM0xD63E0 */
    char label_he_dropped_the_flag_6[24]; /* ROM0xD63F8 */
    char label_are_you_sure_7[16]; /* ROM0xD6410 */
    char label_you_want_to_8[12]; /* ROM0xD6420 */
    char label_yes_9[4]; /* ROM0xD642C */
};
const struct MenuStrings_D639C ragewars_menu_strings_D639C_us_rev1 = {
    "tagged by ",
    "you tagged ",
    "killed by ",
    "you killed ",
    "you killed yourself",
    "you lost the flag!!!",
    "He dropped the flag!!!",
    "are you sure?",
    "you want to",
    "yes"
};
typedef char menu_strings_size_D639C[(sizeof(struct MenuStrings_D639C) == 148) ? 1 : -1];
#endif
