#include "basetypes.h"

extern void *D_800D052C[];
extern s32 D_800D2980;
extern s32 D_8011FE88;
extern char D_80145088;

extern s32 func_80214178(void *, void *, s32);
extern s32 func_80232770(s32);
extern s32 func_80232790(s32);
extern s32 func_802327C4(s32);
extern void func_80237E70(void *, void *, void *);

typedef struct { char pad0[0x54]; s32 unk54; } func_8022FD9C_Record;
typedef struct func_8022FD9C_S1 func_8022FD9C_S1;
typedef struct func_8022FD9C_S2 func_8022FD9C_S2;
typedef struct func_8022FD9C_S3 func_8022FD9C_S3;
typedef struct func_8022FD9C_S4 func_8022FD9C_S4;
typedef union func_8022FD9C_S2_U770 { s16 v0; u16 v1; } func_8022FD9C_S2_U770;
struct func_8022FD9C_S1 {
    char pad0[0x1];
    s8 unk1;
    char pad1[0x1D8 - 0x1 - sizeof(s8)];
    void* unk1D8;
};
struct func_8022FD9C_S2 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x770 - 0x62E - sizeof(s16)];
    func_8022FD9C_S2_U770 unk770;
    char pad770[0x13B8 - 0x770 - sizeof(func_8022FD9C_S2_U770)];
    s32 unk13B8;
    char pad13B8[0x13BC - 0x13B8 - sizeof(s32)];
    s32 unk13BC;
    char pad13BC[0x13C0 - 0x13BC - sizeof(s32)];
    s32 unk13C0;
};
struct func_8022FD9C_S3 {
    char pad0[0x2C];
    s32 unk2C;
    char pad2C[0x120 - 0x2C - sizeof(s32)];
    s32 unk120;
    char pad120[0x124 - 0x120 - sizeof(s32)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
    char pad128[0x130 - 0x128 - sizeof(s32)];
    s32 unk130;
};
struct func_8022FD9C_S4 {
    char pad0[0x58];
    s32 unk58;
};

void func_8022FD9C(void *arg0, void *arg1) {
    s16 index;
    u16 unsigned_index;
    void *owner;
    void *state;

    state = ((func_8022FD9C_S1 *)(arg0))->unk1D8;
    index = ((func_8022FD9C_S2 *)(state))->unk770.v0;
    unsigned_index = ((func_8022FD9C_S2 *)(state))->unk770.v1;
    if ((((func_8022FD9C_S2 *)(state))->unk62E != index) || (D_8011FE88 != 4)) {
        if (func_80232770(index) != 0) {
            ((func_8022FD9C_S2 *)(state))->unk13B8 = 1;
        } else if (func_80232790(index) != 0) {
            ((func_8022FD9C_S2 *)(state))->unk13BC = 1;
        } else if (func_802327C4(index) != 0) {
            ((func_8022FD9C_S2 *)(state))->unk13C0 = 1;
        }
        ((func_8022FD9C_S2 *)(state))->unk62E = unsigned_index;
        ((func_8022FD9C_S3 *)(arg1))->unk2C = ((func_8022FD9C_Record *)D_800D052C[(s16)unsigned_index])->unk54;
        ((func_8022FD9C_S3 *)(arg1))->unk120 = ((func_8022FD9C_S4 *)(D_800D052C[((func_8022FD9C_S2 *)(state))->unk62E]))->unk58;
        owner = ((func_8022FD9C_S2 *)(state))->unk5DC;
        if ((owner != 0) && ((u32)D_800D2980 >= 5U)) {
            func_80237E70(&D_80145088, owner,
                *(void **)*(void **)D_800D052C[((func_8022FD9C_S2 *)(state))->unk62E]);
        }
        ((func_8022FD9C_S3 *)(arg1))->unk124 = 0;
        ((func_8022FD9C_S3 *)(arg1))->unk128 = 0;
        ((func_8022FD9C_S1 *)(arg0))->unk1 = 0;
        ((func_8022FD9C_S3 *)(arg1))->unk130 = 0;
    }
    func_80214178(arg0, arg1, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D1E68_4[] = {0x80, 0x0C, 0xE7, 0xD8};
const unsigned char unbake_rodata_800D1E6C_40[] = {0x80, 0x0C, 0xE7, 0xE4, 0x80, 0x0C, 0xE7, 0xF8, 0x80, 0x0C, 0xE8, 0x08, 0x80, 0x0C, 0xE8, 0x18, 0x80, 0x0C, 0xE8, 0x28, 0x80, 0x0C, 0xE8, 0x38, 0x80, 0x0C, 0xE8, 0x4C, 0x80, 0x0C, 0xE8, 0x60, 0x80, 0x0C, 0xE8, 0x6C, 0x80, 0x0C, 0xE8, 0x74, 0x80, 0x0C, 0xE8, 0x84, 0x80, 0x0C, 0xE8, 0x94, 0x80, 0x0C, 0xE8, 0xA4, 0x80, 0x0C, 0xE8, 0xB0, 0x80, 0x0C, 0xE8, 0xC0, 0x80, 0x0C, 0xE8, 0xCC};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D722C_4[] = {0x80, 0x0D, 0x3D, 0x84};
const unsigned char unbake_rodata_800D7230_4[] = {0x80, 0x0D, 0x3D, 0x8C};
const unsigned char unbake_rodata_800D7234_4[] = {0x80, 0x0D, 0x3D, 0x98};
const unsigned char unbake_rodata_800D7238_4[] = {0x80, 0x0D, 0x3D, 0xA0};
const unsigned char unbake_rodata_800D723C_4[] = {0x80, 0x0D, 0x3D, 0xA8};
const unsigned char unbake_rodata_800D7240_4[] = {0x80, 0x0D, 0x3D, 0xB0};
const unsigned char unbake_rodata_800D7244_4[] = {0x80, 0x0D, 0x3D, 0xB8};
const unsigned char unbake_rodata_800D7248_4[] = {0x80, 0x0D, 0x3D, 0xC0};
const unsigned char unbake_rodata_800D724C_4[] = {0x80, 0x0D, 0x3D, 0xC8};
const unsigned char unbake_rodata_800D7250_4[] = {0x80, 0x0D, 0x3D, 0xD4};
const unsigned char unbake_rodata_800D7254_4[] = {0x80, 0x0D, 0x3D, 0xDC};
const unsigned char unbake_rodata_800D7258_4[] = {0x80, 0x0D, 0x3D, 0xE8};
const unsigned char unbake_rodata_800D725C_4[] = {0x80, 0x0D, 0x3D, 0xF0};
const unsigned char unbake_rodata_800D7260_4[] = {0x80, 0x0D, 0x3D, 0xF8};
const unsigned char unbake_rodata_800D7264_4[] = {0x80, 0x0D, 0x3E, 0x04};
const unsigned char unbake_rodata_800D7268_4[] = {0x80, 0x0D, 0x3E, 0x10};
const unsigned char unbake_rodata_800D726C_4[] = {0x80, 0x0D, 0x3E, 0x18};
const unsigned char unbake_rodata_800D7270_4[] = {0x80, 0x0D, 0x3E, 0x20};
const unsigned char unbake_rodata_800D7274_4[] = {0x80, 0x0D, 0x3E, 0x2C};
const unsigned char unbake_rodata_800D7278_4[] = {0x80, 0x0D, 0x3E, 0x34};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CDBD0_18[] = {0x80, 0x0C, 0xDA, 0x40, 0x80, 0x0C, 0xDA, 0x68, 0x80, 0x0C, 0xDA, 0x90, 0x80, 0x0C, 0xDB, 0x08, 0x80, 0x0C, 0xDB, 0x80, 0x80, 0x0C, 0xDB, 0xA8};
#endif
