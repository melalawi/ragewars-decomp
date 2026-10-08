#if defined(VERSION_US_REV1)
/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D5DF8 {
    char label_choose_0[8]; /* ROM0xD5DF8 */
    char label_blue_blood_1[12]; /* ROM0xD5E00 */
    char label_red_blood_2[12]; /* ROM0xD5E0C */
    char label_final_score_3[12]; /* ROM0xD5E18 */
    char label_blue_blood_score_4[24]; /* ROM0xD5E24 */
    char label_red_blood_score_5[24]; /* ROM0xD5E3C */
    char label_please_wait_6[20]; /* ROM0xD5E54 */
    char label_paused_7[8]; /* ROM0xD5E68 */
    char label_resume_game_8[12]; /* ROM0xD5E70 */
    char label_mission_status_9[16]; /* ROM0xD5E7C */
    char label_mission_objectives_10[20]; /* ROM0xD5E8C */
    char label_inventory_11[12]; /* ROM0xD5EA0 */
    char label_load_12[8]; /* ROM0xD5EAC */
    char label_options_13[8]; /* ROM0xD5EB4 */
    char label_cheats_14[8]; /* ROM0xD5EBC */
    char label_quit_15[8]; /* ROM0xD5EC4 */
    char label_inventory_16[12]; /* ROM0xD5ECC */
};
const struct MenuStrings_D5DF8 ragewars_menu_strings_D5DF8_us_rev1 = {
    "choose",
    "blue blood",
    "red blood",
    "final score",
    "blue blood score :    ",
    " red blood score :    ",
    "please wait.....",
    "paused",
    "resume game",
    "mission status",
    "mission objectives",
    "inventory",
    "load",
    "options",
    "cheats",
    "quit",
    "inventory"
};
typedef char menu_strings_size_D5DF8[(sizeof(struct MenuStrings_D5DF8) == 224) ? 1 : -1];
#endif
