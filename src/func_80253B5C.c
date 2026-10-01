#include "basetypes.h"

typedef struct Func80253B5CArg {
    char pad0[0xC];
    s32 flags;
} Func80253B5CArg;

extern u32 func_802C2020(void);
extern void func_802C2040(u32 arg0);
extern void func_802C0390(s32 arg0, s32 arg1, s32 arg2);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

extern s32 D_80104598[];
extern s32 D_801045A8;
extern s32 D_80105134[];
extern s32 D_80105140;
extern s32 D_8010515C;

void func_80253B5C(s32 arg0, Func80253B5CArg *arg1) {
    s32 index;
    s32 mask;
    s32 flags;
    s32 counter;
    s32 counter2;
    s32 *base;
    u32 token;
    u32 token2;

    base = &D_801045A8;
    index = *base;
    token = func_802C2020();
    counter = D_8010515C + 1;
    D_8010515C = counter;
    if (counter != 1) {
        func_802C2040(token);
        func_802C0390((s32)((char *)base + 0xB98), 0, 1);
    } else {
        func_802C2040(token);
    }

    if (D_80104598[index] != 0) {
        mask = 0x200;
        if (index != 0) {
            mask = 0x400;
        }
        flags = arg1->flags;
        if (!(flags & mask)) {
            arg1->flags = flags | mask;
            D_80105134[index]++;
        }
    }

    token2 = func_802C2020();
    counter2 = D_8010515C - 1;
    D_8010515C = counter2;
    if (counter2 != 0) {
        func_802C2040(token2);
        func_802C0510(&D_80105140, 0, 1);
        return;
    }
    func_802C2040(token2);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800F1ED0_4C[] = {0x00, 0x43, 0x9E, 0xE0, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9E, 0xE8, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9D, 0xE0, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9E, 0xB0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0xA0, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EC284_2[] = {0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB74_9[] = {0xD2, 0x12, 0x00, 0x30, 0x74, 0xC3, 0x32, 0xD5, 0xC0};
#endif
