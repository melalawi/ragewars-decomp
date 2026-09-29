#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

extern u32 func_802C2020(void);
extern void func_802C2040(u32 arg0);
extern void func_802C145C(void *arg0);
extern s32 func_802C1648(Queue *arg0);
extern void func_802C0840(s32 arg0);
typedef struct func_802C0250_S1 func_802C0250_S1;
struct func_802C0250_S1 {
    char pad0[0x10];
    s16 unk10;
};

extern func_802C0250_S1 *D_800D92A0;

s32 func_802C0250(Queue *arg0, void *arg1, s32 arg2) {
    u32 saved;
    s32 index;

    saved = func_802C2020();
    while (arg0->count >= arg0->capacity) {
        if (arg2 != 1) {
            func_802C2040(saved);
            return -1;
        }
        D_800D92A0->unk10 = 8;
        func_802C145C(&arg0->unk04);
    }

    index = (arg0->index + arg0->capacity - 1) % arg0->capacity;
    arg0->index = index;
    arg0->entries[index] = arg1;
    arg0->count++;
    if (*arg0->head != 0) {
        func_802C0840(func_802C1648(arg0));
    }
    func_802C2040(saved);
    return 0;
}
