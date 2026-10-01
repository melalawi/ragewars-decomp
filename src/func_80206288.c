extern void func_80285D80(void *a, void *b, int c);
extern char D_8011FE88;

void func_80206288(void *arg0) {
    func_80285D80(&D_8011FE88, arg0, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C24CC_4 = 204.799988f;
const float unbake_rodata_800C24D0_4 = 0.5f;
const float unbake_rodata_800C24D4_4 = 1.0f;
const float unbake_rodata_800C24D8_4 = 614.399963f;
const float unbake_rodata_800C24DC_4 = 0.5f;
const float unbake_rodata_800C24E0_4 = 1.0f;
const float unbake_rodata_800C24E4_4 = 70.0f;
const float unbake_rodata_800C24E8_4 = 20.0f;
const float unbake_rodata_800C24EC_4 = 0.5f;
const float unbake_rodata_800C24F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7494_4 = 0.999998987f;
const float unbake_rodata_800C7498_4 = (-0.999998987f);
const float unbake_rodata_800C749C_4 = 1.0f;
const float unbake_rodata_800C74A0_4 = 1.53600001f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C25E8_20[] = {0x0021B730U, 0x0021B73CU, 0x0021B748U, 0x0021B754U, 0x0021B760U, 0x0021B76CU, 0x0021B778U, 0x0021B784U};
const float unbake_rodata_800C2608_4 = 10.2399998f;
const float unbake_rodata_800C260C_4 = 81.9199982f;
const float unbake_rodata_800C2610_4 = 512.0f;
const float unbake_rodata_800C2614_4 = 5.11999989f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2620_4 = 9999999.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C23B4_4 = 0.0800000057f;
const float unbake_rodata_800C23B8_4 = 0.519999981f;
const float unbake_rodata_800C23BC_4 = (-5120.0f);
const float unbake_rodata_800C23C0_4 = (-1024.0f);
const float unbake_rodata_800C23C4_4 = 11.25f;
const float unbake_rodata_800C23C8_4 = 20.4799995f;
const float unbake_rodata_800C23CC_4 = 1.25f;
const float unbake_rodata_800C23D0_4 = 0.75f;
#endif
