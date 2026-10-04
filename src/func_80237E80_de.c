#include "span_1000/code_80233C78.h"
#include "span_1000/types.h"
#include "types.h"
/* Posts a text as on-screen messages, one per line: when func_80245784_de reports it, the messages already in
 * the pool's list at 0xE40 are flagged kind 4 and the new ones get kind 1, otherwise kind 2; the text (or
 * D_800D7028 when given D_800D7034) is split at newlines and for each non-empty line the oldest message node
 * of the owner's list at 0xF24 is recycled and set up centred horizontally 80 pixels above the bottom of the
 * screen at unit size. Returns the last message node. */




extern func_80237E70_G1 D_800D2FFC;

extern func_80237E70_G1 D_800D3008;

extern s32 D_800DE880_de;
extern void func_80239CE0_de(Message *);
extern void func_80255ED8_de(void *, Message *);
extern void func_80255D14_de(void *, Message *);
extern s32 func_80245784_de(void);












static inline Message *recycle(void *owner, void *pool) {
    Message *oldest;

    oldest = ((func_80237E70_S1 *)(owner))->unkF24.v0;
    if (oldest != 0) {
        func_80239CE0_de(oldest);
        func_80255ED8_de(&((func_80237E70_S1 *)(owner))->unkF24.v1, oldest);
        func_80255D14_de(&((func_80237E70_S2 *)(pool))->unkE40.v0, oldest);
    }
    return oldest;
}

static inline Message *post_lines(void *owner, void *pool, u8 *text, s32 kind, f32 size, s32 target) {
    Message *message;
    s32 height;
    u8 *line;
    u8 *p;

    message = 0;
    if (pool == 0) {
        return message;
    }
    if (text == D_800D3008.unk0) {
        text = D_800D2FFC.unk0;
    }
    p = text;
    line = p;
    while (*p != 0) {
        p++;
        if (*p == '\n' || *p == 0) {
            if (line != p) {
                message = recycle(owner, pool);
                if (message != 0) {
                    message->kind = kind;
                    message->text = line;
                    message->timer = 0;
                    message->alpha = 1.0f;
                    message->size = size * 15.0f;
                    message->target = target;
                    message->pad20 = 0;
                    message->pad28 = 0;
                    message->pad2C = 0;
                    message->scaleX = 1.0f;
                    message->scaleY = 1.0f;
                    height = (&D_800DE880_de)[1]; /* FAKEMATCH */
                    message->x = D_800DE880_de / 2;
                    message->y = height - 80;
                }
                line = p + 1;
            }
        }
    }
    return message;
}

Message *func_80237E80_de(void *owner, void *pool, u8 *text) {
    Message *pending;
    s32 kind;

    kind = 2;
    if (pool == 0) {
        return 0;
    }
    if (func_80245784_de() != 0) {
        pending = ((func_80237E70_S2 *)(pool))->unkE40.v1;
        if (pending != 0) {
            kind = 1;
            do {
                pending->kind = 4;
                pending = ((func_80237E70_S4 *)(pending))->unk4;
            } while (pending != 0);
        }
    }
    return post_lines(owner, pool, text, kind, 1.0f, -1);
}
