/* Resident player, weapon, pickup and menu labels. String slots include
 * their NUL terminator and original word alignment padding. */
struct MenuStrings_F820C {
    char label_m_airbehaviorr_0[16]; /* ROM0xF820C */
};
const struct MenuStrings_F820C ragewars_resident_strings_F820C_us_rev1 = {
    "\rm_AirBehaviorR"
};
typedef char menu_strings_size_F820C[(sizeof(struct MenuStrings_F820C) == 16) ? 1 : -1];
