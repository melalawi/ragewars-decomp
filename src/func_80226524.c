#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Scratch10 {
    s32 w[4];
} Scratch10;

extern char D_800CE7E4;
extern f32 D_800C7C38[];
extern f32 D_800C7C40;
extern f32 D_800C7C44;
extern f32 D_800C7C48;
extern f32 D_800C7C4C;
extern f32 D_800C7C50;
extern f32 D_800C7C54;
extern void **D_80103FCC;
extern char D_80103FD0;
extern f32 D_800CF230;

extern void func_802231B0(void *, void *, void *);
extern void func_8021CF04(Scratch10 *, void *, void **, Scratch10 *);
extern f32 func_80272768(f32 *, f32 *);
extern s32 func_80244494(void *, Vec3, Vec3, void *);
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_80271B18(Vec3 *);
extern void func_80274090(f32 *);
extern void func_802748E0(f32 *, f32, f32);

typedef struct func_80226524_S1 func_80226524_S1;
typedef struct func_80226524_S2 func_80226524_S2;
typedef struct func_80226524_S3 func_80226524_S3;
typedef union func_80226524_S1_U8 { f32 v0; Vec3 v1; } func_80226524_S1_U8;
typedef union func_80226524_S2_U8 { f32 v0; Vec3 v1; } func_80226524_S2_U8;
struct func_80226524_S1 {
    char pad0[0x8];
    func_80226524_S1_U8 unk8;
    char pad8[0x1210 - 0x8 - sizeof(func_80226524_S1_U8)];
    s32 unk1210;
};
struct func_80226524_S2 {
    char pad0[0x8];
    func_80226524_S2_U8 unk8;
};
struct func_80226524_S3 {
    char pad0[0x6C];
    f32 unk6C;
};

void func_80226524(void *arg0, void *arg1) {
    Scratch10 sp20;
    Scratch10 sp30;
    Vec3 sp40;
    void *sp50;
    f32 sp54;
    f32 *position;
    f32 temp_f1;

    func_802231B0(arg0, arg1, &D_800CE7E4);
    if (((func_80226524_S1 *)(arg0))->unk1210 != 0) {
        func_8021CF04(&sp20, arg0, &sp50, &sp30);
        if (sp50 != 0) {
            position = &((func_80226524_S1 *)(arg0))->unk8.v0;
            if (!(D_800C7C38[1] < func_80272768(position, &((func_80226524_S2 *)(sp50))->unk8.v0))) {
                if (func_80244494(arg0, ((func_80226524_S1 *)(arg0))->unk8.v1,
                                     ((func_80226524_S2 *)(sp50))->unk8.v1,
                                     &D_80103FD0) == 0 ||
                    *D_80103FCC == sp50) {
                    func_80271FD8(&sp40, &((func_80226524_S2 *)(sp50))->unk8.v1, (Vec3 *)position);
                    sp54 = func_80271B18(&sp40);
                    func_80274090(&sp54);
                    func_80274090(&((func_80226524_S3 *)(arg1))->unk6C);
                    temp_f1 = ((func_80226524_S3 *)(arg1))->unk6C;
                    if (D_800C7C40 < temp_f1) {
                        if (sp54 < D_800C7C44) {
                            sp54 += D_800C7C48;
                        } else {
                            goto positive;
                        }
                    } else {
positive:
                        temp_f1 = sp54;
                        if (D_800C7C4C < temp_f1 &&
                            ((func_80226524_S3 *)(arg1))->unk6C < D_800C7C50) {
                            ((func_80226524_S3 *)(arg1))->unk6C =
                                ((func_80226524_S3 *)(arg1))->unk6C + D_800C7C54;
                        }
                    }
                    func_802748E0(&((func_80226524_S3 *)(arg1))->unk6C, sp54, D_800CF230);
                }
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2A7C_4 = 1024.0f;
const float unbake_rodata_800C2A80_4 = 1.57079637f;
const float unbake_rodata_800C2A84_4 = (-1.57079637f);
const float unbake_rodata_800C2A88_4 = 6.28318548f;
const float unbake_rodata_800C2A8C_4 = 1.57079637f;
const float unbake_rodata_800C2A90_4 = (-1.57079637f);
const float unbake_rodata_800C2A94_4 = 6.28318548f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7C3C_4 = 1024.0f;
const float unbake_rodata_800C7C40_4 = 1.57079637f;
const float unbake_rodata_800C7C44_4 = (-1.57079637f);
const float unbake_rodata_800C7C48_4 = 6.28318548f;
const float unbake_rodata_800C7C4C_4 = 1.57079637f;
const float unbake_rodata_800C7C50_4 = (-1.57079637f);
const float unbake_rodata_800C7C54_4 = 6.28318548f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2DEC_4 = 1024.0f;
const float unbake_rodata_800C2DF0_4 = 1.57079637f;
const float unbake_rodata_800C2DF4_4 = (-1.57079637f);
const float unbake_rodata_800C2DF8_4 = 6.28318548f;
const float unbake_rodata_800C2DFC_4 = 1.57079637f;
const float unbake_rodata_800C2E00_4 = (-1.57079637f);
const float unbake_rodata_800C2E04_4 = 6.28318548f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2E2C_4 = 1024.0f;
const float unbake_rodata_800C2E30_4 = 1.57079637f;
const float unbake_rodata_800C2E34_4 = (-1.57079637f);
const float unbake_rodata_800C2E38_4 = 6.28318548f;
const float unbake_rodata_800C2E3C_4 = 1.57079637f;
const float unbake_rodata_800C2E40_4 = (-1.57079637f);
const float unbake_rodata_800C2E44_4 = 6.28318548f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2B4C_4 = 1024.0f;
const float unbake_rodata_800C2B50_4 = 1.57079637f;
const float unbake_rodata_800C2B54_4 = (-1.57079637f);
const float unbake_rodata_800C2B58_4 = 6.28318548f;
const float unbake_rodata_800C2B5C_4 = 1.57079637f;
const float unbake_rodata_800C2B60_4 = (-1.57079637f);
const float unbake_rodata_800C2B64_4 = 6.28318548f;
#endif
