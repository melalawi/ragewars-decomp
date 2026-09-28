#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

typedef struct State802532E4 {
    s32 active;
    s32 count;
} State802532E4;

extern Queue D_80105140;
extern s32 D_8010515C;
extern State802532E4 D_8010517C;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_80251590(s32, s32);
extern s32 func_802C0510(Queue *, s32, s32);

void func_802532E4(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    s32 var_s0;
    State802532E4 *temp_s1;

    temp_s1 = &D_8010517C;
    var_s0 = 1;
    temp_s1->active = var_s0;
    temp_s1->count += var_s0;
    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + var_s0;
    D_8010515C = temp_v1;
    if (temp_v1 != var_s0) {
        func_802C2040(temp_a0);
        func_802C0390((s32)((char *)temp_s1 - 0x3C), 0, var_s0);
        var_s0 = 0;
    } else {
        func_802C2040(temp_a0);
        var_s0 = 0;
    }
    do {
        func_80251590(0, 0);
        var_s0++;
    } while (var_s0 < 10);
    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_v0);
    }
}
