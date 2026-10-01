#include "basetypes.h"

extern void *jtbl_800C80C8[];

/** Return whether the encoded type belongs to this caller's accepted set. */
s32 func_80232790(s32 arg0) {
    {
        static void *switch_labels[0] __attribute__((section(".sdata"))) = {
            &&case_2, &&case_7, &&case_8, &&case_9,
            &&case_13, &&case_14, &&case_15, &&case_default
        };
        arg0 -= 2;
        if ((unsigned int)arg0 >= 14) {
            goto case_default;
        }
        goto *jtbl_800C80C8[arg0];
    }
case_2:
case_7:
case_8:
case_9:
case_13:
case_14:
case_15:
    return 1;
case_default:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C2F08_38[] = {0x002327A4U, 0x002327ACU, 0x002327ACU, 0x002327ACU, 0x002327ACU, 0x002327A4U, 0x002327A4U, 0x002327A4U, 0x002327ACU, 0x002327ACU, 0x002327ACU, 0x002327A4U, 0x002327A4U, 0x002327A4U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C80C8_38[] = {0x002327B4U, 0x002327BCU, 0x002327BCU, 0x002327BCU, 0x002327BCU, 0x002327B4U, 0x002327B4U, 0x002327B4U, 0x002327BCU, 0x002327BCU, 0x002327BCU, 0x002327B4U, 0x002327B4U, 0x002327B4U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C3288_38[] = {0x00232758U, 0x00232760U, 0x00232760U, 0x00232760U, 0x00232760U, 0x00232758U, 0x00232758U, 0x00232758U, 0x00232760U, 0x00232760U, 0x00232760U, 0x00232758U, 0x00232758U, 0x00232758U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C32C8_38[] = {0x00232788U, 0x00232790U, 0x00232790U, 0x00232790U, 0x00232790U, 0x00232788U, 0x00232788U, 0x00232788U, 0x00232790U, 0x00232790U, 0x00232790U, 0x00232788U, 0x00232788U, 0x00232788U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C2FD8_38[] = {0x002327C4U, 0x002327CCU, 0x002327CCU, 0x002327CCU, 0x002327CCU, 0x002327C4U, 0x002327C4U, 0x002327C4U, 0x002327CCU, 0x002327CCU, 0x002327CCU, 0x002327C4U, 0x002327C4U, 0x002327C4U};
#endif
