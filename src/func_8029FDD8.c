#include "basetypes.h"

extern f32 D_800CAE50;
extern void func_8029CBB0(f32 arg0, f32 *arg1, f32 *arg2);
extern void func_802A1748(s32, s32, s32);
extern void func_8029DE3C(s32, s32, s32);

typedef struct func_8029FDD8_S1 func_8029FDD8_S1;
struct func_8029FDD8_S1 {
    f32 unk0;
    char pad0[0x14 - 0x0 - sizeof(f32)];
    f32 unk14;
    char pad14[0x28 - 0x14 - sizeof(f32)];
    f32 unk28;
    char pad28[0x3C - 0x28 - sizeof(f32)];
    f32 unk3C;
};

void func_8029FDD8(s32 arg0, f32 arg1) {
    u8 sp10[0x40];
    f32 sp50;
    f32 sp54;
    u8 *p;

    if (arg1 != 0.0f) {
        func_8029CBB0(arg1, &sp50, &sp54);
        p = sp10;
        func_802A1748((s32) p, 0, 0x40);
        ((func_8029FDD8_S1 *)(p))->unk0 = D_800CAE50;
        {
            f32 t54 = sp54;
            f32 t50 = sp50;
            ((func_8029FDD8_S1 *)(p))->unk14 = D_800CAE50;
            ((func_8029FDD8_S1 *)(p))->unk28 = D_800CAE50;
            ((func_8029FDD8_S1 *)(p))->unk3C = D_800CAE50;
            *(f32 *) (sp10 + 0x14) = t54;
            *(f32 *) (sp10 + 0x24) = -t50;
            *(f32 *) (sp10 + 0x18) = t50;
            *(f32 *) (sp10 + 0x28) = t54;
        }
        func_8029DE3C(arg0, (s32) p, arg0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5BF0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAE50_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5F60_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5FA0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5CC0_4 = 1.0f;
#endif
