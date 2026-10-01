#include "basetypes.h"

typedef struct func_80293774_S1 func_80293774_S1;
typedef struct func_80293774_S2 func_80293774_S2;
typedef union func_80293774_S1_U26DC4 { s32 v0; f32 v1; } func_80293774_S1_U26DC4;
struct func_80293774_S1 {
    char pad0[0x26DB4];
    s32 unk26DB4;
    char pad26DB4[0x26DB8 - 0x26DB4 - sizeof(s32)];
    s32 unk26DB8;
    char pad26DB8[0x26DBC - 0x26DB8 - sizeof(s32)];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    s8 unk26DC1;
    char pad26DC1[0x26DC4 - 0x26DC1 - sizeof(s8)];
    func_80293774_S1_U26DC4 unk26DC4;
};
struct func_80293774_S2 {
    char pad0[0x4];
    f32 unk4;
};

extern func_80293774_S2 D_800CA580;
extern int func_80264B8C(void);

void func_80293774(void *arg0, s32 arg1) {
    s32 saved;

    saved = ((func_80293774_S1 *)(arg0))->unk26DB8;
    ((func_80293774_S1 *)(arg0))->unk26DC1 = 1;
    ((func_80293774_S1 *)(arg0))->unk26DC4.v0 = 0;
    ((func_80293774_S1 *)(arg0))->unk26DB8 = 0x14;
    ((func_80293774_S1 *)(arg0))->unk26DBC = arg1;
    ((func_80293774_S1 *)(arg0))->unk26DB4 = saved;
    if (func_80264B8C() != 0) {
        ((func_80293774_S1 *)(arg0))->unk26DC4.v1 = D_800CA580.unk4;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53C4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA584_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5744_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5784_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5498_4 = 1.0f;
#endif
