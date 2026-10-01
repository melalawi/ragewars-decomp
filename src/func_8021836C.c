#include "basetypes.h"

extern f32 D_800C733C;
extern f32 D_800CE388;

typedef struct func_8021836C_S1 func_8021836C_S1;
typedef struct func_8021836C_S2 func_8021836C_S2;
struct func_8021836C_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8021836C_S2 {
    volatile s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(volatile s32)];
    volatile s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(volatile s32)];
    volatile s32 unk8;
    char pad8[0xC - 0x8 - sizeof(volatile s32)];
    volatile s32 unkC;
    char padC[0x14 - 0xC - sizeof(volatile s32)];
    volatile s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(volatile s32)];
    volatile s32 unk18;
    char pad18[0x28 - 0x18 - sizeof(volatile s32)];
    volatile f32 unk28;
    char pad28[0x2C - 0x28 - sizeof(volatile f32)];
    volatile s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(volatile s32)];
    volatile f32 unk30;
    char pad30[0x37C - 0x30 - sizeof(volatile f32)];
    volatile s32 unk37C;
    char pad37C[0x380 - 0x37C - sizeof(volatile s32)];
    volatile s32 unk380;
    char pad380[0x388 - 0x380 - sizeof(volatile s32)];
    volatile s32 unk388;
    char pad388[0x38C - 0x388 - sizeof(volatile s32)];
    volatile s32 unk38C;
    char pad38C[0x390 - 0x38C - sizeof(volatile s32)];
    volatile s32 unk390;
};

/** Reset the object and initialize its thirty-six descending-offset records. */
void func_8021836C(volatile char *arg0) {
    s32 i;
    s32 minus_one = -1;
    f32 scale = D_800C733C;
    f32 value = ((func_8021836C_S1 *)(&D_800CE388))->unk4;

    ((func_8021836C_S2 *)(arg0))->unk0 = 0;
    ((func_8021836C_S2 *)(arg0))->unk4 = 0;
    ((func_8021836C_S2 *)(arg0))->unk8 = 0;
    ((func_8021836C_S2 *)(arg0))->unkC = 0;
    ((func_8021836C_S2 *)(arg0))->unk14 = 0;
    ((func_8021836C_S2 *)(arg0))->unk37C = minus_one;
    ((func_8021836C_S2 *)(arg0))->unk380 = 1;
    ((func_8021836C_S2 *)(arg0))->unk388 = minus_one;
    ((func_8021836C_S2 *)(arg0))->unk18 = 0;
    ((func_8021836C_S2 *)(arg0))->unk38C = 0;
    ((func_8021836C_S2 *)(arg0))->unk390 = minus_one;

    for (i = 0; i < 0x24; i++, arg0 += 0x18) {
        f32 scaled = i * scale;
        ((func_8021836C_S2 *)(arg0))->unk2C = 0;
        ((func_8021836C_S2 *)(arg0))->unk30 = value;
        ((func_8021836C_S2 *)(arg0))->unk28 = -scaled;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C217C_4 = 0.17453295f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C733C_4 = 0.17453295f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C24EC_4 = 0.17453295f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C252C_4 = 0.17453295f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C224C_4 = 0.17453295f;
#endif
