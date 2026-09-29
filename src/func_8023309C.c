#include "basetypes.h"

extern s32 D_801450B8;
extern void *D_800D052C[];
extern f32 D_800C8130;

extern void func_8021A9A4(void *arg0, s32 arg1);
extern void func_8022AE90(void *arg0, s32 arg1);
extern void func_8022AF64(void *arg0, s32 arg1);

typedef struct func_8023309C_S1 func_8023309C_S1;
typedef struct func_8023309C_S2 func_8023309C_S2;
typedef struct func_8023309C_S3 func_8023309C_S3;
typedef struct func_8023309C_S4 func_8023309C_S4;
typedef struct func_8023309C_S5 func_8023309C_S5;
typedef struct func_8023309C_S6 func_8023309C_S6;
struct func_8023309C_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_8023309C_S2 {
    char pad0[0x64];
    s32 unk64;
    char pad64[0x130 - 0x64 - sizeof(s32)];
    f32 unk130;
};
struct func_8023309C_S3 {
    char pad0[0x1450];
    s32 unk1450;
};
struct func_8023309C_S4 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x11C0 - 0x62E - sizeof(s16)];
    volatile s32 unk11C0;
};
struct func_8023309C_S5 {
    char pad0[0x18];
    f32 unk18;
};
struct func_8023309C_S6 {
    char pad0[0x4];
    f32 unk4;
};

void func_8023309C(void *arg0, void *arg1) {
    void *temp_s0;
    void *temp_a0;
    s16 index;

    temp_s0 = ((func_8023309C_S1 *)(arg0))->unk1D8;
    ((func_8023309C_S2 *)(arg1))->unk64 = 0;
    if ((((func_8023309C_S3 *)(temp_s0))->unk1450 == 0) &&
        (D_801450B8 == 1)) {
        func_8021A9A4(((func_8023309C_S1 *)(arg0))->unk1D8, 0x3F9);
    } else {
        func_8021A9A4(((func_8023309C_S1 *)(arg0))->unk1D8, 0x4CB);
    }
    func_8022AE90(temp_s0, 0x78A);
    func_8022AF64(temp_s0, 0x780);

    temp_a0 = ((func_8023309C_S1 *)(arg0))->unk1D8;
    index = ((func_8023309C_S4 *)(temp_a0))->unk62E;
    ((func_8023309C_S2 *)(arg1))->unk130 =
        ((func_8023309C_S5 *)(D_800D052C[index]))->unk18 *
        ((func_8023309C_S6 *)(&D_800C8130))->unk4;
    if ((((func_8023309C_S4 *)(temp_a0))->unk62E == 8) &&
        (((func_8023309C_S4 *)(temp_a0))->unk11C0 == 0)) {
        func_8022AF64(temp_a0, 0xA3C);
    }
}
