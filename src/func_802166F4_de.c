#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "types.h"
/* Picks a random entry from a table of mask and id records ending in -1: every id whose mask shares
   a bit with flags and that func_80246A08_de finds for the owner is added to a weighted picker with
   weight 10, a zero mask ends the search once something was added, the first id is added when the
   picker is still empty, and the pick is returned when func_80246A08_de finds it, otherwise the first
   id. */





extern void func_8027985C_de(Picker *);
extern void func_80279864_de(Picker *, s32, s32);
extern s16 func_802798A8_de(Picker *);
extern s32 func_80246A08_de(s32, s32, s32);

s32 func_802166F4_de(s32 owner, s32 unused, struct Shape_func_802764D4_de_2 *table, s32 flags) {
    Picker picker;
    s32 first;
    s16 pick;

    func_8027985C_de(&picker);
    first = table->field_4;
    while (table->field_0 != -1) {
        if (table->field_0 == 0 && picker.count != 0) {
            goto choose;
        }
        if ((flags & table->field_0) && func_80246A08_de(owner, table->field_4, -1) != -1) {
            func_80279864_de(&picker, (s16) table->field_4, 10);
        }
        table++;
    }
    if (picker.count == 0) {
        func_80279864_de(&picker, (s16) first, 10);
    }
choose:
    pick = func_802798A8_de(&picker);
    if (func_80246A08_de(owner, pick, -1) == -1) {
        return first;
    }
    return pick;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C45D0_4 = 80.0f;
const float unbake_rodata_800C45D4_4 = 160.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9790_4 = 80.0f;
const float unbake_rodata_800C9794_4 = 160.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C44A8_4 = 1.0f;
const float unbake_rodata_800C44AC_4 = 1.0f;
const double unbake_rodata_800C44B0_8 = 4294967296.0;
const double unbake_rodata_800C44B8_8 = 4294967296.0;
const double unbake_rodata_800C44C0_8 = 4294967296.0;
const double unbake_rodata_800C44C8_8 = 4294967296.0;
const double unbake_rodata_800C44D0_8 = 4294967296.0;
const float unbake_rodata_800C44D8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C44AC_4 = 9.58767268e-05f;
const float unbake_rodata_800C44B0_4 = 0.0666666701f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C44A0_A8[] = {0x00268D14U, 0x00268D34U, 0x00268D54U, 0x00268D74U, 0x00268D94U, 0x00268DB4U, 0x00268DD4U, 0x00268DF4U, 0x00268E14U, 0x00268E34U, 0x00268E54U, 0x00268E64U, 0x00268E84U, 0x00268EA4U, 0x00268ED4U, 0x00268EF4U, 0x00268F14U, 0x00268F24U, 0x00268F44U, 0x00268F64U, 0x00268F8CU, 0x00268FACU, 0x00268FCCU, 0x00268FECU, 0x0026900CU, 0x0026902CU, 0x0026904CU, 0x0026906CU, 0x00269084U, 0x002690A4U, 0x002690B4U, 0x002690E4U, 0x00269104U, 0x00269124U, 0x0026914CU, 0x00269164U, 0x00269184U, 0x002691A4U, 0x002691C4U, 0x002691E4U, 0x00269204U, 0x00269224U};
#endif
