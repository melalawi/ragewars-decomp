int __cmpdi2(int ahi, unsigned alo, int bhi, unsigned blo) {
    if (ahi < bhi) {
        return 0;
    }
    if (bhi < ahi) {
        return 2;
    }
    if (alo < blo) {
        return 0;
    }
    if (blo < alo) {
        return 2;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C18F0_28[] = {0x00201650U, 0x002015B4U, 0x002015BCU, 0x002015E4U, 0x002015F0U, 0x002015FCU, 0x00201604U, 0x00201628U, 0x00201638U, 0x00201648U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6AB0_28[] = {0x00201650U, 0x002015B4U, 0x002015BCU, 0x002015E4U, 0x002015F0U, 0x002015FCU, 0x00201604U, 0x00201628U, 0x00201638U, 0x00201648U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C1C60_28[] = {0x00201650U, 0x002015B4U, 0x002015BCU, 0x002015E4U, 0x002015F0U, 0x002015FCU, 0x00201604U, 0x00201628U, 0x00201638U, 0x00201648U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C1CA0_28[] = {0x00201650U, 0x002015B4U, 0x002015BCU, 0x002015E4U, 0x002015F0U, 0x002015FCU, 0x00201604U, 0x00201628U, 0x00201638U, 0x00201648U};
#endif
