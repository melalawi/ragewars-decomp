#include "basetypes.h"

extern void func_802737D0(void *arg0, f32 arg1);
extern void func_80273930(void *arg0, f32 arg1);
extern void func_80273B08(void *arg0, f32 arg1);
extern void func_8027302C(float *arg0, float *arg1);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern s32 func_802725BC(f32 *arg0, f32 arg1);
extern void func_802734B8(char *, f32, f32, f32);
extern void func_80273DDC(void *);

typedef struct func_80207910_S1 func_80207910_S1;
typedef struct func_80207910_S2 func_80207910_S2;
struct func_80207910_S1 {
    char pad0[0x134];
    f32 unk134;
    char pad134[0x138 - 0x134 - sizeof(f32)];
    f32 unk138;
};
struct func_80207910_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x50 - 0x10 - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x6C - 0x58 - sizeof(f32)];
    f32 unk6C;
    char pad6C[0x74 - 0x6C - sizeof(f32)];
    char unk74;
};

void func_80207910(void *arg0, void *arg1) {
    f32 sp10[16];
    char *temp_s1;

    func_802737D0(sp10, ((func_80207910_S1 *)(arg1))->unk138);
    func_80273930(sp10, ((func_80207910_S1 *)(arg1))->unk134);
    func_80273B08(sp10, ((func_80207910_S2 *)(arg0))->unk6C);
    temp_s1 = &((func_80207910_S2 *)(arg0))->unk74;
    func_8027302C((float *) temp_s1, sp10);
    func_802734EC(temp_s1, ((func_80207910_S2 *)(arg0))->unk50, ((func_80207910_S2 *)(arg0))->unk54, ((func_80207910_S2 *)(arg0))->unk58);
    func_802725BC(&((func_80207910_S2 *)(arg0))->unk8, 20000.0f);
    func_802734B8(temp_s1, ((func_80207910_S2 *)(arg0))->unk8, ((func_80207910_S2 *)(arg0))->unkC, ((func_80207910_S2 *)(arg0))->unk10);
    func_80273DDC(temp_s1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C1C_4 = 285.0f;
const float unbake_rodata_800C2C20_4 = 0.0666666701f;
const float unbake_rodata_800C2C24_4 = 1.0f;
const float unbake_rodata_800C2C28_4 = 1.0f;
const float unbake_rodata_800C2C2C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7C64_4 = 40.9599991f;
const float unbake_rodata_800C7C68_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2D94_4 = 0.279252708f;
const float unbake_rodata_800C2D98_4 = 1.0f;
const float unbake_rodata_800C2D9C_4 = 0.00999999978f;
const float unbake_rodata_800C2DA0_4 = 0.0599999987f;
const float unbake_rodata_800C2DA4_4 = 80.0f;
const float unbake_rodata_800C2DA8_4 = 0.0174532942f;
const float unbake_rodata_800C2DAC_4 = 8.0f;
const float unbake_rodata_800C2DB0_4 = 90.0f;
const float unbake_rodata_800C2DB4_4 = 0.5f;
const float unbake_rodata_800C2DB8_4 = 2.5f;
const float unbake_rodata_800C2DBC_4 = 2.5f;
const float unbake_rodata_800C2DC0_4 = 50.0f;
const float unbake_rodata_800C2DC4_4 = 1.0f;
const float unbake_rodata_800C2DC8_4 = 10.2399998f;
const float unbake_rodata_800C2DCC_4 = 10.2399998f;
const float unbake_rodata_800C2DD0_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2DC0_4 = 6.28318548f;
const float unbake_rodata_800C2DC4_4 = 6.28318548f;
const float unbake_rodata_800C2DC8_4 = 0.200000003f;
const float unbake_rodata_800C2DCC_4 = 0.200000003f;
const float unbake_rodata_800C2DD0_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2B74_4 = 40.9599991f;
const float unbake_rodata_800C2B78_4 = 0.5f;
#endif
