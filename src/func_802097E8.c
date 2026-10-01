extern void func_80208000(void);
void func_802097E8(int *arg0, int arg1) {
    *arg0 = arg1;
    func_80208000();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C31E8_4 = 1.0f;
const float unbake_rodata_800C31EC_4 = 0.25f;
const float unbake_rodata_800C31F0_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C8290_8 = 4294967296.0;
const double unbake_rodata_800C8298_8 = 4294967296.0;
const double unbake_rodata_800C82A0_8 = 4294967296.0;
const double unbake_rodata_800C82A8_8 = 4294967296.0;
const double unbake_rodata_800C82B0_8 = 4294967296.0;
const double unbake_rodata_800C82B8_8 = 4294967296.0;
const float unbake_rodata_800C82C0_4 = 995.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3268_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C32A0_4 = 1.0f;
const float unbake_rodata_800C32A4_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C31A0_8 = 4294967296.0;
const double unbake_rodata_800C31A8_8 = 4294967296.0;
const double unbake_rodata_800C31B0_8 = 4294967296.0;
const double unbake_rodata_800C31B8_8 = 4294967296.0;
const double unbake_rodata_800C31C0_8 = 4294967296.0;
const double unbake_rodata_800C31C8_8 = 4294967296.0;
const float unbake_rodata_800C31D0_4 = 995.0f;
#endif
