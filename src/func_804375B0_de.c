#include "common/types.h"
#include "span_16E000/code_80436D48.h"
#include "types.h"
/* Handles menu selection and updates the active menu state. */

#if defined(VERSION_DE)
#define VALUE_13A 0x138
#elif defined(VERSION_EU_X)
#define VALUE_13A 0x13E
#else
#define VALUE_13A 0x13A
#endif


extern func_8029A838_S1 *D_800E1730; extern u8 D_800FEB0F, D_800FEB7E, D_80142358; void func_8029973C_de(void); s32 func_80299A08_de(void); s32 func_80265650_de(void *,s32); void func_8041A430_de(s32,s32);
s32 func_804375B0_de(void) {
    s32 temp_v0;
    s32 var_v0;

    func_8029973C_de();
    temp_v0 = func_80299A08_de();
    switch (temp_v0) {                              /* irregular */
    case VALUE_13A + 2:
        D_800E1730->unk10 = -1;
        break;
    case VALUE_13A + 1:
        if (func_80265650_de(&D_800FEB7E, 0) == 0) {
            D_800E1730->unk10 = 7;
        } else {
            D_800E1730->unk10 = 0x1E;
        }
        break;
    case VALUE_13A:
        D_80142358 = D_800FEB0F;
        D_800E1730->unk10 = 0xA;
        break;
    }
    func_8041A430_de(D_800E1730->unk0, 2);
    return 0;
}
