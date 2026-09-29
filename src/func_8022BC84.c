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

typedef struct func_8022BC84_S1 func_8022BC84_S1;
typedef struct func_8022BC84_S2 func_8022BC84_S2;
typedef struct func_8022BC84_S3 func_8022BC84_S3;
typedef struct func_8022BC84_S4 func_8022BC84_S4;
struct func_8022BC84_S1 {
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
struct func_8022BC84_S2 {
    char pad0[0x5DC];
    void* unk5DC;
};
struct func_8022BC84_S3 {
    char pad0[0x128];
    f32 unk128;
};
struct func_8022BC84_S4 {
    char pad0[0x130];
    f32 unk130;
};

void func_8022BC84(void *arg0, s32 arg1) {
    Vec3 sp28;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    if (((func_8022BC84_S1 *)(arg0))->unk100 & 0x40000) {
        temp_s1 = func_802518DC(0, ((func_8022BC84_S1 *)(arg0))->unkC4, ((func_8022BC84_S1 *)(arg0))->unkC4, ((func_8022BC84_S1 *)(arg0))->unkD0, 4, 0, 0, &D_800C7CB0, 1);
        if (temp_s1 != 0) {
            temp_s2 = ((func_8022BC84_S1 *)(arg0))->unk1D8;
            func_8024B4E4(arg0, (s32)func_8028FD94(*(void **)temp_s1, 0));
            if (arg1 != 0) {
                temp_v0 = ((func_8022BC84_S2 *)(temp_s2))->unk5DC;
                if (temp_v0 != 0) {
                    sp28.x = ((func_8022BC84_S3 *)(temp_v0))->unk128 - ((func_8022BC84_S1 *)(arg0))->unk8;
                    sp28.y = 0.0f;
                    sp28.z = ((func_8022BC84_S4 *)(((func_8022BC84_S2 *)(temp_s2))->unk5DC))->unk130 - ((func_8022BC84_S1 *)(arg0))->unk10;
                    func_8024ADC0(arg0, &sp28, arg1);
                }
            }
            func_802536F4(0, (s32)temp_s1);
        }
    }
}
