/* Gameplay score, pause and inventory text-pointer slots.
 * resident_menu_inventory_settings passes D_800D76CC slot addresses
 * to 80442064, which dereferences the text pointer before drawing.
 * Targets are retained character members of the label producer. */
struct MenuStrings_D5DF8;
extern const struct MenuStrings_D5DF8 ragewars_menu_strings_D5DF8_us_rev1;

char *ragewars_inventory_label_slots_us_rev1[17] = {
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 0,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 8,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 20,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 32,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 44,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 68,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 92,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 112,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 120,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 132,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 148,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 168,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 180,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 188,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 196,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 204,
    (char *)&ragewars_menu_strings_D5DF8_us_rev1 + 212,
};
