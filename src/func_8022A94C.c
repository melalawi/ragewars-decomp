#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} Quad;

typedef struct {
    u8 pad000[0x100];
    s32 flags;
    u8 pad104[0x1DC];
    s32 value;
} Block;

extern f32 D_800D2988;
extern void func_8024BE2C(void *arg0);
extern void func_80246E34(char *);

typedef struct func_8022A94C_S1 func_8022A94C_S1;
typedef struct func_8022A94C_S2 func_8022A94C_S2;
struct func_8022A94C_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x14 - 0x8 - sizeof(Triple)];
    s32 unk14;
    char pad14[0x5C - 0x14 - sizeof(s32)];
    Quad unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Quad)];
    f32 unk6C;
    char pad6C[0x10E - 0x6C - sizeof(f32)];
    u8 unk10E;
    char pad10E[0x2E8 - 0x10E - sizeof(u8)];
    Block unk2E8;
    char pad2E8[0x86C - 0x2E8 - sizeof(Block)];
    s32 unk86C;
    char pad86C[0x11D8 - 0x86C - sizeof(s32)];
    f32 unk11D8;
};
struct func_8022A94C_S2 {
    char pad0[0x2F0];
    Triple unk2F0;
    char pad2F0[0x2FC - 0x2F0 - sizeof(Triple)];
    s32 unk2FC;
    char pad2FC[0x344 - 0x2FC - sizeof(s32)];
    Quad unk344;
    char pad344[0x354 - 0x344 - sizeof(Quad)];
    f32 unk354;
};

void func_8022A94C(void *arg0) {
    Block *base;
    s32 old_value;
    s32 new_value;
    f32 saved_value;

    base = &((func_8022A94C_S1 *)(arg0))->unk2E8;
    old_value = ((func_8022A94C_S1 *)(arg0))->unk86C;
    saved_value = D_800D2988;
    base->value = 0x10;
    base->flags &= 0xFFFDFFFF;
    func_8024BE2C(base);
    if (((func_8022A94C_S1 *)(arg0))->unk11D8 <= 0.0f) {
        func_80246E34(base);
    }
    new_value = ((func_8022A94C_S1 *)(arg0))->unk86C;
    D_800D2988 = saved_value;
    if (old_value != new_value) {
        ((func_8022A94C_S1 *)(arg0))->unk10E = 0;
    }
    ((func_8022A94C_S2 *)(arg0))->unk2F0 = ((func_8022A94C_S1 *)(arg0))->unk8;
    ((func_8022A94C_S2 *)(arg0))->unk354 = ((func_8022A94C_S1 *)(arg0))->unk6C;
    ((func_8022A94C_S2 *)(arg0))->unk2FC = ((func_8022A94C_S1 *)(arg0))->unk14;
    ((func_8022A94C_S2 *)(arg0))->unk344 = ((func_8022A94C_S1 *)(arg0))->unk5C;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5670_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C5678_8[] = {0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C5680_8 = 0.0;
const double unbake_rodata_800C5688_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5690_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5698_8 = 1.0;
const double unbake_rodata_800C56A0_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C56A8_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C56B0_8 = 1.0;
const double unbake_rodata_800C56B8_8 = 1.0;
const double unbake_rodata_800C56C0_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C56C8_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C56D0_8 = 1.4426950216293335;
const double unbake_rodata_800C56D8_8 = 0.5;
const double unbake_rodata_800C56E0_8 = 0.693359375;
const double unbake_rodata_800C56E8_8 = 0.00021219444170128557;
const double unbake_rodata_800C56F0_8 = 1.652032915444579e-05;
const double unbake_rodata_800C56F8_8 = 0.0069435997866094112;
const double unbake_rodata_800C5700_8 = 0.00049586285604164004;
const double unbake_rodata_800C5708_8 = 0.055553868412971497;
const double unbake_rodata_800C5710_8 = 0.25;
const double unbake_rodata_800C5718_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5720_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5728_8 = 1.0;
const double unbake_rodata_800C5730_8 = 1.4426950216293335;
const double unbake_rodata_800C5738_8 = 0.5;
const double unbake_rodata_800C5740_8 = 0.693359375;
const double unbake_rodata_800C5748_8 = 0.00021219444170128557;
const double unbake_rodata_800C5750_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5758_8 = 0.0069435997866094112;
const double unbake_rodata_800C5760_8 = 0.00049586285604164004;
const double unbake_rodata_800C5768_8 = 0.055553868412971497;
const double unbake_rodata_800C5770_8 = 0.25;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CABA0_4 = (-9.99999997e-07f);
const float unbake_rodata_800CABA4_4 = 9.99999997e-07f;
const float unbake_rodata_800CABA8_4 = (-9.99999997e-07f);
const float unbake_rodata_800CABAC_4 = 9.99999997e-07f;
const float unbake_rodata_800CABB0_4 = 1.57079637f;
const float unbake_rodata_800CABB4_4 = (-1.57079637f);
const float unbake_rodata_800CABB8_4 = 3.14159274f;
const float unbake_rodata_800CABBC_4 = 9.99999997e-07f;
const float unbake_rodata_800CABC0_4 = 1.0f;
const float unbake_rodata_800CABC4_4 = (-0.00405405788f);
const float unbake_rodata_800CABC8_4 = 0.0218612291f;
const float unbake_rodata_800CABCC_4 = 0.055909887f;
const float unbake_rodata_800CABD0_4 = 0.0964200422f;
const float unbake_rodata_800CABD4_4 = 0.139085338f;
const float unbake_rodata_800CABD8_4 = 0.199465364f;
const float unbake_rodata_800CABDC_4 = 0.333298564f;
const float unbake_rodata_800CABE0_4 = 0.999999344f;
const float unbake_rodata_800CABE4_4 = 0.785398185f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C571C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5720_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5710_4 = 50.0f;
const float unbake_rodata_800C5714_4 = 60.0f;
const float unbake_rodata_800C5718_4 = 4.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5680_8 = 1000.0;
#endif
