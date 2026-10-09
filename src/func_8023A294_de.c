#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8023A284.h"
#include "types.h"

extern f32 D_800C359C_de;
extern f32 D_800C35A0_de;
extern f32 D_800FF220[];

extern s32 func_80264B6C_de(void);

f32 func_8023A294_de(s32 arg0, f32 value, f32 target, f32 step) {
    if (func_80264B6C_de() != 0) {
        value = target;
    }
    if (value < target) {
        value += step;
        D_800FF220[1] = D_800C359C_de;
        if (target < value) {
            value = target;
        }
    } else if (target < value) {
        value -= step;
        D_800FF220[1] = D_800C35A0_de;
        if (value < target) {
            value = target;
        }
    }
    return value;
}

/* Posts a text as on-screen messages, one per line, with the given kind, target and size: the text (or
 * D_800D7028 when given D_800D7034) is split at newlines and for each non-empty line the oldest message node
 * of the owner's list at 0xF24 is recycled (cleared through func_80239CE0_de, unlinked, and pushed onto the free
 * list at 0xE40 of the pool) and set up as a message centred horizontally 80 pixels above the bottom of the
 * screen, scaled by the given size. Returns the last message node. */




extern u8 *D_800D2FFC;

extern u8 *D_800D3008;

extern s32 D_800DE880_de;
extern void func_80239CE0_de(Message *);
extern void func_80255ED8_de(void *, Message *);
extern void func_80255D14_de(void *, Message *);









static inline Message *recycle(void *owner, void *pool) {
    Message *oldest;

    oldest = ((func_80237E70_S1 *)(owner))->unkF24.v0;
    if (oldest != 0) {
        func_80239CE0_de(oldest);
        func_80255ED8_de(&((func_80237E70_S1 *)(owner))->unkF24.v1, oldest);
        func_80255D14_de(&((func_80239760_S2 *)(pool))->unkE40, oldest);
    }
    return oldest;
}

Message *func_8023A344_de(void *owner, void *pool, u8 *text, s32 kind, f32 size, s32 target) {
    Message *message;
    u8 *line;
    u8 *p;
    s32 height;

    message = 0;
    if (pool == 0) {
        return message;
    }
    if (text == D_800D3008) {
        text = D_800D2FFC;
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
                    message->target = target;
                    message->pad20 = 0;
                    message->pad28 = 0;
                    message->pad2C = 0;
                    message->scaleX = 1.0f;
                    message->scaleY = 1.0f;
                    height = (&D_800DE880_de)[1]; /* FAKEMATCH */
                    message->x = D_800DE880_de / 2;
                    message->y = height - 80;
                    message->size = size * 15.0f;
                }
                line = p + 1;
            }
        }
    }
    return message;
}
