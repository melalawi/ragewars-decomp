#include "basetypes.h"

extern s32 D_8011FE88;
extern void ***D_800D052C[];
extern s32 D_800D2980;
extern char D_80145088;

extern s32 func_80232770(s32);
extern s32 func_80232790(s32);
extern s32 func_802327C4(s32);
extern void func_80237E70(void *, void *, void *);

typedef struct func_8022FEF4_S1 func_8022FEF4_S1;
typedef struct func_8022FEF4_S2 func_8022FEF4_S2;
typedef struct func_8022FEF4_S3 func_8022FEF4_S3;
typedef struct func_8022FEF4_S4 func_8022FEF4_S4;
typedef struct func_8022FEF4_S5 func_8022FEF4_S5;
typedef union func_8022FEF4_S2_U770 { s16 v0; u16 v1; } func_8022FEF4_S2_U770;
struct func_8022FEF4_S1 {
    char pad0[0x1];
    char unk1;
    char pad1[0x1D8 - 0x1 - sizeof(char)];
    char* unk1D8;
};
struct func_8022FEF4_S2 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x770 - 0x62E - sizeof(s16)];
    func_8022FEF4_S2_U770 unk770;
    char pad770[0x13B8 - 0x770 - sizeof(func_8022FEF4_S2_U770)];
    s32 unk13B8;
    char pad13B8[0x13BC - 0x13B8 - sizeof(s32)];
    s32 unk13BC;
    char pad13BC[0x13C0 - 0x13BC - sizeof(s32)];
    s32 unk13C0;
};
struct func_8022FEF4_S3 {
    char pad0[0x2C];
    s32 unk2C;
    char pad2C[0x120 - 0x2C - sizeof(s32)];
    s32 unk120;
    char pad120[0x124 - 0x120 - sizeof(s32)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
    char pad128[0x130 - 0x128 - sizeof(s32)];
    s32 unk130;
    char pad130[0x13C - 0x130 - sizeof(s32)];
    s32 unk13C;
    char pad13C[0x144 - 0x13C - sizeof(s32)];
    s32 unk144;
};
struct func_8022FEF4_S4 {
    char pad0[0x54];
    s32 unk54;
};
struct func_8022FEF4_S5 {
    char pad0[0x58];
    s32 unk58;
};

void func_8022FEF4(void *arg0, void *arg1) {
    s16 temp_s0;
    u16 temp_s2;
    void *temp_a1;
    char *temp_s1;

    temp_s1 = ((func_8022FEF4_S1 *)(arg0))->unk1D8;
    temp_s0 = ((func_8022FEF4_S2 *)(temp_s1))->unk770.v0;
    temp_s2 = ((func_8022FEF4_S2 *)(temp_s1))->unk770.v1;
    if ((((func_8022FEF4_S2 *)(temp_s1))->unk62E != temp_s0) || (D_8011FE88 != 4)) {
        if (func_80232770(temp_s0) != 0) {
            ((func_8022FEF4_S2 *)(temp_s1))->unk13B8 = 1;
        } else if (func_80232790(temp_s0) != 0) {
            ((func_8022FEF4_S2 *)(temp_s1))->unk13BC = 1;
        } else if (func_802327C4(temp_s0) != 0) {
            ((func_8022FEF4_S2 *)(temp_s1))->unk13C0 = 1;
        }
        ((func_8022FEF4_S2 *)(temp_s1))->unk62E = temp_s2;
        ((func_8022FEF4_S3 *)(arg1))->unk2C = ((func_8022FEF4_S4 *)(D_800D052C[(s16)temp_s2]))->unk54;
        ((func_8022FEF4_S3 *)(arg1))->unk120 = ((func_8022FEF4_S5 *)(D_800D052C[((func_8022FEF4_S2 *)(temp_s1))->unk62E]))->unk58;
        temp_a1 = ((func_8022FEF4_S2 *)(temp_s1))->unk5DC;
        if ((temp_a1 != 0) && ((u32)D_800D2980 >= 5U)) {
            func_80237E70(&D_80145088, temp_a1,
                          **D_800D052C[((func_8022FEF4_S2 *)(temp_s1))->unk62E]);
        }
        ((func_8022FEF4_S3 *)(arg1))->unk124 = 0;
        ((func_8022FEF4_S3 *)(arg1))->unk128 = 0;
        ((func_8022FEF4_S1 *)(arg0))->unk1 = 0;
        ((func_8022FEF4_S3 *)(arg1))->unk130 = 0;
    }
    ((func_8022FEF4_S3 *)(arg1))->unk13C = 1;
    ((func_8022FEF4_S3 *)(arg1))->unk144 = 1;
}
