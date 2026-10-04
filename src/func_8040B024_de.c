#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0F48 for states 0 to 15, and D_800D7838 for any other state. Returns zero. */


extern u32 D_8014D4F8;
extern void *jtbl_800DCF18[];
extern char D_800D380C[];
extern char D_800D3820[];
extern char D_800D3834[];
extern char D_800D3848[];
extern char D_800D385C[];
extern char D_800D3870[];
extern char D_800D3884[];
extern char D_800D3898[];
extern char D_800D38AC[];
extern char D_800D38C0[];
extern char D_800D38D4[];
extern char D_800D38E8[];
extern char D_800D38FC[];
extern char D_800D3910[];
extern char D_800D3924[];
extern char D_800D3938[];

s32 func_8040B024_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_8014D4F8;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCF18[state];
state_other:
    field->text = D_800D380C;
    goto done;
case_1:
    field->text = D_800D3820;
    goto done;
case_2:
    field->text = D_800D3834;
    goto done;
case_3:
    field->text = D_800D385C;
    goto done;
case_4:
    field->text = D_800D3848;
    goto done;
case_5:
    field->text = D_800D3870;
    goto done;
case_6:
    field->text = D_800D3884;
    goto done;
case_7:
    field->text = D_800D3898;
    goto done;
case_8:
    field->text = D_800D38AC;
    goto done;
case_9:
    field->text = D_800D38C0;
    goto done;
case_10:
    field->text = D_800D38D4;
    goto done;
case_11:
    field->text = D_800D38E8;
    goto done;
case_12:
    field->text = D_800D38FC;
    goto done;
case_13:
    field->text = D_800D3910;
    goto done;
case_14:
    field->text = D_800D3924;
    goto done;
case_15:
    field->text = D_800D3938;
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DBBC8_40[] = {0x0040B0CCU, 0x0040B0DCU, 0x0040B0ECU, 0x0040B0FCU, 0x0040B10CU, 0x0040B11CU, 0x0040B12CU, 0x0040B13CU, 0x0040B14CU, 0x0040B15CU, 0x0040B16CU, 0x0040B17CU, 0x0040B18CU, 0x0040B19CU, 0x0040B1ACU, 0x0040B1BCU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E0F48_40[] = {0x0040B0CCU, 0x0040B0DCU, 0x0040B0ECU, 0x0040B0FCU, 0x0040B10CU, 0x0040B11CU, 0x0040B12CU, 0x0040B13CU, 0x0040B14CU, 0x0040B15CU, 0x0040B16CU, 0x0040B17CU, 0x0040B18CU, 0x0040B19CU, 0x0040B1ACU, 0x0040B1BCU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED598_40[] = {0x0040B47CU, 0x0040B48CU, 0x0040B49CU, 0x0040B4ACU, 0x0040B4BCU, 0x0040B4CCU, 0x0040B4DCU, 0x0040B4ECU, 0x0040B4FCU, 0x0040B50CU, 0x0040B51CU, 0x0040B52CU, 0x0040B53CU, 0x0040B54CU, 0x0040B55CU, 0x0040B56CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8758_40[] = {0x0040B47CU, 0x0040B48CU, 0x0040B49CU, 0x0040B4ACU, 0x0040B4BCU, 0x0040B4CCU, 0x0040B4DCU, 0x0040B4ECU, 0x0040B4FCU, 0x0040B50CU, 0x0040B51CU, 0x0040B52CU, 0x0040B53CU, 0x0040B54CU, 0x0040B55CU, 0x0040B56CU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCF18_40[] = {0x0040B04CU, 0x0040B05CU, 0x0040B06CU, 0x0040B07CU, 0x0040B08CU, 0x0040B09CU, 0x0040B0ACU, 0x0040B0BCU, 0x0040B0CCU, 0x0040B0DCU, 0x0040B0ECU, 0x0040B0FCU, 0x0040B10CU, 0x0040B11CU, 0x0040B12CU, 0x0040B13CU};
#endif
