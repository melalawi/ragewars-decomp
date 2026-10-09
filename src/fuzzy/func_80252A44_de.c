#include "common/types_8fd754e1e915.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"

extern Gfx *D_80110634;
extern s32 D_8010515C;
extern s32 D_80105180;
extern char D_80101140[];

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32 mask);
extern void func_802BB2A0_de(void *queue, s32 msg, s32 flag);
extern s32 func_802BB420_de(void *queue, s32 msg, s32 flag);
extern void func_80268CE0_de(s32);
extern void func_8026925C_de(s32);

/* A heap span chained through its link at 0xC. */
typedef struct HeapSpan {
    /* 0x00 */ char pad0[0xC];
    /* 0x0C */ struct HeapSpan *next;
    /* 0x10 */ u32 used;
    /* 0x14 */ u32 free;
} HeapSpan;

/* A tracked allocation in the sorted list. */
typedef struct HeapNode {
    /* 0x00 */ u32 start;
    /* 0x04 */ u32 end;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u32 flags;
    /* 0x10 */ s32 stamp;
    /* 0x14 */ char pad14[0x10];
    /* 0x24 */ struct HeapNode *next;
} HeapNode;

typedef struct HeapNodeList {
    HeapNode *first;
} HeapNodeList;

extern HeapSpan *D_801011B0;
extern HeapNodeList D_80100584;

/* Draws the heap usage bar: a bordered box with one coloured band per tracked allocation, scaled to the
 * total heap size. */
void func_80252A44_de(s32 unused, s32 left, s32 top, s32 right, s32 bottom) {
    HeapSpan *span;
    HeapNode *node;
    u32 total;
    u32 lock;
    s32 height;
    s32 pass;
    s32 select;
    s32 lo;
    s32 hi;
    s32 r;
    s32 g;
    s32 b;
    s32 full;
    s32 bright;
    u32 packed;

    gDPPipeSync(D_80110634++);
    gDPSetCycleType(D_80110634++, G_CYC_1CYCLE);
    func_80268CE0_de(0x19);
    func_8026925C_de(0x15);

    gDPSetPrimColor(D_80110634++, 0, 0, 0xA0, 0xA0, 0xA0, 0x00);
    gDPFillRectangle(D_80110634++, left - 1, top - 1, right + 1, bottom + 1);
    func_8026925C_de(0x1B);

    gDPSetPrimColor(D_80110634++, 0, 0, 0xA0, 0xA0, 0xA0, 0xFF);
    gDPFillRectangle(D_80110634++, left, top, right, bottom);

    lock = func_802BCF30_de();
    D_8010515C++;
    if (D_8010515C != 1) {
        func_802BCF50_de(lock);
        func_802BB2A0_de(D_80101140, 0, 1);
    } else {
        func_802BCF50_de(lock);
    }

    total = (u32)D_801011B0 - 0x80000000;
    for (span = D_801011B0; span != 0; span = span->next) {
        total += span->used + span->free;
    }

    height = bottom - top;
    gDPSetPrimColor(D_80110634++, 0, 0, 0x64, 0x64, 0x00, 0xFF);
    gDPFillRectangle(D_80110634++, left, bottom - ((u32)(((u32)D_801011B0 - 0x80000000) * height) / total) - 1, right, bottom + 1);

    for (pass = 0; pass < 2; pass++) {
        for (node = D_80100584.first; node != 0; node = node->next) {
            if (pass != 0) {
                select = (node->flags & 0x101) == 0x100;
            } else {
                select = (node->flags & 0x101) != 0x100;
            }
            if (select == 0) {
                continue;
            }

            r = 0xFF;
            if (!(node->flags & 1)) {
                g = 0;
                if (!(node->flags & 0x100)) {
                    r = 0;
                    if (node->flags & 0x600) {
                        g = 0;
                        b = 0xFF;
                    } else {
                        g = 0xFF;
                        b = 0;
                    }
                } else {
                    b = 0;
                }
            } else {
                g = 0xFF;
                b = 0;
            }

            gDPSetPrimColor(D_80110634++, 0, 0, r, g, b, 0xFF);
            hi = bottom - ((u32)(((node->start + node->end) - 0x80000000) * height) / total) - 1;
            lo = bottom - ((u32)(((node->start - 0x80000000) - 0x20) * height) / total) - 1;
            if (hi < lo) {
                gDPFillRectangle(D_80110634++, left, hi, right, lo);
            }

            gDPSetPrimColor(D_80110634++, 0, 0, (r >> 1) < 0x100 ? (r >> 1) : 0xFF, (g >> 1) < 0x100 ? (g >> 1) : 0xFF,
                            (b >> 1) < 0x100 ? (b >> 1) : 0xFF, 0xFF);
            gDPFillRectangle(D_80110634++, left, lo - 1, right, lo);

            if (!(node->flags & 0x702) && (u32)(D_80105180 - node->stamp) >= 5U) {
                full = 0xFF;
                gDPSetPrimColor(D_80110634++, 0, 0, 255, 255, 255, 255);
                if (hi < lo) {
                    gDPFillRectangle(D_80110634++, left + 8, hi, right, lo);
                }
                bright = (full * 3) >> 1;
                gDPSetPrimColor(D_80110634++, 0, 0, 255, 255, bright < 0x100 ? bright : 0xFF, 255);
                gDPFillRectangle(D_80110634++, left + 8, lo - 1, right, lo);
            }
        }
    }

    lock = func_802BCF30_de();
    D_8010515C--;
    if (D_8010515C != 0) {
        func_802BCF50_de(lock);
        func_802BB420_de(D_80101140, 0, 1);
        return;
    }
    func_802BCF50_de(lock);
}
