#include "common/types.h"
#include "span_1000/code_80252714.h"
#include "types.h"



extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32 arg0);
extern void func_802BB2A0_de(s32 arg0, s32 arg1, s32 arg2);
extern void func_802BB420_de(void *arg0, s32 arg1, s32 arg2);

extern s32 D_80100598[];

extern s32 D_80101134[];
extern s32 D_80101140;


void func_80253BBC_de(s32 arg0, func_80205628_S3 *arg1) {
    s32 index;
    s32 mask;
    s32 flags;
    s32 counter;
    s32 counter2;
    s32 *base;
    u32 token;
    u32 token2;

    base = &D_801005A8;
    index = *base;
    token = func_802BCF30_de();
    counter = D_8010115C + 1;
    D_8010115C = counter;
    if (counter != 1) {
        func_802BCF50_de(token);
        func_802BB2A0_de((s32)((char *)base + 0xB98), 0, 1);
    } else {
        func_802BCF50_de(token);
    }

    if (D_80100598[index] != 0) {
        mask = 0x200;
        if (index != 0) {
            mask = 0x400;
        }
        flags = arg1->unkC;
        if (!(flags & mask)) {
            arg1->unkC = flags | mask;
            D_80101134[index]++;
        }
    }

    token2 = func_802BCF30_de();
    counter2 = D_8010115C - 1;
    D_8010115C = counter2;
    if (counter2 != 0) {
        func_802BCF50_de(token2);
        func_802BB420_de(&D_80101140, 0, 1);
        return;
    }
    func_802BCF50_de(token2);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800F1ED0_4C[] = {0x00, 0x43, 0x9E, 0xE0, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9E, 0xE8, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9D, 0xE0, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9E, 0xB0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0xA0, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x43, 0x9F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EC284_2[] = {0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB74_9[] = {0xD2, 0x12, 0x00, 0x30, 0x74, 0xC3, 0x32, 0xD5, 0xC0};
#endif
