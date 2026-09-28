/* Posts a text as on-screen messages, one per line, with the given kind, target and size: the text (or
 * D_800D7028 when given D_800D7034) is split at newlines and for each non-empty line the oldest message node
 * of the owner's list at 0xF24 is recycled (cleared through func_80239CD0, unlinked, and pushed onto the free
 * list at 0xE40 of the pool) and set up as a message centred horizontally 80 pixels above the bottom of the
 * screen, scaled by the given size. Returns the last message node. */
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

Message *func_8023A334(void *owner, void *pool, u8 *text, s32 kind, f32 size, s32 target) {
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
                    message->target = target;
                    message->pad20 = 0;
                    message->pad28 = 0;
                    message->pad2C = 0;
                    message->scaleX = 1.0f;
                    message->scaleY = 1.0f;
                    message->x = D_800E28D0 / 2;
                    message->y = *(s32 *)((char *)&D_800E28D0 + 4) - 80;
                    message->size = size * 15.0f;
                }
                line = p + 1;
            }
        }
    }
    return message;
}
