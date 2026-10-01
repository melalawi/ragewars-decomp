typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

extern void func_80271FD8(Vector3 *arg0, Vector3 *arg1, Vector3 *arg2);
extern void func_80272088(Vector3 *out, Vector3 *a, Vector3 *b);
extern void func_802720EC(Vector3 *out);

typedef struct func_80240C9C_S1 func_80240C9C_S1;
struct func_80240C9C_S1 {
    char pad0[0x18];
    Vector3 unk18;
    char pad18[0x24 - 0x18 - sizeof(Vector3)];
    Vector3 unk24;
    char pad24[0x30 - 0x24 - sizeof(Vector3)];
    Vector3 unk30;
    char pad30[0x48 - 0x30 - sizeof(Vector3)];
    Vector3 unk48;
};

void func_80240C9C(void *arg0) {
    Vector3 sp10;
    Vector3 sp20;
    Vector3 *temp_s1;
    Vector3 *temp_s0;

    temp_s1 = &((func_80240C9C_S1 *)(arg0))->unk24;
    func_80271FD8(&sp10, temp_s1, &((func_80240C9C_S1 *)(arg0))->unk18);
    func_80271FD8(&sp20, &((func_80240C9C_S1 *)(arg0))->unk30, temp_s1);
    temp_s0 = &((func_80240C9C_S1 *)(arg0))->unk48;
    func_80272088(temp_s0, &sp20, &sp10);
    func_802720EC(temp_s0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCC60_1C[] = {0x0043A824U, 0x0043A8ACU, 0x0043A914U, 0x0043A924U, 0x0043A9A0U, 0x0043AA4CU, 0x0043AA4CU};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1E98_4 = 0.00499999989f;
const float unbake_rodata_800E1E9C_4 = 100.0f;
const float unbake_rodata_800E1EA0_4 = 150.0f;
const float unbake_rodata_800E1EA4_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E45D4_4[] = {0x80, 0x0E, 0x0A, 0xD0};
const unsigned char unbake_rodata_800E45D8_18[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x20, 0x62, 0x6F, 0x73, 0x73, 0x20, 0x61, 0x63, 0x74, 0x69, 0x76};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DF2D8_C[] = {0x80, 0x0D, 0x2D, 0x00, 0x80, 0x0D, 0x85, 0xD0, 0x80, 0x0D, 0xC4, 0x28};
const unsigned char unbake_rodata_800DF2E4_C[] = {0x80, 0x0D, 0x2D, 0x18, 0x80, 0x0D, 0x85, 0xEC, 0x80, 0x0D, 0xC4, 0x40};
const unsigned char unbake_rodata_800DF2F0_C[] = {0x80, 0x0D, 0x2D, 0x30, 0x80, 0x0D, 0x86, 0x08, 0x80, 0x0D, 0xC4, 0x58};
const unsigned char unbake_rodata_800DF2FC_C[] = {0x80, 0x0D, 0x2D, 0x48, 0x80, 0x0D, 0x86, 0x24, 0x80, 0x0D, 0xC4, 0x70};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DD460_12[] = {0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
const unsigned char unbake_rodata_800DD474_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
#endif
