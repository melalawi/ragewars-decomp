#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 func_8024E454(void *arg0);
extern f32 func_8024D388(void *);
extern f32 func_8024D274(void *arg0);
extern f32 func_8024E410(void *);
extern s32 func_8024490C(void *arg0, Vec3 arg1, Vec3 arg2, void *arg3,
                         f32 arg4, f32 arg5, f32 arg6, f32 arg7);
extern char D_801040F0;
extern char D_80103FCC[];

typedef struct func_8022DE48_S1 func_8022DE48_S1;
typedef struct func_8022DE48_S2 func_8022DE48_S2;
typedef struct func_8022DE48_S3 func_8022DE48_S3;
typedef struct func_8022DE48_S4 func_8022DE48_S4;
typedef union func_8022DE48_S3_U8 { f32 v0; Vec3 v1; } func_8022DE48_S3_U8;
struct func_8022DE48_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x6EC - 0x18 - sizeof(void*)];
    f32 unk6EC;
    char pad6EC[0x6F4 - 0x6EC - sizeof(f32)];
    f32 unk6F4;
    char pad6F4[0x718 - 0x6F4 - sizeof(f32)];
    f32 unk718;
    char pad718[0x720 - 0x718 - sizeof(f32)];
    f32 unk720;
    char pad720[0x780 - 0x720 - sizeof(f32)];
    f32 unk780;
};
struct func_8022DE48_S2 {
    char pad0[0xF4];
    f32 unkF4;
};
struct func_8022DE48_S3 {
    char pad0[0x8];
    func_8022DE48_S3_U8 unk8;
};
struct func_8022DE48_S4 {
    char pad0[0xE8];
    f32 unkE8;
};

void func_8022DE48(void *arg0, void *arg1) {
    Vec3 next;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 var_f23;

    var_f23 = (((((func_8022DE48_S2 *)(((func_8022DE48_S1 *)(arg0))->unk18))->unkF4 -
                    ((func_8022DE48_S1 *)(arg0))->unk780) -
                   ((func_8022DE48_S1 *)(arg0))->unk718) -
                  ((func_8022DE48_S1 *)(arg0))->unk720) -
                 ((func_8022DE48_S1 *)(arg0))->unk6F4;
    if (var_f23 > 0.0f) {
        temp_f22 = func_8024E454(arg1);
        temp_f21 = func_8024D388(arg1);
        temp_f20 = func_8024D274(arg1);
        temp_f0 = func_8024E410(arg1);
        next.x = ((func_8022DE48_S3 *)(arg1))->unk8.v0;
        next.y = ((func_8022DE48_S3 *)(arg1))->unk8.v1.y + var_f23;
        next.z = ((func_8022DE48_S3 *)(arg1))->unk8.v1.z;
        if (func_8024490C(arg1, ((func_8022DE48_S3 *)(arg1))->unk8.v1, next,
                           &D_801040F0, temp_f22, temp_f21, temp_f20,
                           temp_f0) != 0) {
            temp_f1 = ((func_8022DE48_S4 *)(*(void **)D_80103FCC))->unkE8 -
                      ((func_8022DE48_S3 *)(arg1))->unk8.v1.y;
            ((func_8022DE48_S1 *)(arg0))->unk6EC -= var_f23 - temp_f1;
            var_f23 = temp_f1;
        }
    }
    ((func_8022DE48_S1 *)(arg0))->unk6F4 += var_f23;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CB294_4[] = {0x00, 0x23, 0x9F, 0xAC};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D0588_10[] = {0x0B, 0xEA, 0x0B, 0xEB, 0x0B, 0xEC, 0xFF, 0xFF, 0x0B, 0xED, 0x0B, 0xEE, 0x0B, 0xEF, 0x0B, 0xF0};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CA04C_2C[] = {0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CA7E8_4[] = {0x00, 0x00, 0x04, 0x62};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C9AEC_8[] = {0x00, 0x22, 0xC8, 0x94, 0x00, 0x22, 0x40, 0x9C};
#endif
