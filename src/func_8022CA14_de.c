#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"






extern s32 D_801371FC;
extern AudioState D_801427E0;

extern u8 *func_8024E6A0_de(void *arg0);
extern void func_8024E6D8_de(u8 *arg0, Vec3 *arg1);
extern void func_80271F34_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);














void func_8022CA14_de(void *arg0, void *arg1) {
    Vec3 vector;
    f32 scale;
    u8 *result;
    u8 state;
    s32 mode;
    AudioState *audio;

    scale = D_800C2D60_de;
    if (D_801371FC == 0x1DB1) {
        scale = ((func_802077F4_S2 *)(&D_800C2D60_de))->unk4;
    }
    ((func_8022CA04_S2 *)(arg1))->unk20 =
        scale * ((func_8022CA04_S3 *)(((func_8022CA04_S2 *)(arg1))->unk18))->unk20;
    result = func_8024E6A0_de(arg1);
    if (result != 0) {
        func_8024E6D8_de(result, &vector);
        func_80271F34_de(&((func_8022CA04_S4 *)(arg1))->unk1C,
                      &((func_8022CA04_S4 *)(arg1))->unk1C, &vector);
    }

    state = ((func_8020EA10_S3 *)(((func_8022CA04_S5 *)(arg0))->unk5D8))->unk8F;
    if (state == 1) {
        audio = &D_801427E0;
        if (audio->active != 0) {
            mode = audio->mode;
            switch (mode) {
        case 0:
            func_8025DE54_de(0x18A1,
                          ((func_8022CA04_S5 *)(arg0))->unk8,
                          ((func_8022CA04_S5 *)(arg0))->unkC,
                          ((func_8022CA04_S5 *)(arg0))->unk10,
                          (s32)((char *)arg0 + 8), -1);
            break;
        case 1:
            func_8025DE54_de(0x1969,
                          ((func_8022CA04_S5 *)(arg0))->unk8,
                          ((func_8022CA04_S5 *)(arg0))->unkC,
                          ((func_8022CA04_S5 *)(arg0))->unk10,
                          (s32)((char *)arg0 + 8), -1);
            break;
        case 2:
            func_8025DE54_de(0x1905,
                          ((func_8022CA04_S5 *)(arg0))->unk8,
                          ((func_8022CA04_S5 *)(arg0))->unkC,
                          ((func_8022CA04_S5 *)(arg0))->unk10,
                          (s32)((char *)arg0 + 8), -1);
            break;
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C90_4 = 389.119995f;
const float unbake_rodata_800C2C94_4 = 481.279999f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E50_4 = 389.119995f;
const float unbake_rodata_800C7E54_4 = 481.279999f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3004_4 = 389.119995f;
const float unbake_rodata_800C3008_4 = 481.279999f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3044_4 = 389.119995f;
const float unbake_rodata_800C3048_4 = 481.279999f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D60_4 = 389.119995f;
const float unbake_rodata_800C2D64_4 = 481.279999f;
#endif
