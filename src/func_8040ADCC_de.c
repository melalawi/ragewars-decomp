#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0EC8 for states 0 to 15, and D_800D7830 for any other state. Returns zero. */


extern u32 D_8014D4F8;
extern void *jtbl_800DCE98_de[];
extern char D_800D3804[];
extern char D_800D3818[];
extern char D_800D382C[];
extern char D_800D3840[];
extern char D_800D3854[];
extern char D_800D3868[];
extern char D_800D387C[];
extern char D_800D3890[];
extern char D_800D38A4[];
extern char D_800D38B8[];
extern char D_800D38CC[];
extern char D_800D38E0[];
extern char D_800D38F4[];
extern char D_800D3908[];
extern char D_800D391C[];
extern char D_800D3930[];

s32 func_8040ADCC_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_8014D4F8;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCE98_de[state];
state_other:
    field->text = D_800D3804;
    goto done;
case_1:
    field->text = D_800D3818;
    goto done;
case_2:
    field->text = D_800D382C;
    goto done;
case_3:
    field->text = D_800D3854;
    goto done;
case_4:
    field->text = D_800D3840;
    goto done;
case_5:
    field->text = D_800D3868;
    goto done;
case_6:
    field->text = D_800D387C;
    goto done;
case_7:
    field->text = D_800D3890;
    goto done;
case_8:
    field->text = D_800D38A4;
    goto done;
case_9:
    field->text = D_800D38B8;
    goto done;
case_10:
    field->text = D_800D38CC;
    goto done;
case_11:
    field->text = D_800D38E0;
    goto done;
case_12:
    field->text = D_800D38F4;
    goto done;
case_13:
    field->text = D_800D3908;
    goto done;
case_14:
    field->text = D_800D391C;
    goto done;
case_15:
    field->text = D_800D3930;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBB48_40[] = {0x0040AE74U, 0x0040AE84U, 0x0040AE94U, 0x0040AEA4U, 0x0040AEB4U, 0x0040AEC4U, 0x0040AED4U, 0x0040AEE4U, 0x0040AEF4U, 0x0040AF04U, 0x0040AF14U, 0x0040AF24U, 0x0040AF34U, 0x0040AF44U, 0x0040AF54U, 0x0040AF64U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0EC8_40[] = {0x0040AE74U, 0x0040AE84U, 0x0040AE94U, 0x0040AEA4U, 0x0040AEB4U, 0x0040AEC4U, 0x0040AED4U, 0x0040AEE4U, 0x0040AEF4U, 0x0040AF04U, 0x0040AF14U, 0x0040AF24U, 0x0040AF34U, 0x0040AF44U, 0x0040AF54U, 0x0040AF64U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED518_40[] = {0x0040B224U, 0x0040B234U, 0x0040B244U, 0x0040B254U, 0x0040B264U, 0x0040B274U, 0x0040B284U, 0x0040B294U, 0x0040B2A4U, 0x0040B2B4U, 0x0040B2C4U, 0x0040B2D4U, 0x0040B2E4U, 0x0040B2F4U, 0x0040B304U, 0x0040B314U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E86D8_40[] = {0x0040B224U, 0x0040B234U, 0x0040B244U, 0x0040B254U, 0x0040B264U, 0x0040B274U, 0x0040B284U, 0x0040B294U, 0x0040B2A4U, 0x0040B2B4U, 0x0040B2C4U, 0x0040B2D4U, 0x0040B2E4U, 0x0040B2F4U, 0x0040B304U, 0x0040B314U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCE98_40[] = {0x0040ADF4U, 0x0040AE04U, 0x0040AE14U, 0x0040AE24U, 0x0040AE34U, 0x0040AE44U, 0x0040AE54U, 0x0040AE64U, 0x0040AE74U, 0x0040AE84U, 0x0040AE94U, 0x0040AEA4U, 0x0040AEB4U, 0x0040AEC4U, 0x0040AED4U, 0x0040AEE4U};
#endif
