extern void func_80225B74(void *a, void *b, int c);
void func_8022D618(void *a, void *b) { func_80225B74(a, b, 0x32); }

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C90B0_4 = 4.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CE3CC_4 = 0.25f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C83E0_3[] = {0x45, 0x58, 0x00};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C8BD0_44[] = {0x002B4E4CU, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4E74U, 0x002B4C20U, 0x002B4C20U, 0x002B4AF4U, 0x002B4DCCU, 0x002B4E14U, 0x002B4C20U};
#elif defined(VERSION_DE)
const double unbake_rodata_800C8120_8 = 4294967296.0;
const double unbake_rodata_800C8128_8 = 65536.0;
#endif
