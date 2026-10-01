extern char D_800CD4C4;
extern char D_2043E0;

typedef struct func_80204468_S1 func_80204468_S1;
typedef struct func_80204468_S2 func_80204468_S2;
typedef struct func_80204468_S3 func_80204468_S3;
struct func_80204468_S1 {
    char pad0[0x2C];
    void* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void* unk108;
    char pad108[0x124 - 0x108 - sizeof(void*)];
    int unk124;
    char pad124[0x128 - 0x124 - sizeof(int)];
    int unk128;
    char pad128[0x12C - 0x128 - sizeof(int)];
    int unk12C;
};
struct func_80204468_S2 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    int unk100;
};
struct func_80204468_S3 {
    char pad0[0x14];
    int unk14;
};

void func_80204468(void *arg0, void *arg1) {
    ((func_80204468_S1 *)(arg1))->unk2C = &D_800CD4C4;
    ((func_80204468_S1 *)(arg1))->unk108 = &D_2043E0;
    ((func_80204468_S1 *)(arg1))->unk124 = 0;
    ((func_80204468_S1 *)(arg1))->unk128 = 0;
    ((func_80204468_S1 *)(arg1))->unk12C = 0;
    if (((func_80204468_S3 *)((((func_80204468_S2 *)(arg0))->unk18)))->unk14 & 1) {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 | 0x10000;
        return;
    }
    ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 & 0xFFFEFFFF;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1C7C_4 = (-1.0f);
const float unbake_rodata_800C1C80_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6D64_4 = 0.899999976f;
const float unbake_rodata_800C6D68_4 = 0.699999988f;
const float unbake_rodata_800C6D6C_4 = (-90.0f);
const float unbake_rodata_800C6D70_4 = 90.0f;
const float unbake_rodata_800C6D74_4 = 57.2957764f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1EC4_4 = 3.14159298f;
const float unbake_rodata_800C1EC8_4 = 6.28318596f;
const float unbake_rodata_800C1ECC_4 = (-3.14159298f);
const float unbake_rodata_800C1ED0_4 = 6.28318596f;
const float unbake_rodata_800C1ED4_4 = (-1.0f);
const float unbake_rodata_800C1ED8_4 = 1.0f;
const float unbake_rodata_800C1EDC_4 = 0.0174532942f;
const float unbake_rodata_800C1EE0_4 = 1.0471977f;
const float unbake_rodata_800C1EE4_4 = 1.0471977f;
const float unbake_rodata_800C1EE8_4 = 0.52359885f;
const float unbake_rodata_800C1EEC_4 = 0.52359885f;
const float unbake_rodata_800C1EF0_4 = 0.5f;
const float unbake_rodata_800C1EF4_4 = 0.17453295f;
const float unbake_rodata_800C1EF8_4 = 0.17453295f;
const float unbake_rodata_800C1EFC_4 = 0.25f;
const float unbake_rodata_800C1F00_4 = 0.069813177f;
const float unbake_rodata_800C1F04_4 = 0.069813177f;
const float unbake_rodata_800C1F08_4 = 0.125f;
const float unbake_rodata_800C1F0C_4 = 0.100000001f;
const float unbake_rodata_800C1F10_4 = 0.0174532942f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F04_4 = 3.14159298f;
const float unbake_rodata_800C1F08_4 = 6.28318596f;
const float unbake_rodata_800C1F0C_4 = (-3.14159298f);
const float unbake_rodata_800C1F10_4 = 6.28318596f;
const float unbake_rodata_800C1F14_4 = (-1.0f);
const float unbake_rodata_800C1F18_4 = 1.0f;
const float unbake_rodata_800C1F1C_4 = 0.0174532942f;
const float unbake_rodata_800C1F20_4 = 1.0471977f;
const float unbake_rodata_800C1F24_4 = 1.0471977f;
const float unbake_rodata_800C1F28_4 = 0.52359885f;
const float unbake_rodata_800C1F2C_4 = 0.52359885f;
const float unbake_rodata_800C1F30_4 = 0.5f;
const float unbake_rodata_800C1F34_4 = 0.17453295f;
const float unbake_rodata_800C1F38_4 = 0.17453295f;
const float unbake_rodata_800C1F3C_4 = 0.25f;
const float unbake_rodata_800C1F40_4 = 0.069813177f;
const float unbake_rodata_800C1F44_4 = 0.069813177f;
const float unbake_rodata_800C1F48_4 = 0.125f;
const float unbake_rodata_800C1F4C_4 = 0.100000001f;
const float unbake_rodata_800C1F50_4 = 0.0174532942f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1C24_4 = 3.14159298f;
const float unbake_rodata_800C1C28_4 = 6.28318596f;
const float unbake_rodata_800C1C2C_4 = (-3.14159298f);
const float unbake_rodata_800C1C30_4 = 6.28318596f;
const float unbake_rodata_800C1C34_4 = (-1.0f);
const float unbake_rodata_800C1C38_4 = 1.0f;
const float unbake_rodata_800C1C3C_4 = 0.0174532942f;
const float unbake_rodata_800C1C40_4 = 1.0471977f;
const float unbake_rodata_800C1C44_4 = 1.0471977f;
const float unbake_rodata_800C1C48_4 = 0.52359885f;
const float unbake_rodata_800C1C4C_4 = 0.52359885f;
const float unbake_rodata_800C1C50_4 = 0.5f;
const float unbake_rodata_800C1C54_4 = 0.17453295f;
const float unbake_rodata_800C1C58_4 = 0.17453295f;
const float unbake_rodata_800C1C5C_4 = 0.25f;
const float unbake_rodata_800C1C60_4 = 0.069813177f;
const float unbake_rodata_800C1C64_4 = 0.069813177f;
const float unbake_rodata_800C1C68_4 = 0.125f;
const float unbake_rodata_800C1C6C_4 = 0.100000001f;
const float unbake_rodata_800C1C70_4 = 0.0174532942f;
#endif
