#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

extern char D_80135210;

extern s32 func_80262D00(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, Triple arg5, f32 arg6, Triple arg7,
                         Triple arg8, void *arg9);

typedef struct func_802063EC_S1 func_802063EC_S1;
typedef struct func_802063EC_S2 func_802063EC_S2;
struct func_802063EC_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x6C - 0x1C - sizeof(Triple)];
    f32 unk6C;
};
struct func_802063EC_S2 {
    char pad0[0x128];
    s32 unk128;
};

void func_802063EC(void *arg0, void *arg1, Triple arg2, Triple arg3,
                   s32 arg4, s32 arg5, s32 arg6) {
    if (func_80262D00(&D_80135210, arg5, 0, arg6,
                      arg4, arg2,
                      ((func_802063EC_S1 *)(arg0))->unk6C,
                      ((func_802063EC_S1 *)(arg0))->unk1C, arg3,
                      (char *)arg1 + 0x124) != 0) {
        ((func_802063EC_S2 *)(arg1))->unk128 -= 1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C26D4_4 = 40.9599991f;
const float unbake_rodata_800C26D8_4 = 3.0f;
const float unbake_rodata_800C26DC_4 = 0.069813177f;
const float unbake_rodata_800C26E0_4 = 0.069813177f;
const float unbake_rodata_800C26E4_4 = 4.09600019f;
const float unbake_rodata_800C26E8_4 = 4.09600019f;
const float unbake_rodata_800C26EC_4 = 81.9199982f;
const float unbake_rodata_800C26F0_4 = 3.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C74D0_4 = 1.0f;
const float unbake_rodata_800C74D4_4 = 8.0f;
const float unbake_rodata_800C74D8_4 = 32.0f;
const float unbake_rodata_800C74DC_4 = 16.0f;
const float unbake_rodata_800C74E0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2644_4 = 0.999998987f;
const float unbake_rodata_800C2648_4 = (-0.999998987f);
const float unbake_rodata_800C264C_4 = 1.0f;
const float unbake_rodata_800C2650_4 = 1.53600001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2668_4 = 1.0f;
const float unbake_rodata_800C266C_4 = 0.5f;
const float unbake_rodata_800C2670_4 = 1.0f;
const float unbake_rodata_800C2674_4 = 0.75f;
const float unbake_rodata_800C2678_4 = 0.75f;
const float unbake_rodata_800C267C_4 = 0.5f;
const float unbake_rodata_800C2680_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C23F8_194[] = {0x0021E5A4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E594U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5A4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E594U, 0x0021E594U, 0x0021E5A4U, 0x0021E5A4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5A4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5B4U, 0x0021E5A4U};
const float unbake_rodata_800C258C_4 = 8.0f;
const float unbake_rodata_800C2590_4 = 32.0f;
const float unbake_rodata_800C2594_4 = 16.0f;
const float unbake_rodata_800C2598_4 = 1.0f;
#endif
