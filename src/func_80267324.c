#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Params {
    s16 unk0;
    s16 value;
} Params;

typedef struct Object {
    u8 type;
    u8 pad1[0x17];
    s32 *kind;
    u8 pad1C[0xB4];
    s32 value;
} Object;

extern f32 D_800C9514;
extern f32 D_800C9518;
extern f32 D_800C951C;
extern s32 D_80146894;

extern s32 func_8025DEE0(s32 arg0, Vec3 arg1, s32 arg4, s32 arg5,
                         f32 arg6);

void func_80267324(s32 arg0, Object *arg1, s32 arg2, Vec3 arg3,
                   Params arg6) {
    s32 *global = &D_80146894;
    s32 selected;
    f32 scale;

    scale = D_800C9514;
    selected = -1;
    if (global[0] != 0) {
        return;
    }

    if (arg1 != 0) {
        switch (arg1->type) {
        case 1:
            if (*arg1->kind == arg1->type) {
                if (global[-371] & 0x40) {
                    scale = D_800C9518;
                } else if (global[-371] & 0x20) {
                    scale = D_800C951C;
                }
            }
            selected = (s32)arg1;
            break;
        case 0:
            selected = arg1->value;
            break;
        case 2:
            selected = (s32)arg1;
            break;
        }
    }

    func_8025DEE0(arg6.value, arg3, 0, selected, scale);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4354_4 = 1.0f;
const float unbake_rodata_800C4358_4 = 2.5f;
const float unbake_rodata_800C435C_4 = 0.349999994f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9514_4 = 1.0f;
const float unbake_rodata_800C9518_4 = 2.5f;
const float unbake_rodata_800C951C_4 = 0.349999994f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C46D4_4 = 1.0f;
const float unbake_rodata_800C46D8_4 = 2.5f;
const float unbake_rodata_800C46DC_4 = 0.349999994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4714_4 = 1.0f;
const float unbake_rodata_800C4718_4 = 2.5f;
const float unbake_rodata_800C471C_4 = 0.349999994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4424_4 = 1.0f;
const float unbake_rodata_800C4428_4 = 2.5f;
const float unbake_rodata_800C442C_4 = 0.349999994f;
#endif
