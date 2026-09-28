#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

typedef struct Node80254858 {
    s32 field0;
    s32 field4;
    s32 references;
    s32 flags;
} Node80254858;

extern s32 D_8010515C;
extern Queue D_80105140;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern Node80254858 *func_80254858(s32, s32, u32, void *);
extern s32 func_802C0510(Queue *, s32, s32);

Node80254858 *func_802533DC(s32 arg0, s32 arg1, u32 arg2, void *arg3) {
    Node80254858 *var_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    s32 temp_s0;
    u32 temp_s1;
    void *temp_s2;

    temp_s0 = arg1;
    temp_s1 = arg2;
    temp_s2 = arg3;
    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_a0);
    }
    var_s0 = func_80254858(0, temp_s0, temp_s1, temp_s2);
    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_v0);
    }
    return var_s0;
}
