#include "basetypes.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0EC8 for states 0 to 15, and D_800D7830 for any other state. Returns zero. */
struct Field {
    char pad[0x14];
    char *text;
};

extern u32 D_80153788;
extern void *jtbl_800E0EC8[];
extern char D_800D7830[];
extern char D_800D7844[];
extern char D_800D7858[];
extern char D_800D786C[];
extern char D_800D7880[];
extern char D_800D7894[];
extern char D_800D78A8[];
extern char D_800D78BC[];
extern char D_800D78D0[];
extern char D_800D78E4[];
extern char D_800D78F8[];
extern char D_800D790C[];
extern char D_800D7920[];
extern char D_800D7934[];
extern char D_800D7948[];
extern char D_800D795C[];

s32 func_8040AE4C(struct Field *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_80153788;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800E0EC8[state];
state_other:
    field->text = D_800D7830;
    goto done;
case_1:
    field->text = D_800D7844;
    goto done;
case_2:
    field->text = D_800D7858;
    goto done;
case_3:
    field->text = D_800D7880;
    goto done;
case_4:
    field->text = D_800D786C;
    goto done;
case_5:
    field->text = D_800D7894;
    goto done;
case_6:
    field->text = D_800D78A8;
    goto done;
case_7:
    field->text = D_800D78BC;
    goto done;
case_8:
    field->text = D_800D78D0;
    goto done;
case_9:
    field->text = D_800D78E4;
    goto done;
case_10:
    field->text = D_800D78F8;
    goto done;
case_11:
    field->text = D_800D790C;
    goto done;
case_12:
    field->text = D_800D7920;
    goto done;
case_13:
    field->text = D_800D7934;
    goto done;
case_14:
    field->text = D_800D7948;
    goto done;
case_15:
    field->text = D_800D795C;
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
