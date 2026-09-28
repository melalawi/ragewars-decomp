#include "basetypes.h"

typedef struct Entry {
    void *object;
    s32 field4;
    s32 field8;
    s32 fieldC;
    s32 field10;
    s32 field14;
    s32 field18;
} Entry;

typedef struct Manager {
    s32 field0;
    s32 index;
    s32 lowIndex;
    Entry *entries;
    s8 pad10[0x524];
    s32 field534;
    s32 field538;
} Manager;

typedef struct Args {
    s32 word0;
    s32 word4;
    s32 word8;
    f32 wordC;
    f32 word10;
    u8 byte14;
    u8 pad15[3];
    s32 word18;
    s32 word1C;
    s32 word20;
    s32 word24;
} Args;

typedef struct Quad {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
} Quad;

extern f32 D_800CA808;
extern f64 D_800CA810;
extern s32 D_800D2B50;
extern Manager *D_8014D080;
extern s32 D_8014D084;
extern s32 D_8014D088;
extern s32 D_8014D08C;
extern s32 D_8014D0A0;

extern f64 func_802A28CC(void);
extern void func_8029864C(s32, s32, s32, void *, s32);
extern void func_802A28F4(void);
extern void func_8040E6FC(void *, Args);
extern void func_8040E914(void);
extern void func_802A28FC(void);
extern s32 func_8040E154(Quad *, Quad *, void *, Args *);

void func_80299FE8(void) {
    Args args;
    Quad first;
    Quad basis;
    s32 delta;
    s32 index;
    s32 offset;
    s32 now;

    args.word0 = D_8014D080->field534;
    args.word4 = D_8014D080->field538;
    args.byte14 = 0xFF;
    args.word8 = 0;
    args.wordC = D_800CA808;
    args.word10 = D_800CA808;
    args.word18 = D_8014D080->field534;
    D_8014D084 = 0;
    args.word20 = D_8014D080->field538;
    args.word1C = D_8014D088 - 1;
    args.word24 = D_8014D08C - 1;

    now = (s32)(func_802A28CC() * D_800CA810);
    if (D_800D2B50 == 0) {
        D_800D2B50 = now;
    }
    delta = now - D_800D2B50;
    D_800D2B50 = now;
    func_8029864C(0, 0xE0A, 0, &args, delta);

    index = D_8014D080->lowIndex;
    if (D_8014D080->index >= index) {
        offset = index * 0x1C;
        do {
            index++;
            func_802A28F4();
            func_8040E6FC(*(void **)(offset + (s32)D_8014D080->entries), args);
            func_8040E914();
            func_802A28FC();
            func_8040E154(&first, &basis,
                          *(void **)(offset + (s32)D_8014D080->entries), &args);
            offset += 0x1C;
        } while (D_8014D080->index >= index);
    }
    func_8029864C(0, 0xE0A, 1, 0, delta);
    D_8014D0A0 = 0;
}
