/* Allocates a four-byte probe from func_802518DC to read a count, frees it under the D_8010515C lock, then allocates count*4+15 rounded to eight bytes and stores its first word through arg1, returning the allocation. Adapted from func_80254094 with the null checks removed, tag 0x1B and flag 1 passed as the fifth and ninth arguments, and the constant 1 held in a local changed. */
#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

extern void **func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_80254930(void *, void *);
extern s32 func_802C0510(Queue *, s32, s32);

extern char D_800C8F90;
extern Queue D_80105140;
extern s32 D_8010515C;

s32 func_80254224(s32 arg0, void **arg1, s32 arg2, void *arg3) {
    void **resource;
    s32 size;
    s32 counter;
    s32 counter2;
    u32 token;
    u32 token2;
    s32 one = 1;

    resource = func_802518DC(0, arg2, arg2, 4, 0x1B, 0, 0, &D_800C8F90, one);
    size = **(s32 **)resource;
    token = func_802C2020();
    counter = D_8010515C + one;
    D_8010515C = counter;
    if (counter != one) {
        func_802C2040(token);
        func_802C0390((s32)&D_80105140, 0, one);
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
    resource = func_802518DC(0, arg2, arg2, ((size * 4) + 0xF) & ~7, 0x1B, 0, 0, arg3, 1);
    *arg1 = *resource;
    return (s32)resource;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800F2022_4[] = {0x00, 0xEF, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ECA42_42[] = {0x03, 0x1A, 0x00, 0x00, 0x03, 0x17, 0x00, 0x00, 0x03, 0x28, 0x00, 0x00, 0x03, 0x27, 0x00, 0x00, 0x03, 0x26, 0x00, 0x00, 0x03, 0x2D, 0x00, 0x00, 0x03, 0x2C, 0x00, 0x00, 0x03, 0x2B, 0x00, 0x00, 0x03, 0x32, 0x00, 0x00, 0x03, 0x31, 0x00, 0x00, 0x03, 0x16, 0x00, 0x00, 0x03, 0x15, 0x00, 0x00, 0x03, 0x23, 0x00, 0x00, 0x03, 0x24, 0x00, 0x00, 0x03, 0x1D, 0x00, 0x00, 0x03, 0x1E, 0x00, 0x00, 0x03, 0x1F};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FFB5B_1[] = {0x0E};
#endif
