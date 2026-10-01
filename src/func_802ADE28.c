#include "basetypes.h"

extern f32 D_800CB468;
extern f32 D_800CB46C;
extern char D_2AE1A4;
extern char D_2AE254;
extern char D_80145088;
extern void func_802A7FA8(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5, s32 arg6, void *arg7, void *arg8);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80237E70(void *, void *, void *);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_8025E13C(s32 arg0);

extern void *jtbl_800CB448[];

typedef struct func_802ADE28_S1 func_802ADE28_S1;
typedef struct func_802ADE28_S2 func_802ADE28_S2;
typedef struct func_802ADE28_S3 func_802ADE28_S3;
typedef struct func_802ADE28_S4 func_802ADE28_S4;
typedef struct func_802ADE28_S5 func_802ADE28_S5;
struct func_802ADE28_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_802ADE28_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_802ADE28_S3 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x6 - 0x4 - sizeof(u16)];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
};
struct func_802ADE28_S4 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5DC - 0x10 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x670 - 0x5DC - sizeof(void*)];
    f32 unk670;
    char pad670[0x674 - 0x670 - sizeof(f32)];
    f32 unk674;
    char pad674[0x678 - 0x674 - sizeof(f32)];
    f32 unk678;
    char pad678[0xD40 - 0x678 - sizeof(f32)];
    char unkD40;
};
struct func_802ADE28_S5 {
    char pad0[0xC];
    f32 unkC;
};

/** Apply a scripted effect command and its optional sound callbacks. */
s32 func_802ADE28(void *arg0, void *arg1, void *arg2) {
    void *resource;
    char *state_value;
    s32 sound;
    s32 callback;
    s16 command;

    state_value = &((func_802ADE28_S2 *)(((func_802ADE28_S1 *)(arg2))->unk18))->unk14;
    command = ((func_802ADE28_S3 *)(arg1))->unk4 - 0x708;
    {
        static void *sw_command_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_command_0, &&sw_command_1, &&sw_command_2, &&sw_command_3, &&sw_command_7, &&sw_command_default
        };
        s32 sw_command_value = command;
        if ((unsigned int)sw_command_value > 7) {
            goto sw_command_default;
        }
        goto *jtbl_800CB448[sw_command_value];
    }
    do {
    sw_command_0:
        ((func_802ADE28_S4 *)(arg0))->unk670 = D_800CB468;
        break;
    sw_command_1:
        ((func_802ADE28_S4 *)(arg0))->unk674 = D_800CB46C;
        break;
    sw_command_2:
    sw_command_3:
        ((func_802ADE28_S4 *)(arg0))->unk678 += ((func_802ADE28_S5 *)(state_value))->unkC;
        break;
    sw_command_7:
        func_802A7FA8(&((func_802ADE28_S4 *)(arg0))->unkD40, 1, 0, 0x7FD,
                       0, 0, 0, &D_2AE1A4, &D_2AE254);
        break;
    
    sw_command_default:;
    } while (0);

    resource = *(void **)arg1;
    sound = ((func_802ADE28_S3 *)(arg1))->unk6;
    callback = ((func_802ADE28_S3 *)(arg1))->unk8;
    if (((func_802ADE28_S4 *)(arg0))->unk5DC != 0) {
        func_8023919C(((func_802ADE28_S4 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E70(&D_80145088,
                          ((func_802ADE28_S4 *)(arg0))->unk5DC,
                          *(void **)resource);
        }
    }
    if (sound != 0) {
        func_8025DE74(sound,
                      ((func_802ADE28_S4 *)(arg0))->unk8,
                      ((func_802ADE28_S4 *)(arg0))->unkC,
                      ((func_802ADE28_S4 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E13C(callback);
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C61E8_20[] = {0x002ACDC0U, 0x002ACDD0U, 0x002ACDE0U, 0x002ACDE0U, 0x002ACE2CU, 0x002ACE2CU, 0x002ACE2CU, 0x002ACDF4U};
const float unbake_rodata_800C6208_4 = 120.0f;
const float unbake_rodata_800C620C_4 = 120.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB448_20[] = {0x002ADE80U, 0x002ADE90U, 0x002ADEA0U, 0x002ADEA0U, 0x002ADEECU, 0x002ADEECU, 0x002ADEECU, 0x002ADEB4U};
const float unbake_rodata_800CB468_4 = 120.0f;
const float unbake_rodata_800CB46C_4 = 120.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C62B8_20[] = {0x002ACE90U, 0x002ACEA0U, 0x002ACEB0U, 0x002ACEB0U, 0x002ACEFCU, 0x002ACEFCU, 0x002ACEFCU, 0x002ACEC4U};
const float unbake_rodata_800C62D8_4 = 120.0f;
const float unbake_rodata_800C62DC_4 = 120.0f;
#endif
