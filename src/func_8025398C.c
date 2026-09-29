#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

extern s32 D_80104598[];
extern s32 D_801045A8;
extern s32 D_8010515C;

typedef struct func_8025398C_S1 func_8025398C_S1;
struct func_8025398C_S1 {
    char pad0[0xB98];
    char unkB98;
};

void func_8025398C(s32 unused, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 *base;
    u32 temp_a0;
    u32 temp_v0;

    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)((char *)&D_801045A8 + 0xB98), 0, 1);
    } else {
        func_802C2040(temp_a0);
    }
    base = &D_801045A8;
    *base = arg1;
    D_80104598[arg1] = 1;
    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(&((func_8025398C_S1 *)(base))->unkB98, 0, 1);
        return;
    }
    func_802C2040(temp_v0);
}
