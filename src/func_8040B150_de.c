#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0F88 for states 0 to 15, and D_800D783C for any other state. Returns zero. */


extern u32 D_8014D4F8;
extern void *jtbl_800DCF58[];
extern char D_800D3810[];
extern char D_800D3824[];
extern char D_800D3838[];
extern char D_800D384C[];
extern char D_800D3860[];
extern char D_800D3874[];
extern char D_800D3888[];
extern char D_800D389C[];
extern char D_800D38B0[];
extern char D_800D38C4[];
extern char D_800D38D8[];
extern char D_800D38EC[];
extern char D_800D3900[];
extern char D_800D3914[];
extern char D_800D3928[];
extern char D_800D393C[];

s32 func_8040B150_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_8014D4F8;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCF58[state];
state_other:
    field->text = D_800D3810;
    goto done;
case_1:
    field->text = D_800D3824;
    goto done;
case_2:
    field->text = D_800D3838;
    goto done;
case_3:
    field->text = D_800D3860;
    goto done;
case_4:
    field->text = D_800D384C;
    goto done;
case_5:
    field->text = D_800D3874;
    goto done;
case_6:
    field->text = D_800D3888;
    goto done;
case_7:
    field->text = D_800D389C;
    goto done;
case_8:
    field->text = D_800D38B0;
    goto done;
case_9:
    field->text = D_800D38C4;
    goto done;
case_10:
    field->text = D_800D38D8;
    goto done;
case_11:
    field->text = D_800D38EC;
    goto done;
case_12:
    field->text = D_800D3900;
    goto done;
case_13:
    field->text = D_800D3914;
    goto done;
case_14:
    field->text = D_800D3928;
    goto done;
case_15:
    field->text = D_800D393C;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBC08_40[] = {0x0040B1F8U, 0x0040B208U, 0x0040B218U, 0x0040B228U, 0x0040B238U, 0x0040B248U, 0x0040B258U, 0x0040B268U, 0x0040B278U, 0x0040B288U, 0x0040B298U, 0x0040B2A8U, 0x0040B2B8U, 0x0040B2C8U, 0x0040B2D8U, 0x0040B2E8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0F88_40[] = {0x0040B1F8U, 0x0040B208U, 0x0040B218U, 0x0040B228U, 0x0040B238U, 0x0040B248U, 0x0040B258U, 0x0040B268U, 0x0040B278U, 0x0040B288U, 0x0040B298U, 0x0040B2A8U, 0x0040B2B8U, 0x0040B2C8U, 0x0040B2D8U, 0x0040B2E8U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED5D8_40[] = {0x0040B5A8U, 0x0040B5B8U, 0x0040B5C8U, 0x0040B5D8U, 0x0040B5E8U, 0x0040B5F8U, 0x0040B608U, 0x0040B618U, 0x0040B628U, 0x0040B638U, 0x0040B648U, 0x0040B658U, 0x0040B668U, 0x0040B678U, 0x0040B688U, 0x0040B698U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8798_40[] = {0x0040B5A8U, 0x0040B5B8U, 0x0040B5C8U, 0x0040B5D8U, 0x0040B5E8U, 0x0040B5F8U, 0x0040B608U, 0x0040B618U, 0x0040B628U, 0x0040B638U, 0x0040B648U, 0x0040B658U, 0x0040B668U, 0x0040B678U, 0x0040B688U, 0x0040B698U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCF58_40[] = {0x0040B178U, 0x0040B188U, 0x0040B198U, 0x0040B1A8U, 0x0040B1B8U, 0x0040B1C8U, 0x0040B1D8U, 0x0040B1E8U, 0x0040B1F8U, 0x0040B208U, 0x0040B218U, 0x0040B228U, 0x0040B238U, 0x0040B248U, 0x0040B258U, 0x0040B268U};
#endif
