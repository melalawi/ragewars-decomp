/* Gameplay kill, flag and confirmation text-pointer slots.
 * resident_menu_pak_options passes D_800D3A58 slot addresses
 * to 80442064, which dereferences the text pointer before drawing.
 * Targets are retained character members of the label producer. */
struct MenuStrings_D639C;
extern const struct MenuStrings_D639C ragewars_menu_strings_D639C_us_rev1;

char *ragewars_confirmation_label_slots_us_rev1[10] = {
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 0,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 12,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 24,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 36,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 48,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 68,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 92,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 116,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 132,
    (char *)&ragewars_menu_strings_D639C_us_rev1 + 144,
};
