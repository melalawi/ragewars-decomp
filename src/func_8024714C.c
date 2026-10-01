#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 w[8];
} CollisionInfo;

typedef struct {
    u8 *active0;
} CollisionState;

extern CollisionInfo D_801043D8;
extern CollisionState D_801041F0;
extern s32 func_80243A80(void *arg0, Vec3 arg1, CollisionInfo *arg2);
extern void func_80278E74(s32 arg0, s32 arg1, void *arg2);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

typedef struct func_8024714C_S1 func_8024714C_S1;
typedef struct func_8024714C_S2 func_8024714C_S2;
typedef struct func_8024714C_S3 func_8024714C_S3;
typedef union func_8024714C_S3_U8 { f32 v0; s32 v1; } func_8024714C_S3_U8;
struct func_8024714C_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x14 - 0x8 - sizeof(Vec3)];
    u16* unk14;
    char pad14[0x18 - 0x14 - sizeof(u16*)];
    s32* unk18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    s32 unk100;
    char pad100[0x1A0 - 0x100 - sizeof(s32)];
    void* unk1A0;
    char pad1A0[0x1F4 - 0x1A0 - sizeof(void*)];
    u16* unk1F4;
    char pad1F4[0x238 - 0x1F4 - sizeof(u16*)];
    u16 unk238;
};
struct func_8024714C_S2 {
    char pad0[0xC];
    CollisionInfo* unkC;
};
struct func_8024714C_S3 {
    char pad0[0x8];
    func_8024714C_S3_U8 unk8;
};

void func_8024714C(char *arg0, Vec3 *arg1) {
    CollisionInfo *collision;
    u16 *old_contact;
    s32 collided;
    f32 saved;
    void (*callback)(void *, void *, CollisionInfo *);

    if ((((func_8024714C_S1 *)(arg0))->unk100 & 0x10000) && ((func_8024714C_S1 *)(arg0))->unk1A0 != 0) {
        collision = ((func_8024714C_S2 *)(((func_8024714C_S1 *)(arg0))->unk1A0))->unkC;
        if (collision == 0) {
            collision = &D_801043D8;
        }
        saved = ((func_8024714C_S3 *)(collision))->unk8.v0;
        if ((u32)(((func_8024714C_S1 *)(arg0))->unk238 - 0x2B0C) < 8) {
            ((func_8024714C_S3 *)(collision))->unk8.v1 = 0;
        }
        old_contact = ((func_8024714C_S1 *)(arg0))->unk14;
        collided = func_80243A80(arg0, *arg1, collision);
        if (old_contact != ((func_8024714C_S1 *)(arg0))->unk14) {
            ((func_8024714C_S1 *)(arg0))->unk1F4 = old_contact;
        }
        ((func_8024714C_S3 *)(collision))->unk8.v0 = saved;
        if (old_contact != 0 && ((func_8024714C_S1 *)(arg0))->unk14 != 0 &&
                *old_contact != *((func_8024714C_S1 *)(arg0))->unk14 &&
                *((func_8024714C_S1 *)(arg0))->unk18 == 1) {
            func_80278E74((s32)old_contact, 0x80, arg0);
            func_80278E74((s32)((func_8024714C_S1 *)(arg0))->unk14, 0x40, arg0);
        }
        if (collided != 0 && !(((func_8024714C_S1 *)(arg0))->unk100 & 0x300000) &&
                *((func_8024714C_S1 *)(arg0))->unk18 == 1 && D_801041F0.active0 != 0 &&
                *D_801041F0.active0 == 1) {
            func_80278DE8(D_801041F0.active0, 0x20, arg0);
        }
        callback = *(void (**)(void *, void *, CollisionInfo *))((char *)arg0 + 0x284);
        if (callback != 0) {
            callback(arg0, arg0 + 0x170, collision);
        }
    } else {
        ((func_8024714C_S1 *)(arg0))->unk8 = *arg1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DF308_4[] = {0x00, 0x00, 0x00, 0x02};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E42D4_2[] = {0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EDEC8_E4[] = {0x00425CF8U, 0x00425D18U, 0x004261A8U, 0x00425D70U, 0x00425D90U, 0x00425DB0U, 0x00425DD0U, 0x00425DF0U, 0x00425E10U, 0x00425E30U, 0x00425E50U, 0x00425E70U, 0x00425E90U, 0x00425EB0U, 0x00425ED0U, 0x00425EF0U, 0x00425F10U, 0x00425F30U, 0x00425F50U, 0x00425F70U, 0x00425F90U, 0x00425FB0U, 0x00425FD0U, 0x00425FF0U, 0x00426010U, 0x00426030U, 0x00426050U, 0x00426070U, 0x00426090U, 0x004260B0U, 0x004260D0U, 0x004261A8U, 0x004260F0U, 0x00426110U, 0x004261A8U, 0x004261A8U, 0x00426130U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x00426170U, 0x00426190U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x00426150U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8D88_1C[] = {0x0041FBD0U, 0x0041FC58U, 0x0041FCC0U, 0x0041FCD0U, 0x0041FD64U, 0x0041FDACU, 0x0041FDFCU};
const float unbake_rodata_800E8DA4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8DA8_4 = 0.00333333341f;
const float unbake_rodata_800E8DAC_4 = 70.0f;
const float unbake_rodata_800E8DB0_4 = 170.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DE300_20[] = {0x0043DCCCU, 0x0043DCFCU, 0x0043DD2CU, 0x0043DD5CU, 0x0043DD8CU, 0x0043DDBCU, 0x0043DDECU, 0x0043DE1CU};
#endif
