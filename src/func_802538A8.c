#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

extern s32 D_8010515C;
extern Queue D_80105140;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_8025114C(s32);
extern s32 func_80254AF8(s32, s32, s32);
extern void func_80251590(s32, s32);
extern s32 func_802C0510(Queue *, s32, s32);

void func_802538A8(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;

    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_a0);
    }
    func_8025114C(0);
    while (func_80254AF8(0, 0, 0) != 0) {
    }
    func_80251590(0, 1);
    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(&D_80105140, 0, 1);
        return;
    }
    func_802C2040(temp_v0);
}
