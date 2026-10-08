/* First-person weapon view offset. func_8022F5E0_de copies the
 * three floats at descriptor offset 0x38, mirrors selected axes, then
 * scales this vector by -10.24 before composing the view matrix.
 * The enclosing weapon descriptor is D_800CBE6C. */
struct WeaponViewOffset { float x; float y; float z; };
struct WeaponViewOffset ragewars_weapon_view_offset_D10CC_us_rev1 = {6.0f, 7.0f, 10.0f};
