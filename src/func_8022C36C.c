#include "basetypes.h"

extern u8 D_801462DE;
extern f32 D_800C7E28;
extern f32 D_800C7E2C;
extern s32 D_800E28D0;
extern s32 D_800E28D4;

void func_802AA224(u8 arg0);
void func_802ABC18(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);

typedef struct func_8022C36C_S1 func_8022C36C_S1;
typedef struct func_8022C36C_S2 func_8022C36C_S2;
struct func_8022C36C_S1 {
    char pad0[0x29C];
    f32 unk29C;
    char pad29C[0x2A0 - 0x29C - sizeof(f32)];
    f32 unk2A0;
    char pad2A0[0x2A4 - 0x2A0 - sizeof(f32)];
    f32 unk2A4;
    char pad2A4[0x2A8 - 0x2A4 - sizeof(f32)];
    f32 unk2A8;
};
struct func_8022C36C_S2 {
    char pad0[0x7BC];
    f32 unk7BC;
};

void func_8022C36C(char *arg0, char *arg1) {
    f32 x, y;
    f32 sx, sy;
    f32 bx, by, cz;
    f32 t1, t2;
    f32 w;
    f32 screenX, screenY;

    func_802AA224(D_801462DE);

    x = ((func_8022C36C_S1 *)(arg1))->unk29C;
    sx = x / (f32) D_800E28D0;
    bx = sx * D_800C7E28;

    y = ((func_8022C36C_S1 *)(arg1))->unk2A0;
    sy = y / (f32) D_800E28D4;
    by = sy * D_800C7E28;

    cz = sy * D_800C7E2C;

    t1 = ((func_8022C36C_S1 *)(arg1))->unk2A4 + x;
    t2 = ((func_8022C36C_S1 *)(arg1))->unk2A8 + y;
    w = ((func_8022C36C_S2 *)(arg0))->unk7BC;

    screenX = t1 + bx;
    screenY = t2 + by;

    func_802ABC18(0x201, (s32) w, (s16) (s32) screenX, (s16) (s32) screenY, sx, cz, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C68_4 = (-50.0f);
const float unbake_rodata_800C2C6C_4 = 1.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E28_4 = (-50.0f);
const float unbake_rodata_800C7E2C_4 = 1.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FDC_4 = (-50.0f);
const float unbake_rodata_800C2FE0_4 = 1.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C301C_4 = (-50.0f);
const float unbake_rodata_800C3020_4 = 1.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D38_4 = (-50.0f);
const float unbake_rodata_800C2D3C_4 = 1.5f;
#endif
