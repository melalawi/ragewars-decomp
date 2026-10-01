extern void func_8020FDB0(void *a, int b);

typedef struct func_80210018_S1 func_80210018_S1;
struct func_80210018_S1 {
    char pad0[0x18];
    int unk18;
};

int func_80210018(void *arg0) {
    func_8020FDB0(arg0, ((func_80210018_S1 *)(*(void **)arg0))->unk18 + 0x8C);
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E0C_4 = 127.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C8FB0_8 = 4294967296.0;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3D2C_4 = 512.0f;
const float unbake_rodata_800C3D30_4 = 0.00787401572f;
const float unbake_rodata_800C3D34_4 = (-0.000904977438f);
const float unbake_rodata_800C3D38_4 = (-1.0f);
const float unbake_rodata_800C3D3C_4 = 56.0f;
const float unbake_rodata_800C3D40_4 = 128.0f;
const float unbake_rodata_800C3D44_4 = 0.00392156886f;
const float unbake_rodata_800C3D48_4 = 1.0f;
const float unbake_rodata_800C3D4C_4 = 0.150000006f;
const float unbake_rodata_800C3D50_4 = 0.150000006f;
const float unbake_rodata_800C3D54_4 = 0.150000006f;
const float unbake_rodata_800C3D58_4 = (-0.150000006f);
const float unbake_rodata_800C3D5C_4 = 0.899999976f;
const float unbake_rodata_800C3D60_4 = 0.00300000003f;
const float unbake_rodata_800C3D64_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C3D10_2C[] = {0x43, 0x47, 0x61, 0x6D, 0x65, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x49, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x5F, 0x5F, 0x44, 0x72, 0x61, 0x77, 0x3A, 0x20, 0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_DE)
const double unbake_rodata_800C3EB0_8 = 4294967296.0;
const float unbake_rodata_800C3EB8_4 = 0.0166666675f;
#endif
