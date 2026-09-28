#include "basetypes.h"

typedef struct Node80254858 {
    s32 field0;
    s32 field4;
    s32 references;
    s32 flags;
} Node80254858;

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
extern s8 D_801051A0;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern Node80254858 *func_80251448(s32, u32);
extern s32 func_802555D0(s8 *, void *, s32);
extern void func_80254C10(s32, Node80254858 *);
extern void func_80254A70(s32, Node80254858 *);
extern s32 func_802C0510(Queue *, s32, s32);

Node80254858 *func_802534D0(void *arg0, void *arg1, s32 arg2) {
    Node80254858 *var_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0_2;

    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_a0);
    }
    var_s0 = func_80251448(0, 0U);
    if (var_s0 != 0) {
        temp_v0 = func_802555D0(&D_801051A0, arg1, arg2);
        var_s0->field0 = temp_v0;
        if (temp_v0 != 0) {
            var_s0->field4 = arg2;
            var_s0->flags |= 3;
            func_80254C10(0, var_s0);
        } else {
            func_80254A70(0, var_s0);
            var_s0 = 0;
        }
    }
    temp_v0_2 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0_2);
        func_802C0510(&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_v0_2);
    }
    return var_s0;
}
