#include "basetypes.h"

extern void func_8022BE10(void *arg0, void *arg1);
extern void func_8022BEEC(void *arg0, void *arg1);
extern void func_8022C050(void *arg0, void *arg1);

typedef struct func_8022BD84_S1 func_8022BD84_S1;
typedef struct func_8022BD84_S2 func_8022BD84_S2;
struct func_8022BD84_S1 {
    char pad0[0x38];
    s32 unk38;
};
struct func_8022BD84_S2 {
    char pad0[0x840];
    s32 unk840;
};

void func_8022BD84(void *arg0, void *arg1, s32 arg2) {
    s32 flags;
    s32 flag_1000;
    s32 flag_8000;
    s32 flag_10000;

    if (arg2 != 0) {
        flags = ((func_8022BD84_S1 *)(arg1))->unk38;
        flag_1000 = flags & 0x1000;
        flag_8000 = flags & 0x8000;
        flag_10000 = flags & 0x10000;
        if (flag_1000 == 0) {
            ((func_8022BD84_S2 *)(arg0))->unk840 = 0;
        } else {
            func_8022BE10(arg0, arg1);
        }
        if (flag_8000) {
            func_8022BEEC(arg0, arg1);
        }
        if (flag_10000) {
            func_8022C050(arg0, arg1);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C6110_8 = 4294967296.0;
const float unbake_rodata_800C6118_4 = 1.0f;
const float unbake_rodata_800C611C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB3BC_4 = 1.0f;
const double unbake_rodata_800CB3C0_8 = 4294967296.0;
const float unbake_rodata_800CB3C8_4 = 1.0f;
const float unbake_rodata_800CB3CC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C61E8_4 = 1.52587891e-05f;
const float unbake_rodata_800C61EC_4 = 0.25f;
const float unbake_rodata_800C61F0_4 = (-90.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6144_4 = 255.0f;
const float unbake_rodata_800C6148_4 = 255.0f;
const float unbake_rodata_800C614C_4 = 255.0f;
const float unbake_rodata_800C6150_4 = 255.0f;
const float unbake_rodata_800C6154_4 = 255.0f;
const float unbake_rodata_800C6158_4 = 255.0f;
const float unbake_rodata_800C615C_4 = 255.0f;
const float unbake_rodata_800C6160_4 = 255.0f;
const float unbake_rodata_800C6164_4 = 255.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C6108_1C[] = {0x002A8DD4U, 0x002A8DE4U, 0x002A8E14U, 0x002A8DF4U, 0x002A8E04U, 0x002A8E04U, 0x002A8E14U};
const float unbake_rodata_800C6124_4 = 24.0f;
const float unbake_rodata_800C6128_4 = 12.0f;
const float unbake_rodata_800C612C_4 = 6.0f;
const float unbake_rodata_800C6130_4 = 16.0f;
const float unbake_rodata_800C6134_4 = 8.0f;
const float unbake_rodata_800C6138_4 = 1.0f;
const float unbake_rodata_800C613C_4 = 0.00352112669f;
const float unbake_rodata_800C6140_4 = 0.00450450461f;
#endif
