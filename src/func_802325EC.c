#include "basetypes.h"

extern void *D_800D052C[];
extern s32 D_800D2980;
extern s32 D_8011FE88;
extern char D_80145088;

extern s32 func_80232770(s32);
extern s32 func_80232790(s32);
extern s32 func_802327C4(s32);
extern void func_80237E70(void *, void *, void *);

typedef struct { char pad0[0x54]; s32 unk54; } func_802325EC_Record;
typedef struct func_802325EC_S1 func_802325EC_S1;
typedef struct func_802325EC_S2 func_802325EC_S2;
typedef struct func_802325EC_S3 func_802325EC_S3;
typedef struct func_802325EC_S4 func_802325EC_S4;
typedef union func_802325EC_S2_U770 { s16 v0; u16 v1; } func_802325EC_S2_U770;
struct func_802325EC_S1 {
    char pad0[0x1];
    s8 unk1;
    char pad1[0x1D8 - 0x1 - sizeof(s8)];
    void* unk1D8;
};
struct func_802325EC_S2 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x770 - 0x62E - sizeof(s16)];
    func_802325EC_S2_U770 unk770;
    char pad770[0x13B8 - 0x770 - sizeof(func_802325EC_S2_U770)];
    s32 unk13B8;
    char pad13B8[0x13BC - 0x13B8 - sizeof(s32)];
    s32 unk13BC;
    char pad13BC[0x13C0 - 0x13BC - sizeof(s32)];
    s32 unk13C0;
};
struct func_802325EC_S3 {
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
};
struct func_802325EC_S4 {
    char pad0[0x58];
    s32 unk58;
};

void func_802325EC(void *arg0, void *arg1) {
    s16 index;
    u16 unsigned_index;
    void *owner;
    void *state;

    state = ((func_802325EC_S1 *)(arg0))->unk1D8;
    index = ((func_802325EC_S2 *)(state))->unk770.v0;
    unsigned_index = ((func_802325EC_S2 *)(state))->unk770.v1;
    if ((((func_802325EC_S2 *)(state))->unk62E != index) || (D_8011FE88 != 4)) {
        if (func_80232770(index) != 0) {
            ((func_802325EC_S2 *)(state))->unk13B8 = 1;
        } else if (func_80232790(index) != 0) {
            ((func_802325EC_S2 *)(state))->unk13BC = 1;
        } else if (func_802327C4(index) != 0) {
            ((func_802325EC_S2 *)(state))->unk13C0 = 1;
        }
        ((func_802325EC_S2 *)(state))->unk62E = unsigned_index;
        ((func_802325EC_S3 *)(arg1))->unk2C = ((func_802325EC_Record *)D_800D052C[(s16)unsigned_index])->unk54;
        ((func_802325EC_S3 *)(arg1))->unk120 = ((func_802325EC_S4 *)(D_800D052C[((func_802325EC_S2 *)(state))->unk62E]))->unk58;
        owner = ((func_802325EC_S2 *)(state))->unk5DC;
        if ((owner != 0) && ((u32)D_800D2980 >= 5U)) {
            func_80237E70(&D_80145088, owner,
                *(void **)*(void **)D_800D052C[((func_802325EC_S2 *)(state))->unk62E]);
        }
        ((func_802325EC_S3 *)(arg1))->unk124 = 0;
        ((func_802325EC_S3 *)(arg1))->unk128 = 0;
        ((func_802325EC_S1 *)(arg0))->unk1 = 0;
        ((func_802325EC_S3 *)(arg1))->unk130 = 0;
    }
}
