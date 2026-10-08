/* Controller Pak game-title text pointers selected by the note scanner.
 * Targets are actual character members of the retained text producer. */
struct MenuStrings_D5EDC;
extern const struct MenuStrings_D5EDC ragewars_menu_strings_D5EDC_us_rev1;

char *ragewars_pak_game_title_slots_us_rev1[2] = {
    (char *)&ragewars_menu_strings_D5EDC_us_rev1 + 0,
    (char *)&ragewars_menu_strings_D5EDC_us_rev1 + 12,
};
