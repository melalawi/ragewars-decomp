#include "basetypes.h"

extern f32 D_800CA560[];
extern f32 D_800CA568;
extern s32 D_800E28D0;

extern void func_80293100(void *arg0, s8 *arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);

typedef struct func_80293378_S1 func_80293378_S1;
struct func_80293378_S1 {
    char pad0[0x26DC4];
    f32 unk26DC4;
};

void func_80293378(void *arg0) {
    s8 color[4];
    f32 value;
    s32 alpha;

    color[0] = 0;
    color[1] = 0;
    color[2] = 0;
    value = ((func_80293378_S1 *)(arg0))->unk26DC4;
    alpha = 0xFF;
    if (!(value < 0)) {
        alpha = 0;
        if (!(D_800CA560[1] < value)) {
            alpha = 0xFF;
            if (!(value < 0)) {
                alpha = ~(s32)(value * D_800CA568);
            }
        }
    }
    color[3] = alpha;
    func_80293100(arg0, color, 0, 0, D_800E28D0, *((&D_800E28D0) + 1));
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53A4_4 = 1.0f;
const float unbake_rodata_800C53A8_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA564_4 = 1.0f;
const float unbake_rodata_800CA568_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5724_4 = 1.0f;
const float unbake_rodata_800C5728_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5764_4 = 1.0f;
const float unbake_rodata_800C5768_4 = 255.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5478_4 = 1.0f;
const float unbake_rodata_800C547C_4 = 255.0f;
#endif
