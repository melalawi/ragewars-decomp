#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern char D_800C7CB0;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_8024B4E4(void *arg0, s32 arg1);
extern void func_8024ADC0(void *arg0, Vec3 *arg1, s32 arg2);
extern void func_802536F4(s32 arg0, s32 arg1);

typedef struct func_80228774_S1 func_80228774_S1;
typedef struct func_80228774_S2 func_80228774_S2;
typedef struct func_80228774_S3 func_80228774_S3;
typedef struct func_80228774_S4 func_80228774_S4;
typedef struct func_80228774_S5 func_80228774_S5;
typedef struct func_80228774_S6 func_80228774_S6;
typedef struct func_80228774_S7 func_80228774_S7;
struct func_80228774_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_80228774_S2 {
    char pad0[0xC4];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
    char pad100[0x2E8 - 0x100 - sizeof(s32)];
    char unk2E8;
    char pad2E8[0x5DC - 0x2E8 - sizeof(char)];
    void* unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(void*)];
    void* unk16E0;
};
struct func_80228774_S3 {
    char pad0[0x24];
    s32 unk24;
};
struct func_80228774_S4 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0xC4 - 0x10 - sizeof(f32)];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void* unk1D8;
};
struct func_80228774_S5 {
    char pad0[0x5DC];
    void* unk5DC;
};
struct func_80228774_S6 {
    char pad0[0x128];
    f32 unk128;
};
struct func_80228774_S7 {
    char pad0[0x130];
    f32 unk130;
};

void func_80228774(void *arg0, void *arg1) {
    void *node;

    node = ((func_80228774_S1 *)(arg0))->unk20;
    if (node != 0) {
        do {
            void *owner;

            owner = ((func_80228774_S2 *)(node))->unk5DC;
            if (owner != 0) {
                if (owner == arg1) {
                    void *actor;

                    actor = &((func_80228774_S2 *)(node))->unk2E8;
                    if (((func_80228774_S3 *)(owner))->unk24 == 0) {
                        if (((func_80228774_S4 *)(actor))->unk100 & 0x40000) {
                            void *resource;

                            resource = func_802518DC(
                                0, ((func_80228774_S4 *)(actor))->unkC4,
                                ((func_80228774_S4 *)(actor))->unkC4,
                                ((func_80228774_S4 *)(actor))->unkD0,
                                4, 0, 0, &D_800C7CB0, 1);
                            if (resource != 0) {
                                void *linked;
                                void *temp;

                                linked = ((func_80228774_S4 *)(actor))->unk1D8;
                                func_8024B4E4(actor, (s32)func_8028FD94(*(void **)resource, 0));
                                temp = ((func_80228774_S5 *)(linked))->unk5DC;
                                if (temp != 0) {
                                    Vec3 delta;

                                    delta.x = ((func_80228774_S6 *)(temp))->unk128 -
                                              ((func_80228774_S4 *)(actor))->unk8;
                                    delta.y = 0.0f;
                                    delta.z = ((func_80228774_S7 *)(((func_80228774_S5 *)(linked))->unk5DC))->unk130 -
                                              ((func_80228774_S4 *)(actor))->unk10;
                                    func_8024ADC0(actor, &delta, 1);
                                }
                                func_802536F4(0, (s32)resource);
                            }
                        }
                    } else {
                        goto generic;
                    }
                } else if (owner != 0) {
generic:
                    if (((func_80228774_S2 *)(node))->unk100 & 0x40000) {
                        void *resource;

                        resource = func_802518DC(
                            0, ((func_80228774_S2 *)(node))->unkC4,
                            ((func_80228774_S2 *)(node))->unkC4,
                            ((func_80228774_S2 *)(node))->unkD0,
                            4, 0, 0, &D_800C7CB0, 1);
                        if (resource != 0) {
                            func_8024B4E4(node, (s32)func_8028FD94(*(void **)resource, 0));
                            func_802536F4(0, (s32)resource);
                        }
                    }
                }
            }
            node = ((func_80228774_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C52C4_4 = 10.2399998f;
const float unbake_rodata_800C52C8_4 = 1.0f;
const float unbake_rodata_800C52CC_4 = 81.9199982f;
const float unbake_rodata_800C52D0_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA484_4 = 10.2399998f;
const float unbake_rodata_800CA488_4 = 1.0f;
const float unbake_rodata_800CA48C_4 = 81.9199982f;
const float unbake_rodata_800CA490_4 = 0.5f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C53C0_C[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C518C_4 = 65536.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C52FC_4 = 3.40282347e+38f;
#endif
