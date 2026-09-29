#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern u8 D_801462E1;
extern f32 D_800C8FD0;
extern s32 D_800D0960;
extern char D_80145088;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);
extern void func_8025BD20(void **arg0);
extern void func_80259460(void *arg0);
extern void func_8025CCB0(void *arg0);
extern void func_8025D948(void *arg0);
extern void func_8025D470(void *arg0);
extern s32 func_802934DC(void);
extern void *func_80239594(s32 *arg0, Vec3 *arg1);
extern s32 func_80257DF4(void *, s32, Vec3, s32, s32);

typedef struct func_8025844C_S1 func_8025844C_S1;
typedef struct func_8025844C_S2 func_8025844C_S2;
typedef struct func_8025844C_S3 func_8025844C_S3;
typedef struct func_8025844C_S4 func_8025844C_S4;
struct func_8025844C_S1 {
    char pad0[0x104];
    s32 unk104;
    char pad104[0x134 - 0x104 - sizeof(s32)];
    s32 unk134;
    char pad134[0x1DB8 - 0x134 - sizeof(s32)];
    void* unk1DB8;
    char pad1DB8[0x2BA0 - 0x1DB8 - sizeof(void*)];
    f32 unk2BA0;
    char pad2BA0[0x2BA4 - 0x2BA0 - sizeof(f32)];
    f32 unk2BA4;
    char pad2BA4[0x2BA8 - 0x2BA4 - sizeof(f32)];
    f32 unk2BA8;
    char pad2BA8[0x2BB0 - 0x2BA8 - sizeof(f32)];
    s32 unk2BB0;
    char pad2BB0[0x2BB4 - 0x2BB0 - sizeof(s32)];
    s32 unk2BB4;
};
struct func_8025844C_S2 {
    char pad0[0x1C];
    s32 unk1C;
};
struct func_8025844C_S3 {
    char pad0[0x1C];
    s32 unk1C;
};
struct func_8025844C_S4 {
    char pad0[0x128];
    Vec3 unk128;
};

s32 func_8025844C(void *arg0) {
    char *object = arg0;
    u8 *bytes = &D_801462E1;
    char *queue;
    u32 mask;
    s32 count;

    ((func_8025844C_S1 *)(object))->unk2BA0 = (f32)bytes[0] * D_800C8FD0;
    ((func_8025844C_S1 *)(object))->unk2BA4 = (f32)bytes[-1] * D_800C8FD0;
    ((func_8025844C_S1 *)(object))->unk2BA8 = (f32)bytes[1] * D_800C8FD0;
    queue = object + 0x110;
    ((func_8025844C_S1 *)(object))->unk2BB0 = bytes[-2];
    mask = func_802C2020();
    count = ((func_8025844C_S2 *)(queue))->unk1C + 1;
    ((func_8025844C_S2 *)(queue))->unk1C = count;
    if (count != 1) {
        func_802C2040(mask);
        func_802C0390(queue, 0, 1);
    } else {
        func_802C2040(mask);
    }

    func_8025BD20(&((func_8025844C_S1 *)(object))->unk1DB8);
    {
        char *queue2 = object + 0x110;
        u32 mask2 = func_802C2020();
        s32 count2 = ((func_8025844C_S3 *)(queue2))->unk1C - 1;

        ((func_8025844C_S3 *)(queue2))->unk1C = count2;
        if (count2 != 0) {
            func_802C2040(mask2);
            func_802C0510(queue2, 0, 1);
        } else {
            func_802C2040(mask2);
        }
    }

    func_80259460((char *)object + 0x138);
    func_8025CCB0((char *)object + 0x2BC0);
    queue = object + 0x1D64;
    func_8025D948(queue);
    func_8025D470(queue);

    if (D_800D0960 != 0 &&
        ((func_8025844C_S1 *)(object))->unk2BB4 != 0 &&
        func_802934DC() != 0 &&
        ((func_8025844C_S1 *)(object))->unk134 > 0) {
        Vec3 zero;
        void *result;
        Vec3 *vec;

        zero.z = 0.0f;
        zero.y = 0.0f;
        zero.x = 0.0f;
        result = func_80239594(&D_80145088, &zero);
        vec = &((func_8025844C_S4 *)(result))->unk128;
        if ((((func_8025844C_S1 *)(object))->unk104 & 3) == 0) {
            func_80257DF4(object, ((func_8025844C_S1 *)(object))->unk134, *vec, 0, -1);
        }
    }
    return ++((func_8025844C_S1 *)(object))->unk104;
}
