#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800CAF50;
extern void *func_802A6724(void *arg0, s32 arg1);
extern void func_80273340(char *object, f32 *output);
extern void func_8027335C(void *arg0, f32 *arg1);
extern void func_802702EC(void *arg0, f32 *arg1);
extern void func_80271FD8(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern f32 func_802BC380(f32);

typedef struct func_802A35C0_S1 func_802A35C0_S1;
typedef struct func_802A35C0_S2 func_802A35C0_S2;
typedef struct func_802A35C0_S3 func_802A35C0_S3;
typedef union func_802A35C0_S2_U10 { f32 v0; Vec3 v1; } func_802A35C0_S2_U10;
typedef union func_802A35C0_S2_UAC { s32 v0; f32 v1; } func_802A35C0_S2_UAC;
struct func_802A35C0_S1 {
    char pad0[0x8];
    char* unk8;
    char pad8[0x28 - 0x8 - sizeof(char*)];
    f32 unk28;
    char pad28[0x3C - 0x28 - sizeof(f32)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    char* unk40;
    char pad40[0x4C - 0x40 - sizeof(char*)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    s32 unk50;
};
struct func_802A35C0_S2 {
    char pad0[0x4];
    char* unk4;
    char pad4[0x8 - 0x4 - sizeof(char*)];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    func_802A35C0_S2_U10 unk10;
    char pad10[0x1C - 0x10 - sizeof(func_802A35C0_S2_U10)];
    f32 unk1C;
    char pad1C[0x28 - 0x1C - sizeof(f32)];
    f32 unk28;
    char pad28[0x68 - 0x28 - sizeof(f32)];
    f32 unk68;
    char pad68[0xA8 - 0x68 - sizeof(f32)];
    f32 unkA8;
    char padA8[0xAC - 0xA8 - sizeof(f32)];
    func_802A35C0_S2_UAC unkAC;
    char padAC[0xB0 - 0xAC - sizeof(func_802A35C0_S2_UAC)];
    s32 unkB0;
};
struct func_802A35C0_S3 {
    char pad0[0x10];
    Vec3 unk10;
    char pad10[0xAC - 0x10 - sizeof(Vec3)];
    f32 unkAC;
};

void *func_802A35C0(void *arg0, void *arg1, void *arg2) {
    Vec3 sp10;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f1;
    void *temp_s1;
    char *var_s0;
    char *temp_s2;

    temp_s2 = func_802A6724(arg0, (s32)arg1);
    var_s0 = temp_s2;
    if (temp_s2 != 0) {
        ((func_802A35C0_S1 *)(arg1))->unk50 = 0;
        ((func_802A35C0_S2 *)(var_s0))->unk8 = *(f32 *)(((func_802A35C0_S1 *)(arg1))->unk8 + 8);
        ((func_802A35C0_S2 *)(var_s0))->unkB0 = 0;
        func_80273340(arg2, &((func_802A35C0_S2 *)(var_s0))->unk10.v0);
        if (((func_802A35C0_S1 *)(arg1))->unk3C & 4) {
            func_8027335C(arg2, &((func_802A35C0_S2 *)(var_s0))->unk1C);
        } else {
            func_802702EC(arg2, &((func_802A35C0_S2 *)(var_s0))->unk28);
            func_802702EC(arg2, &((func_802A35C0_S2 *)(var_s0))->unk68);
        }
        temp_s1 = *(void **)var_s0;
        ((func_802A35C0_S2 *)(var_s0))->unkAC.v0 = 0;
        ((func_802A35C0_S2 *)(var_s0))->unkA8 = 0.0f;
        if (temp_s1 != 0) {
            func_80271FD8(&sp10, &((func_802A35C0_S2 *)(var_s0))->unk10.v1, &((func_802A35C0_S3 *)(temp_s1))->unk10);
            temp_f0 = func_802BC380((sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z));
            ((func_802A35C0_S3 *)(temp_s1))->unkAC = temp_f0;
            ((func_802A35C0_S1 *)(arg1))->unk4C += temp_f0;
        }
        if (*(u8 *)(((func_802A35C0_S1 *)(arg1))->unk8 + 0x1C) == 0) {
            if (((func_802A35C0_S1 *)(arg1))->unk4C > 0.0f) {
                var_f1 = 0.0f;
                var_s0 = ((func_802A35C0_S1 *)(arg1))->unk40;
                if (var_s0 != 0) {
                    do {
                        ((func_802A35C0_S2 *)(var_s0))->unkA8 = var_f1 / ((func_802A35C0_S1 *)(arg1))->unk4C;
                        temp_f0_2 = ((func_802A35C0_S2 *)(var_s0))->unkAC.v1;
                        var_s0 = ((func_802A35C0_S2 *)(var_s0))->unk4;
                        var_f1 += temp_f0_2;
                    } while (var_s0 != 0);
                }
            }
        } else {
            if (temp_s1 != 0) {
                ((func_802A35C0_S1 *)(arg1))->unk28 += ((func_802A35C0_S3 *)(temp_s1))->unkAC * D_800CAF50;
            }
            ((func_802A35C0_S2 *)(var_s0))->unkA8 = ((func_802A35C0_S1 *)(arg1))->unk28;
        }
    }
    return temp_s2;
}
