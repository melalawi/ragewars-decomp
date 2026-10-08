/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_D5428 {
    char label_yes_0[4]; /* ROM0xD5428 */
    char label_novice_1[8]; /* ROM0xD542C */
    char label_easy_2[8]; /* ROM0xD5434 */
    char label_normal_3[8]; /* ROM0xD543C */
    char label_veteran_4[8]; /* ROM0xD5444 */
    char label_expert_5[8]; /* ROM0xD544C */
    char label_arcade_6[8]; /* ROM0xD5454 */
    char label_wheel_7[8]; /* ROM0xD545C */
    char label_tap_8[4]; /* ROM0xD5464 */
    char label_mixed_9[8]; /* ROM0xD5468 */
    char label_controller_d_10[16]; /* ROM0xD5470 */
    char label_ctf_11[4]; /* ROM0xD5480 */
    char label_tbl_12[4]; /* ROM0xD5484 */
};
const struct MenuStrings_D5428 ragewars_menu_strings_D5428_us_rev1 = {
    "YES",
    "NOVICE",
    "EASY",
    "NORMAL",
    "VETERAN",
    "EXPERT",
    "ARCADE",
    "WHEEL",
    "TAP",
    "MIXED",
    "CONTROLLER %d",
    "CTF",
    "TBL"
};
typedef char menu_strings_size_D5428[(sizeof(struct MenuStrings_D5428) == 96) ? 1 : -1];
