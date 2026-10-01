#include "basetypes.h"

typedef void (*VoidCallback)(void);

extern s32 D_800CF228;
extern s32 D_800D2930;
extern void *D_801029F0;
extern u8 D_80102AD8[];
extern s32 D_8011FE88;
extern s32 D_8013B290;
extern s32 D_80145048;
extern char D_22ECBC;

extern void *func_8028B2D4(void *, u16 *);
extern s32 func_80245608(s32 arg0, void *arg1, VoidCallback arg2);
extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);

typedef struct func_80225B74_S1 func_80225B74_S1;
typedef struct func_80225B74_S2 func_80225B74_S2;
struct func_80225B74_S1 {
    char pad0[0x14];
    u16* unk14;
    char pad14[0x50 - 0x14 - sizeof(u16*)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x5DC - 0x58 - sizeof(f32)];
    void* unk5DC;
    char pad5DC[0x664 - 0x5DC - sizeof(void*)];
    u32 unk664;
    char pad664[0x850 - 0x664 - sizeof(u32)];
    s32 unk850;
};
struct func_80225B74_S2 {
    char pad0[0x44];
    u32 unk44;
    char pad44[0xFC - 0x44 - sizeof(u32)];
    f32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(f32)];
    f32 unk100;
    char pad100[0x104 - 0x100 - sizeof(f32)];
    f32 unk104;
};

void func_80225B74(void *arg0, void *arg1, s32 arg2)
{
    s32 enabled;
    u32 resource_flags;
    void *resource;
    s32 i;

    enabled = 1;
    resource_flags = 0;

    if (((func_80225B74_S1 *)(arg0))->unk14 != 0) {
        resource = func_8028B2D4(&D_8011FE88, ((func_80225B74_S1 *)(arg0))->unk14);
        if (resource != 0) {
            resource_flags = ((func_80225B74_S2 *)(resource))->unk44;
        }
    }

    if (D_8013B290 != 0) {
        enabled = 0;
    }
    if (((func_80225B74_S1 *)(arg0))->unk664 & 0x8000) {
        enabled = 0;
    }
    if (D_8013B290 != 0) {
        enabled = 0;
    }
    if (D_80145048 >= 2) {
        enabled = 0;
    }
    if (arg2 == 12) {
        enabled = 0;
    }
    if (((func_80225B74_S1 *)(arg0))->unk664 & 0x8000) {
        enabled = 0;
    }
    if (resource_flags & 0x1000000) {
        enabled = 0;
    }
    if ((resource_flags & 0x80000) &&
        (arg2 != 20) && (arg2 != 40) && (arg2 != 30)) {
        enabled = 0;
    }

    ((func_80225B74_S1 *)(arg0))->unk850 = enabled;
    if (enabled != 0) {
        if (arg2 == 50) {
            void *data;

            data = ((func_80225B74_S1 *)(arg0))->unk5DC;
            D_800CF228 = 1;
            if (data != 0) {
                for (i = 0; i < 4; i++) {
                    D_80102AD8[i] = *((u8 *)((func_80225B74_S1 *)(arg0))->unk5DC + i + 0x520);
                }
            }
        }
        D_800D2930 = 0;
        D_801029F0 = arg0;
        func_80245608(arg2, 0, (VoidCallback)&D_22ECBC);
    }

    resource = func_8028CF7C(&D_8011FE88, -1, 0xC45);
    if (resource != 0) {
        ((func_80225B74_S1 *)(arg0))->unk50 = ((func_80225B74_S2 *)(resource))->unkFC;
        ((func_80225B74_S1 *)(arg0))->unk54 = ((func_80225B74_S2 *)(resource))->unk100;
        ((func_80225B74_S1 *)(arg0))->unk58 = ((func_80225B74_S2 *)(resource))->unk104;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5150_9[] = {0x56, 0x69, 0x73, 0x20, 0x49, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA310_9[] = {0x56, 0x69, 0x73, 0x20, 0x49, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5028_4 = 128.0f;
const float unbake_rodata_800C502C_4 = 255.0f;
const float unbake_rodata_800C5030_4 = 128.0f;
const float unbake_rodata_800C5034_4 = 255.0f;
const float unbake_rodata_800C5038_4 = 1.0f;
const float unbake_rodata_800C503C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5040_4 = 255.0f;
const float unbake_rodata_800C5044_4 = 2.14748365e+09f;
const float unbake_rodata_800C5048_4 = 255.0f;
const float unbake_rodata_800C504C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5050_4 = 255.0f;
const float unbake_rodata_800C5054_4 = 2.14748365e+09f;
const float unbake_rodata_800C5058_4 = 255.0f;
const float unbake_rodata_800C505C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5060_4 = 255.0f;
const float unbake_rodata_800C5064_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C5068_18[] = {0x0027F4E0U, 0x0027F50CU, 0x0027F524U, 0x0027F55CU, 0x0027F5B8U, 0x0027F5F8U};
const float unbake_rodata_800C5080_4 = 255.0f;
const float unbake_rodata_800C5084_4 = 1.0f;
const float unbake_rodata_800C5088_4 = 1.0f;
const float unbake_rodata_800C508C_4 = (-9.99999975e-05f);
const float unbake_rodata_800C5090_4 = 9.99999975e-05f;
const float unbake_rodata_800C5094_4 = 10.0f;
const float unbake_rodata_800C5098_4 = 1.0f;
const float unbake_rodata_800C509C_4 = 5.0f;
const float unbake_rodata_800C50A0_4 = 1.0f;
const float unbake_rodata_800C50A4_4 = 0.5f;
const float unbake_rodata_800C50A8_4 = 2.14748365e+09f;
const float unbake_rodata_800C50AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C50B0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4EE8_4 = 0.25f;
const float unbake_rodata_800C4EEC_4 = 1.41421354f;
const float unbake_rodata_800C4EF0_4 = 0.5f;
const float unbake_rodata_800C4EF4_4 = 32.0f;
const float unbake_rodata_800C4EF8_4 = 6.0f;
const float unbake_rodata_800C4EFC_4 = 32.0f;
const float unbake_rodata_800C4F00_4 = 0.0174532942f;
const float unbake_rodata_800C4F04_4 = 0.0666666701f;
const float unbake_rodata_800C4F08_4 = 10.2399998f;
const float unbake_rodata_800C4F0C_4 = 4096.0f;
const float unbake_rodata_800C4F10_4 = 400.0f;
const float unbake_rodata_800C4F14_4 = 4096.0f;
const float unbake_rodata_800C4F18_4 = 400.0f;
const float unbake_rodata_800C4F1C_4 = 10.2399998f;
const float unbake_rodata_800C4F20_4 = 0.5f;
const float unbake_rodata_800C4F24_4 = 0.00100000005f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C51E8_B[] = {0x67, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x65, 0x74, 0x00};
#endif
