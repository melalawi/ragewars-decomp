#include "basetypes.h"

typedef void (*Callback)(void *arg0, void *arg1);

extern s32 D_8011FE88;
extern f32 D_800D2988;

extern s32 func_80285F28(void *, void *);
extern void func_80206A20(void *arg0, void *arg1);
extern void func_80206DD4(void *arg0, void *arg1);

typedef struct func_802079B0_S1 func_802079B0_S1;
typedef struct func_802079B0_S2 func_802079B0_S2;
typedef struct func_802079B0_S3 func_802079B0_S3;
typedef struct func_802079B0_S4 func_802079B0_S4;
typedef struct func_802079B0_S5 func_802079B0_S5;
struct func_802079B0_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
};
struct func_802079B0_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_802079B0_S3 {
    char pad0[0x30];
    void* unk30;
    char pad30[0x34 - 0x30 - sizeof(void*)];
    s8 unk34;
    char pad34[0x13C - 0x34 - sizeof(s8)];
    f32 unk13C;
};
struct func_802079B0_S4 {
    char pad0[0x8];
    Callback unk8;
};
struct func_802079B0_S5 {
    char pad0[0x48];
    f32 unk48;
};

void func_802079B0(void *arg0, void *arg1) {
    void *record;
    void *handler;
    Callback callback;
    s32 flags;

    record = &((func_802079B0_S2 *)(((func_802079B0_S1 *)(arg0))->unk18))->unk14;
    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        flags = ((func_802079B0_S1 *)(arg0))->unk100;
        flags &= ~0x10000;
        flags &= ~0x100;
        ((func_802079B0_S1 *)(arg0))->unk100 = flags;
        return;
    }

    ((func_802079B0_S1 *)(arg0))->unk100 |= 0x10000;
    handler = ((func_802079B0_S3 *)(arg1))->unk30;
    if (handler != 0) {
        callback = ((func_802079B0_S4 *)(handler))->unk8;
        if (callback != 0) {
            callback(arg0, arg1);
        }
    }

    ((func_802079B0_S3 *)(arg1))->unk13C +=
        ((func_802079B0_S5 *)(record))->unk48 * D_800D2988;
    func_80206A20(arg0, arg1);
    if (((func_802079B0_S3 *)(arg1))->unk34 != 4) {
        func_80206DD4(arg0, arg1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C3C_4 = 150.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7D14_4 = 17.0f;
const float unbake_rodata_800C7D18_4 = 255.0f;
const float unbake_rodata_800C7D1C_4 = 8.53333378f;
const float unbake_rodata_800C7D20_4 = 17.0f;
const float unbake_rodata_800C7D24_4 = 255.0f;
const float unbake_rodata_800C7D28_4 = 8.53333378f;
const float unbake_rodata_800C7D2C_4 = 128.0f;
const float unbake_rodata_800C7D30_4 = 0.425000012f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2DD4_4 = 100.0f;
const float unbake_rodata_800C2DD8_4 = 80.0f;
const float unbake_rodata_800C2DDC_4 = 7.5f;
const float unbake_rodata_800C2DE0_4 = 2.14748365e+09f;
const float unbake_rodata_800C2DE4_4 = 512.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2DD4_4 = 0.279252708f;
const float unbake_rodata_800C2DD8_4 = 1.0f;
const float unbake_rodata_800C2DDC_4 = 0.00999999978f;
const float unbake_rodata_800C2DE0_4 = 0.0599999987f;
const float unbake_rodata_800C2DE4_4 = 80.0f;
const float unbake_rodata_800C2DE8_4 = 0.0174532942f;
const float unbake_rodata_800C2DEC_4 = 8.0f;
const float unbake_rodata_800C2DF0_4 = 90.0f;
const float unbake_rodata_800C2DF4_4 = 0.5f;
const float unbake_rodata_800C2DF8_4 = 2.5f;
const float unbake_rodata_800C2DFC_4 = 2.5f;
const float unbake_rodata_800C2E00_4 = 50.0f;
const float unbake_rodata_800C2E04_4 = 1.0f;
const float unbake_rodata_800C2E08_4 = 10.2399998f;
const float unbake_rodata_800C2E0C_4 = 10.2399998f;
const float unbake_rodata_800C2E10_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2C24_4 = 17.0f;
const float unbake_rodata_800C2C28_4 = 255.0f;
const float unbake_rodata_800C2C2C_4 = 8.53333378f;
const float unbake_rodata_800C2C30_4 = 17.0f;
const float unbake_rodata_800C2C34_4 = 255.0f;
const float unbake_rodata_800C2C38_4 = 8.53333378f;
const float unbake_rodata_800C2C3C_4 = 128.0f;
const float unbake_rodata_800C2C40_4 = 0.425000012f;
#endif
