/* Pak note actions, difficulty, statistics and note-list text slots.
 * resident_menu_pak_options consumes D_800D77CC and neighboring slots
 * through 80442064, which dereferences the text-pointer field.
 * Targets are real string members of the retained label producer. */
struct MenuStrings_D5FC0;
extern const struct MenuStrings_D5FC0 ragewars_menu_strings_D5FC0_us_rev1;

char *ragewars_pak_note_label_slots_us_rev1[22] = {
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 0,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 12,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 24,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 44,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 64,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 84,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 104,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 124,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 140,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 152,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 164,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 176,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 200,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 224,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 244,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 264,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 284,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 304,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 312,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 320,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 328,
    (char *)&ragewars_menu_strings_D5FC0_us_rev1 + 336,
};
