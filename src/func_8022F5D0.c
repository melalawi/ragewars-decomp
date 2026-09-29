#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Quat {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct Matrix {
    f32 m[16];
} Matrix;

extern void *D_800D052C[];
extern s32 D_800CF280;
extern s32 D_800CF284;
extern s32 D_800CF288;

extern void func_8027200C(void *, void *, f32);
extern void func_80272D20(void *, s32, s32, s32);
extern void func_80273340(char *, f32 *);
extern void func_80226DAC(char *, Matrix *);
extern void func_80226C3C(char *object, Quat *output);
extern void func_802742B4(void *, void *);
extern void func_802734B8(char *, f32, f32, f32);
extern void func_80273DDC(void *);
extern void func_8026F690(void *, void *, void *);

typedef struct func_8022F5D0_S1 func_8022F5D0_S1;
typedef struct func_8022F5D0_S2 func_8022F5D0_S2;
typedef union func_8022F5D0_S2_U5DC { s32 v0; char* v1; } func_8022F5D0_S2_U5DC;
struct func_8022F5D0_S1 {
    char pad0[0x50];
    Vec3 unk50;
    char pad50[0x1D8 - 0x50 - sizeof(Vec3)];
    char* unk1D8;
};
struct func_8022F5D0_S2 {
    char pad0[0x5DC];
    func_8022F5D0_S2_U5DC unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(func_8022F5D0_S2_U5DC)];
    s16 unk62E;
};

void func_8022F5D0(char *arg0) {
    Vec3 sp10;
    Matrix sp20;
    Vec3 sp60;
    Vec3 sp70;
    Matrix sp80;
    Matrix spC0;
    Quat sp100;
    char *object;
    char *orientation;

    object = ((func_8022F5D0_S1 *)(arg0))->unk1D8;
    sp70 = *(Vec3 *)(D_800D052C[((func_8022F5D0_S2 *)(object))->unk62E] + 0x38);
    if (D_800CF280 != 0) {
        sp70.x = -sp70.x;
    }
    if (D_800CF284 != 0) {
        sp70.y = -sp70.y;
    }
    if (D_800CF288 != 0) {
        sp70.z = -sp70.z;
    }
    func_8027200C(&sp60, &((func_8022F5D0_S1 *)(arg0))->unk50, 0.1f);
    func_80272D20(&sp80, *(s32 *)&sp60.x, *(s32 *)&sp60.y, *(s32 *)&sp60.z);
    func_8027200C(&sp70, &sp70, -10.24f);
    if (((func_8022F5D0_S2 *)(object))->unk5DC.v0 != 0) {
        func_80273340(((func_8022F5D0_S2 *)(object))->unk5DC.v1 + 0x160, &sp10);
        func_802742B4((Quat *)(((func_8022F5D0_S2 *)(object))->unk5DC.v1 + 0x140),
                      &sp20);
    } else {
        func_80226DAC(object, &spC0);
        func_80226C3C(object, &sp100);
        func_80273340((char *)&spC0, &sp10);
        func_802742B4(&sp100, &sp20);
    }
    orientation = arg0 + 0x74;
    func_802734B8(&sp80, sp70.x, sp70.y, sp70.z);
    func_80273DDC(&sp80);
    func_8026F690((Matrix *)orientation, &sp80, &sp20);
    func_802734B8((Matrix *)orientation, sp10.x, sp10.y, sp10.z);
}
