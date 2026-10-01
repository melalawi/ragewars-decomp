#include "basetypes.h"

extern f32 D_800C8E5C;
extern f32 D_800C8E60;
extern f32 D_800C8E64;

extern void *jtbl_800C8E30[];

typedef struct func_8024E2EC_S1 func_8024E2EC_S1;
typedef struct func_8024E2EC_S2 func_8024E2EC_S2;
typedef struct func_8024E2EC_S3 func_8024E2EC_S3;
typedef union func_8024E2EC_S3_U18 { u16 v0; f32 v1; } func_8024E2EC_S3_U18;
struct func_8024E2EC_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024E2EC_S2 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x2C - 0x18 - sizeof(f32)];
    f32 unk2C;
    char pad2C[0xEC - 0x2C - sizeof(f32)];
    f32 unkEC;
};
struct func_8024E2EC_S3 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    func_8024E2EC_S3_U18 unk18;
    char pad18[0x1C - 0x18 - sizeof(func_8024E2EC_S3_U18)];
    f32 unk1C;
};

/** Return the vertical offset selected by the actor's current state. */
f32 func_8024E2EC(void *arg0) {
    void *state;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_11, &&sw_state_1, &&sw_state_2, &&sw_state_5, &&sw_state_8, &&sw_state_default
        };
        s32 state_value = *(s32 *)((func_8024E2EC_S1 *)(arg0))->unk18;
        s32 sw_state_value = state_value - 1;
        if ((unsigned int)sw_state_value > 10) {
            goto sw_state_default;
        }
        goto *jtbl_800C8E30[sw_state_value];
    }
    do {
    sw_state_11:
        return ((func_8024E2EC_S2 *)(((func_8024E2EC_S1 *)(arg0))->unk18))->unkEC;
    sw_state_1:
        return ((func_8024E2EC_S2 *)(((func_8024E2EC_S1 *)(arg0))->unk18))->unk2C;
    sw_state_2:
        state = ((func_8024E2EC_S1 *)(arg0))->unk18;
        if (((func_8024E2EC_S3 *)(state))->unk18.v0 == 0) {
            return D_800C8E5C;
        }
        return ((func_8024E2EC_S3 *)(state))->unk1C;
    sw_state_5:
        return ((func_8024E2EC_S2 *)(((func_8024E2EC_S1 *)(arg0))->unk18))->unk18;
    sw_state_8:
        state = ((func_8024E2EC_S1 *)(arg0))->unk18;
        if ((((func_8024E2EC_S3 *)(state))->unk14 & 1) != 0) {
            return D_800C8E60;
        }
        return ((func_8024E2EC_S3 *)(state))->unk18.v1;
    sw_state_default:
        return D_800C8E64;
    
    } while (0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C3C70_2C[] = {0x0024E318U, 0x0024E328U, 0x0024E394U, 0x0024E394U, 0x0024E354U, 0x0024E394U, 0x0024E394U, 0x0024E364U, 0x0024E394U, 0x0024E394U, 0x0024E308U};
const float unbake_rodata_800C3C9C_4 = 256.0f;
const float unbake_rodata_800C3CA0_4 = 81.9199982f;
const float unbake_rodata_800C3CA4_4 = 61.4399986f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C8E30_2C[] = {0x0024E328U, 0x0024E338U, 0x0024E3A4U, 0x0024E3A4U, 0x0024E364U, 0x0024E3A4U, 0x0024E3A4U, 0x0024E374U, 0x0024E3A4U, 0x0024E3A4U, 0x0024E318U};
const float unbake_rodata_800C8E5C_4 = 256.0f;
const float unbake_rodata_800C8E60_4 = 81.9199982f;
const float unbake_rodata_800C8E64_4 = 61.4399986f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C3FF0_2C[] = {0x0024E348U, 0x0024E358U, 0x0024E3C4U, 0x0024E3C4U, 0x0024E384U, 0x0024E3C4U, 0x0024E3C4U, 0x0024E394U, 0x0024E3C4U, 0x0024E3C4U, 0x0024E338U};
const float unbake_rodata_800C401C_4 = 256.0f;
const float unbake_rodata_800C4020_4 = 81.9199982f;
const float unbake_rodata_800C4024_4 = 61.4399986f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C4030_2C[] = {0x0024E378U, 0x0024E388U, 0x0024E3F4U, 0x0024E3F4U, 0x0024E3B4U, 0x0024E3F4U, 0x0024E3F4U, 0x0024E3C4U, 0x0024E3F4U, 0x0024E3F4U, 0x0024E368U};
const float unbake_rodata_800C405C_4 = 256.0f;
const float unbake_rodata_800C4060_4 = 81.9199982f;
const float unbake_rodata_800C4064_4 = 61.4399986f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C3D40_2C[] = {0x0024E338U, 0x0024E348U, 0x0024E3B4U, 0x0024E3B4U, 0x0024E374U, 0x0024E3B4U, 0x0024E3B4U, 0x0024E384U, 0x0024E3B4U, 0x0024E3B4U, 0x0024E328U};
const float unbake_rodata_800C3D6C_4 = 256.0f;
const float unbake_rodata_800C3D70_4 = 81.9199982f;
const float unbake_rodata_800C3D74_4 = 61.4399986f;
#endif
