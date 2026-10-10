#include "types.h"

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

extern Queue D_80101140;
extern s32 D_8010515C;
extern State802532E4 D_8010117C;

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802515F0_de(s32, s32);
extern s32 func_802BB420_de(Queue *, s32, s32);

void func_80253344_de(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    s32 var_s0;
    State802532E4 *temp_s1;

    temp_s1 = &D_8010117C;
    var_s0 = 1;
    temp_s1->active = var_s0;
    temp_s1->count += var_s0;
    temp_a0 = func_802BCF30_de();
    temp_v1 = D_8010515C + var_s0;
    D_8010515C = temp_v1;
    if (temp_v1 != var_s0) {
        func_802BCF50_de(temp_a0);
        func_802BB2A0_de((s32)((char *)temp_s1 - 0x3C), 0, var_s0);
        var_s0 = 0;
    } else {
        func_802BCF50_de(temp_a0);
        var_s0 = 0;
    }
    do {
        func_802515F0_de(0, 0);
        var_s0++;
    } while (var_s0 < 10);
    temp_v0 = func_802BCF30_de();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802BCF50_de(temp_v0);
        func_802BB420_de(&D_80101140, 0, 1);
    } else {
        func_802BCF50_de(temp_v0);
    }
}

