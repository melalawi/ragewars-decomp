#include "span_1000/code_8022F054.h"
#include "types.h"

extern u8 D_800FEB00[];
extern u8 D_800FEB08[];
extern s8 D_800FEB0C[];
extern s8 D_800FEB0D[];
extern s8 D_800FEB0E[];
extern s8 D_800FEC89[];
extern s8 D_800FEC8A[];
extern s8 D_800FEC8B[];
extern s8 D_800FEC8C[];
extern s8 D_800FEC8D[];
extern u8 D_801422D8[];
extern s32 D_800D34E0;

extern void func_8022EF30_de(void *arg0);
extern void func_802A0C08_de(void *arg0, s32 arg1, s32 arg2);

void func_8022F204_de(s32 arg0) {
    s32 offset;
    u8 *entry;
    u8 *config;

    offset = arg0 * 0x190;
    entry = D_800FEB00 + offset;
    func_8022EF30_de(entry);
    *(s32 *)(D_800FEB08 + offset) = 0;
    D_800FEB0D[offset] = arg0;
    D_800FEB0C[offset] = 0;
    D_800FEB0E[offset] = 1;
    func_802A0C08_de(entry, D_800D34E0, arg0 + 1);
    config = D_801422D8 + arg0 * 0x96;
    D_800FEC89[offset] = config[0x7B];
    D_800FEC8A[offset] = config[0x7D];
    D_800FEC8B[offset] = config[0x79];
    D_800FEC8C[offset] = config[0x7A];
    D_800FEC8D[offset] = config[0x82];
}
