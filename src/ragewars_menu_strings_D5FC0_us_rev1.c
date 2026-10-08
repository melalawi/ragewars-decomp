/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D5FC0 {
    char label_note_info_0[12]; /* ROM0xD5FC0 */
    char label_delete_note_1[12]; /* ROM0xD5FCC */
    char label_difficulty_easy_2[20]; /* ROM0xD5FD8 */
    char label_difficulty_normal_3[20]; /* ROM0xD5FEC */
    char label_difficulty_hard_4[20]; /* ROM0xD6000 */
    char label_health_5[20]; /* ROM0xD6014 */
    char label_lives_6[20]; /* ROM0xD6028 */
    char label_time_000_00_00_7[16]; /* ROM0xD603C */
    char label_note_info_8[12]; /* ROM0xD604C */
    char label_delete_note_9[12]; /* ROM0xD6058 */
    char label_delete_note_10[12]; /* ROM0xD6064 */
    char label_name_ext_11[24]; /* ROM0xD6070 */
    char label_message_12[24]; /* ROM0xD6088 */
    char label_name_13[20]; /* ROM0xD60A0 */
    char label_type_14[20]; /* ROM0xD60B4 */
    char label_frags_15[20]; /* ROM0xD60C8 */
    char label_rank_16[20]; /* ROM0xD60DC */
    char label_load_17[8]; /* ROM0xD60F0 */
    char label_delete_18[8]; /* ROM0xD60F8 */
    char label_delete_19[8]; /* ROM0xD6100 */
    char label_error_20[8]; /* ROM0xD6108 */
    char label_important_21[12]; /* ROM0xD6110 */
};
const struct MenuStrings_D5FC0 ragewars_menu_strings_D5FC0_us_rev1 = {
    "note info",
    "delete note",
    "difficulty :  easy",
    "difficulty :normal",
    "difficulty :  hard",
    "health     :      ",
    "lives      :      ",
    "time :000.00.00",
    "note info",
    "delete note",
    "delete note",
    "name             ext ",
    "                     ",
    "name  :            ",
    "type  :            ",
    "frags :            ",
    "rank  :            ",
    "load?",
    "delete?",
    "delete?",
    "error",
    "important"
};
typedef char menu_strings_size_D5FC0[(sizeof(struct MenuStrings_D5FC0) == 348) ? 1 : -1];
