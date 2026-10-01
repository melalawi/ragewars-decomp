typedef struct func_8023CB50_S1 func_8023CB50_S1;
typedef struct func_8023CB50_S2 func_8023CB50_S2;
struct func_8023CB50_S1 {
    char pad0[0x4];
    void* unk4;
};
struct func_8023CB50_S2 {
    char pad0[0x4];
    void* unk4;
};

void func_8023CB50(void *arg0, void *arg1) {
    void *temp_v0;

    *(void **)arg1 = 0;
    ((func_8023CB50_S1 *)(arg1))->unk4 = ((func_8023CB50_S2 *)(arg0))->unk4;
    temp_v0 = ((func_8023CB50_S2 *)(arg0))->unk4;
    if (temp_v0 != 0) {
        *(void **)temp_v0 = arg1;
    }
    ((func_8023CB50_S2 *)(arg0))->unk4 = arg1;
    if (*(void **)arg0 == 0) {
        *(void **)arg0 = arg1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC4F8_E4[] = {0x004255E4U, 0x004255F4U, 0x00425844U, 0x0042562CU, 0x0042563CU, 0x0042564CU, 0x0042565CU, 0x0042566CU, 0x0042567CU, 0x0042568CU, 0x0042569CU, 0x004256ACU, 0x004256BCU, 0x004256CCU, 0x004256DCU, 0x004256ECU, 0x004256FCU, 0x0042570CU, 0x0042571CU, 0x0042572CU, 0x0042573CU, 0x0042574CU, 0x0042575CU, 0x0042576CU, 0x0042577CU, 0x0042578CU, 0x0042579CU, 0x004257ACU, 0x004257BCU, 0x004257CCU, 0x004257DCU, 0x00425844U, 0x004257ECU, 0x004257FCU, 0x00425844U, 0x00425844U, 0x0042580CU, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x0042582CU, 0x0042583CU, 0x00425844U, 0x00425844U, 0x00425844U, 0x0042581CU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1578_1C[] = {0x0041F790U, 0x0041F818U, 0x0041F880U, 0x0041F890U, 0x0041F924U, 0x0041F96CU, 0x0041F9BCU};
const float unbake_rodata_800E1594_4 = 2.14748365e+09f;
const float unbake_rodata_800E1598_4 = 0.00333333341f;
const float unbake_rodata_800E159C_4 = 70.0f;
const float unbake_rodata_800E15A0_4 = 170.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E25D4_10[] = {0x80, 0x0D, 0x0C, 0x44, 0x80, 0x0D, 0x5F, 0xDC, 0x80, 0x0D, 0xAF, 0xCC, 0x80, 0x0D, 0xED, 0x88};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DDCA0_C[] = {0x80, 0x0D, 0x14, 0x70, 0x80, 0x0D, 0x61, 0x90, 0x80, 0x0D, 0xAB, 0x94};
const unsigned char unbake_rodata_800DDCAC_C[] = {0x80, 0x0D, 0x14, 0x88, 0x80, 0x0D, 0x61, 0xB0, 0x80, 0x0D, 0xAB, 0xAC};
#elif defined(VERSION_DE)
const float unbake_rodata_800DCB1C_4 = 1.0f;
const float unbake_rodata_800DCB20_4 = 1.0f;
const float unbake_rodata_800DCB24_4 = 0.166666672f;
#endif
