extern void func_8020FDB0(void *a, int b);

typedef struct func_80210040_S1 func_80210040_S1;
struct func_80210040_S1 {
    char pad0[0x18];
    int unk18;
};

int func_80210040(void *arg0) {
    func_8020FDB0(arg0, ((func_80210040_S1 *)(*(void **)arg0))->unk18 + 0xAC);
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E50_4 = 1.0f;
const float unbake_rodata_800C3E54_4 = 0.800000012f;
const float unbake_rodata_800C3E58_4 = 0.00999999978f;
const float unbake_rodata_800C3E5C_4 = 1.0f;
const float unbake_rodata_800C3E60_4 = 1.0f;
const float unbake_rodata_800C3E64_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8FC0_4 = 0.00392156886f;
const float unbake_rodata_800C8FC4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3D68_4 = 0.100000001f;
const float unbake_rodata_800C3D6C_4 = 0.5f;
const float unbake_rodata_800C3D70_4 = 15.3599997f;
const float unbake_rodata_800C3D74_4 = 0.699999988f;
const float unbake_rodata_800C3D78_4 = 1.22070312f;
const float unbake_rodata_800C3D7C_4 = 200.0f;
const float unbake_rodata_800C3D80_4 = 255.0f;
const float unbake_rodata_800C3D84_4 = 2.14748365e+09f;
const float unbake_rodata_800C3D88_4 = 0.5f;
const float unbake_rodata_800C3D8C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3D6C_4 = 512.0f;
const float unbake_rodata_800C3D70_4 = 0.00787401572f;
const float unbake_rodata_800C3D74_4 = (-0.000904977438f);
const float unbake_rodata_800C3D78_4 = (-1.0f);
const float unbake_rodata_800C3D7C_4 = 56.0f;
const float unbake_rodata_800C3D80_4 = 128.0f;
const float unbake_rodata_800C3D84_4 = 0.00392156886f;
const float unbake_rodata_800C3D88_4 = 1.0f;
const float unbake_rodata_800C3D8C_4 = 0.150000006f;
const float unbake_rodata_800C3D90_4 = 0.150000006f;
const float unbake_rodata_800C3D94_4 = 0.150000006f;
const float unbake_rodata_800C3D98_4 = (-0.150000006f);
const float unbake_rodata_800C3D9C_4 = 0.899999976f;
const float unbake_rodata_800C3DA0_4 = 0.00300000003f;
const float unbake_rodata_800C3DA4_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C3EC0_8 = 4294967296.0;
#endif
