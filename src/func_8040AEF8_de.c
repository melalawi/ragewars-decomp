#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0F08 for states 0 to 15, and D_800D7834 for any other state. Returns zero. */


extern u32 D_8014D4F8;
extern void *jtbl_800DCED8[];
extern char D_800D3808[];
extern char D_800D381C[];
extern char D_800D3830[];
extern char D_800D3844[];
extern char D_800D3858[];
extern char D_800D386C[];
extern char D_800D3880[];
extern char D_800D3894[];
extern char D_800D38A8[];
extern char D_800D38BC[];
extern char D_800D38D0[];
extern char D_800D38E4[];
extern char D_800D38F8[];
extern char D_800D390C[];
extern char D_800D3920[];
extern char D_800D3934[];

s32 func_8040AEF8_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_8014D4F8;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCED8[state];
state_other:
    field->text = D_800D3808;
    goto done;
case_1:
    field->text = D_800D381C;
    goto done;
case_2:
    field->text = D_800D3830;
    goto done;
case_3:
    field->text = D_800D3858;
    goto done;
case_4:
    field->text = D_800D3844;
    goto done;
case_5:
    field->text = D_800D386C;
    goto done;
case_6:
    field->text = D_800D3880;
    goto done;
case_7:
    field->text = D_800D3894;
    goto done;
case_8:
    field->text = D_800D38A8;
    goto done;
case_9:
    field->text = D_800D38BC;
    goto done;
case_10:
    field->text = D_800D38D0;
    goto done;
case_11:
    field->text = D_800D38E4;
    goto done;
case_12:
    field->text = D_800D38F8;
    goto done;
case_13:
    field->text = D_800D390C;
    goto done;
case_14:
    field->text = D_800D3920;
    goto done;
case_15:
    field->text = D_800D3934;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBB88_40[] = {0x0040AFA0U, 0x0040AFB0U, 0x0040AFC0U, 0x0040AFD0U, 0x0040AFE0U, 0x0040AFF0U, 0x0040B000U, 0x0040B010U, 0x0040B020U, 0x0040B030U, 0x0040B040U, 0x0040B050U, 0x0040B060U, 0x0040B070U, 0x0040B080U, 0x0040B090U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0F08_40[] = {0x0040AFA0U, 0x0040AFB0U, 0x0040AFC0U, 0x0040AFD0U, 0x0040AFE0U, 0x0040AFF0U, 0x0040B000U, 0x0040B010U, 0x0040B020U, 0x0040B030U, 0x0040B040U, 0x0040B050U, 0x0040B060U, 0x0040B070U, 0x0040B080U, 0x0040B090U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED558_40[] = {0x0040B350U, 0x0040B360U, 0x0040B370U, 0x0040B380U, 0x0040B390U, 0x0040B3A0U, 0x0040B3B0U, 0x0040B3C0U, 0x0040B3D0U, 0x0040B3E0U, 0x0040B3F0U, 0x0040B400U, 0x0040B410U, 0x0040B420U, 0x0040B430U, 0x0040B440U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8718_40[] = {0x0040B350U, 0x0040B360U, 0x0040B370U, 0x0040B380U, 0x0040B390U, 0x0040B3A0U, 0x0040B3B0U, 0x0040B3C0U, 0x0040B3D0U, 0x0040B3E0U, 0x0040B3F0U, 0x0040B400U, 0x0040B410U, 0x0040B420U, 0x0040B430U, 0x0040B440U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCED8_40[] = {0x0040AF20U, 0x0040AF30U, 0x0040AF40U, 0x0040AF50U, 0x0040AF60U, 0x0040AF70U, 0x0040AF80U, 0x0040AF90U, 0x0040AFA0U, 0x0040AFB0U, 0x0040AFC0U, 0x0040AFD0U, 0x0040AFE0U, 0x0040AFF0U, 0x0040B000U, 0x0040B010U};
#endif
