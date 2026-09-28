/* Posts a text as on-screen messages, one per line: when func_80245774 reports it, the messages already in
 * the pool's list at 0xE40 are flagged kind 4 and the new ones get kind 1, otherwise kind 2; the text (or
 * D_800D7028 when given D_800D7034) is split at newlines and for each non-empty line the oldest message node
 * of the owner's list at 0xF24 is recycled and set up centred horizontally 80 pixels above the bottom of the
 * screen at unit size. Returns the last message node. */
#include "basetypes.h"

typedef struct {
    char pad0[0xC];
    f32 size;
    f32 alpha;
    s32 kind;
    s32 timer;
    s32 target;
    s32 pad20;
    u8 *text;
    s32 pad28;
    s32 pad2C;
    f32 x;
    f32 y;
    f32 scaleX;
    f32 scaleY;
} Message;

extern u8 *D_800D7028;
extern u8 *D_800D7034;
extern s32 D_800E28D0;
extern void func_80239CD0(Message *);
extern void func_80255E78(void *, Message *);
extern void func_80255CB4(void *, Message *);
extern s32 func_80245774(void);

static inline Message *recycle(void *owner, void *pool) {
    Message *oldest;

    oldest = *(Message **)((char *)owner + 0xF24);
    if (oldest != 0) {
        func_80239CD0(oldest);
        func_80255E78((char *)owner + 0xF24, oldest);
        func_80255CB4((char *)pool + 0xE40, oldest);
    }
    return oldest;
}

static inline Message *post_lines(void *owner, void *pool, u8 *text, s32 kind, f32 size, s32 target) {
    Message *message;
    u8 *line;
    u8 *p;

    message = 0;
    if (pool == 0) {
        return message;
    }
    if (text == D_800D7034) {
        text = D_800D7028;
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
                    message->x = D_800E28D0 / 2;
                    message->y = *(s32 *)((char *)&D_800E28D0 + 4) - 80;
                }
                line = p + 1;
            }
        }
    }
    return message;
}

Message *func_80237E70(void *owner, void *pool, u8 *text) {
    Message *pending;
    s32 kind;

    kind = 2;
    if (pool == 0) {
        return 0;
    }
    if (func_80245774() != 0) {
        pending = *(Message **)((char *)pool + 0xE40);
        if (pending != 0) {
            kind = 1;
            do {
                pending->kind = 4;
                pending = *(Message **)((char *)pending + 4);
            } while (pending != 0);
        }
    }
    return post_lines(owner, pool, text, kind, 1.0f, -1);
}
