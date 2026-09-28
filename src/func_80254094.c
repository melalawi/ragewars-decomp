#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_80254930(void *, void *);
extern s32 func_802C0510(Queue *, s32, s32);

extern char D_800C8F90;
extern Queue D_80105140;
extern s32 D_8010515C;

s32 func_80254094(s32 arg0, void **arg1, s32 arg2, void *arg3, s32 arg4) {
    void **resource;
    s32 size;
    s32 counter;
    s32 counter2;
    u32 token;
    u32 token2;

    resource = func_802518DC(0, arg2, arg2, 4, 0, 0, 0, &D_800C8F90, arg4);
    if (resource != 0) {
        size = **(s32 **)resource;
        token = func_802C2020();
        counter = D_8010515C + 1;
        D_8010515C = counter;
        if (counter != 1) {
            func_802C2040(token);
            func_802C0390((s32)&D_80105140, 0, 1);
        } else {
            func_802C2040(token);
        }
        func_80254930(0, resource);
        token2 = func_802C2020();
        counter2 = D_8010515C - 1;
        D_8010515C = counter2;
        if (counter2 != 0) {
            func_802C2040(token2);
            func_802C0510(&D_80105140, 0, 1);
        } else {
            func_802C2040(token2);
        }
        resource = func_802518DC(0, arg2, arg2, ((size * 4) + 0xF) & ~7,
                                 0, 0, 0, arg3, arg4);
        if (resource != 0) {
            *arg1 = *resource;
            return (s32)resource;
        }
    }
    return 0;
}
