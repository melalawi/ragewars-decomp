/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F80DC {
    char label_emyintelligence_t_0[20]; /* ROM0xF80DC */
};
const struct MenuStrings_F80DC ragewars_resident_strings_F80DC_us_rev1 = {
    "emyIntelligence_t"
};
typedef char menu_strings_size_F80DC[(sizeof(struct MenuStrings_F80DC) == 20) ? 1 : -1];
