#include "basetypes.h"

extern f32 func_802B2350(s32 arg0);

typedef struct func_8024E454_S1 func_8024E454_S1;
typedef struct func_8024E454_S2 func_8024E454_S2;
typedef struct func_8024E454_S3 func_8024E454_S3;
typedef struct func_8024E454_S4 func_8024E454_S4;
typedef struct func_8024E454_S5 func_8024E454_S5;
struct func_8024E454_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    u32 unk100;
    char pad100[0x118 - 0x100 - sizeof(u32)];
    void* unk118;
    char pad118[0x1D8 - 0x118 - sizeof(void*)];
    void* unk1D8;
};
struct func_8024E454_S2 {
    char pad0[0x80C];
    void* unk80C;
};
struct func_8024E454_S3 {
    char pad0[0xF0];
    f32 unkF0;
};
struct func_8024E454_S4 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x2C - 0x18 - sizeof(f32)];
    f32 unk2C;
};
struct func_8024E454_S5 {
    char pad0[0x14];
    u16 unk14;
    char pad14[0x30 - 0x14 - sizeof(u16)];
    void* unk30;
};

f32 func_8024E454(void *arg0)
{
    void *temp_a1;
    void *next;
    s32 temp_v1;

loop:
    temp_a1 = ((func_8024E454_S1 *)(arg0))->unk18;
    temp_v1 = *(s32 *)temp_a1;
    if (temp_v1 == 4) {
        goto value_2c;
    }
    if (temp_v1 < 5) {
        if (temp_v1 == 1) {
            goto value_2c;
        }
        goto other;
    }
    if (temp_v1 == 5) {
        goto value_18;
    }
    if (temp_v1 != 11) {
        goto other;
    }
    if (*(u8 *)arg0 == 1 &&
        (((func_8024E454_S1 *)(arg0))->unk100 & 0x300000) != 0) {
        next = ((func_8024E454_S2 *)(((func_8024E454_S1 *)(arg0))->unk1D8))->unk80C;
        if (next != 0) {
            arg0 = next;
            goto loop;
        }
    }
    return ((func_8024E454_S3 *)(((func_8024E454_S1 *)(arg0))->unk18))->unkF0;

value_2c:
    return ((func_8024E454_S4 *)(temp_a1))->unk2C;
value_18:
    return ((func_8024E454_S4 *)(temp_a1))->unk18;
other:
    if (*(u8 *)arg0 == 2) {
        next = ((func_8024E454_S1 *)(arg0))->unk118;
        next = ((func_8024E454_S5 *)(next))->unk30;
        return func_802B2350(((func_8024E454_S5 *)(next))->unk14);
    }
    return 0.0f;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FDFD0_20[] = {0x00, 0x64, 0x10, 0x21, 0x8F, 0xC3, 0x00, 0x20, 0x00, 0x60, 0x28, 0x21, 0x00, 0x05, 0x20, 0x40, 0x00, 0x83, 0x20, 0x21, 0x00, 0x04, 0x28, 0xC0, 0x00, 0xA3, 0x28, 0x21, 0x00, 0x05, 0x19, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EED48_24[] = {0x00443F48U, 0x00443F70U, 0x00443F70U, 0x00443F50U, 0x00443F60U, 0x00443F70U, 0x00443F80U, 0x00443FC0U, 0x00444000U};
const float unbake_rodata_800EED6C_4 = 2.14748365e+09f;
const float unbake_rodata_800EED70_4 = 2.14748365e+09f;
const float unbake_rodata_800EED74_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E9C08_24[] = {0x004402C4U, 0x004402F8U, 0x004402F8U, 0x004402D0U, 0x004402E4U, 0x004402F8U, 0x00440308U, 0x0044031CU, 0x00440330U};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E03BC_44[] = {0x00, 0x42, 0x18, 0x84, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x0E, 0x20, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x18, 0x54, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x19, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x19, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x1B, 0xAC};
#endif
