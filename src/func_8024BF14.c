#include "basetypes.h"

extern char D_800C8BD8;
extern f32 D_800C8C4C;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern f32 func_802B2350(s32 arg0);
extern void func_802536F4(s32 arg0, s32 arg1);

typedef struct func_8024BF14_S1 func_8024BF14_S1;
typedef struct func_8024BF14_S2 func_8024BF14_S2;
struct func_8024BF14_S1 {
    char pad0[0xC4];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
};
struct func_8024BF14_S2 {
    char pad0[0x1E];
    u16 unk1E;
};

f32 func_8024BF14(void *arg0) {
    f32 var_f20;
    void *temp_s0;

    var_f20 = D_800C8C4C;
    if (((func_8024BF14_S1 *)(arg0))->unk100 & 0x40000) {
        temp_s0 = func_802518DC(0, ((func_8024BF14_S1 *)(arg0))->unkC4, ((func_8024BF14_S1 *)(arg0))->unkC4, ((func_8024BF14_S1 *)(arg0))->unkD0, 4, 0, 0, &D_800C8BD8, 1);
        if (temp_s0 != 0) {
            var_f20 = func_802B2350((s32) ((func_8024BF14_S2 *)(func_8028FD94(*(void **) temp_s0, 0)))->unk1E);
            func_802536F4(0, (s32) temp_s0);
        }
    }
    return var_f20;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3A8C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C4C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E0C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E4C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B5C_4 = 1.0f;
#endif
