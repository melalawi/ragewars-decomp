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

typedef struct Record Record;

extern s32 D_8010515C;
extern Queue D_80105140;
extern s32 D_800C8F98;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern Node80254858 *func_80254858(s32, s32, u32, s32 *);
extern s32 func_802C0510(Queue *, s32, s32);
extern void func_8025114C(s32);
extern s32 func_80254AF8(s32, s32, s32);
extern void func_80251590(s32, s32);

Record *func_80252FFC(s32 size) {
    Node80254858 *node;
    Node80254858 *current;
    s32 allocation_size;
    s32 counter;
    s32 counter2;
    s32 counter3;
    s32 counter4;
    s32 payload;
    Record *result;
    u32 token;
    u32 token2;
    u32 token3;
    u32 token4;

    allocation_size = size + 0x10;
    token = func_802C2020();
    counter = D_8010515C + 1;
    D_8010515C = counter;
    if (counter != 1) {
        func_802C2040(token);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(token);
    }
    node = func_80254858(0, allocation_size, 0x33U, &D_800C8F98);
    token2 = func_802C2020();
    counter2 = D_8010515C - 1;
    D_8010515C = counter2;
    if (counter2 != 0) {
        func_802C2040(token2);
        func_802C0510(&D_80105140, 0, 1);
        current = node;
    } else {
        func_802C2040(token2);
        current = node;
    }
    if (current == 0) {
        token3 = func_802C2020();
        counter3 = D_8010515C + 1;
        D_8010515C = counter3;
        if (counter3 != 1) {
            func_802C2040(token3);
            func_802C0390((s32)&D_80105140, 0, 1);
        } else {
            func_802C2040(token3);
        }
        func_8025114C(0);
        do {
        } while (func_80254AF8(0, 0, 0) != 0);
        func_80251590(0, 1);
        token4 = func_802C2020();
        counter4 = D_8010515C - 1;
        D_8010515C = counter4;
        if (counter4 != 0) {
            func_802C2040(token4);
            func_802C0510(&D_80105140, 0, 1);
        } else {
            func_802C2040(token4);
        }
        token3 = func_802C2020();
        counter3 = D_8010515C + 1;
        D_8010515C = counter3;
        if (counter3 != 1) {
            func_802C2040(token3);
            func_802C0390((s32)&D_80105140, 0, 1);
        } else {
            func_802C2040(token3);
        }
        node = func_80254858(0, allocation_size, 0x33U, &D_800C8F98);
        token2 = func_802C2020();
        counter2 = D_8010515C - 1;
        D_8010515C = counter2;
        if (counter2 != 0) {
            func_802C2040(token2);
            func_802C0510(&D_80105140, 0, 1);
            current = node;
        } else {
            func_802C2040(token2);
            current = node;
        }
    }
    if (current != 0) {
        payload = current->field0;
        result = (Record *)(payload + 0x10);
        *(Node80254858 **)payload = current;
        return result;
    }
    return 0;
}
