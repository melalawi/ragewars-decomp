extern void func_8020FDB0(void *a, int b);

typedef struct func_80210068_S1 func_80210068_S1;
struct func_80210068_S1 {
    char pad0[0x18];
    int unk18;
};

int func_80210068(void *arg0) {
    func_8020FDB0(arg0, ((func_80210068_S1 *)(*(void **)arg0))->unk18 + 0xCC);
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E68_4 = 3072.0f;
const float unbake_rodata_800C3E6C_4 = 0.5f;
const float unbake_rodata_800C3E70_4 = 0.25f;
const float unbake_rodata_800C3E74_4 = 0.5f;
const float unbake_rodata_800C3E78_4 = 1.0f;
const float unbake_rodata_800C3E7C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8FC8_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3D90_4 = 3.40282347e+38f;
const float unbake_rodata_800C3D94_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3DA8_4 = 0.100000001f;
const float unbake_rodata_800C3DAC_4 = 0.5f;
const float unbake_rodata_800C3DB0_4 = 15.3599997f;
const float unbake_rodata_800C3DB4_4 = 0.699999988f;
const float unbake_rodata_800C3DB8_4 = 1.22070312f;
const float unbake_rodata_800C3DBC_4 = 200.0f;
const float unbake_rodata_800C3DC0_4 = 255.0f;
const float unbake_rodata_800C3DC4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3DC8_4 = 0.5f;
const float unbake_rodata_800C3DCC_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3ED0_4 = 0.00392156886f;
const float unbake_rodata_800C3ED4_4 = 1.0f;
#endif
