/* Posts a text as on-screen messages, one per line: the text (or D_800D7028 when given D_800D7034) is split
 * at newlines and for each non-empty line the oldest message node of the owner's list at 0xF24 is recycled
 * (cleared through func_80239CD0, unlinked, and pushed onto the free list at 0xE40 of the pool) and set up
 * as a kind 2 message centred horizontally 80 pixels above the bottom of the screen, scaled by the given
 * size. Returns the last message node. */
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

typedef struct { u8 * unk0; } func_80239760_G1;
extern func_80239760_G1 D_800D7028;
typedef struct { u8 * unk0; } func_80239760_G2;
extern func_80239760_G2 D_800D7034;
extern s32 D_800E28D0;
extern void func_80239CD0(Message *);
extern void func_80255E78(void *, Message *);
extern void func_80255CB4(void *, Message *);

typedef struct func_80239760_S1 func_80239760_S1;
typedef struct func_80239760_S2 func_80239760_S2;
typedef struct func_80239760_S3 func_80239760_S3;
typedef union func_80239760_S1_UF24 { Message* v0; char v1; } func_80239760_S1_UF24;
struct func_80239760_S1 {
    char pad0[0xF24];
    func_80239760_S1_UF24 unkF24;
};
struct func_80239760_S2 {
    char pad0[0xE40];
    char unkE40;
};
struct func_80239760_S3 {
    char pad0[0x4];
    s32 unk4;
};

static inline Message *recycle(void *owner, void *pool) {
    Message *oldest;

    oldest = ((func_80239760_S1 *)(owner))->unkF24.v0;
    if (oldest != 0) {
        func_80239CD0(oldest);
        func_80255E78(&((func_80239760_S1 *)(owner))->unkF24.v1, oldest);
        func_80255CB4(&((func_80239760_S2 *)(pool))->unkE40, oldest);
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
    if (text == D_800D7034.unk0) {
        text = D_800D7028.unk0;
    }
    p = text;
    line = p;
    while (*p != 0) {
        p++;
        if (*p == '\n' || *p == 0) {
            if (line != p) {
                message = recycle(owner, pool);
                if (message != 0) {
                    s32 half = D_800E28D0; /* FAKEMATCH */
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
                    height = (&D_800E28D0)[1]; /* FAKEMATCH */
                    message->x = half / 2;
                    message->y = height - 80;
                    message->size = size * 15.0f;
                }
                line = p + 1;
            }
        }
    }
    return message;
}

Message *func_80239760(void *owner, void *pool, u8 *text, f32 size) {
    return post_lines(owner, pool, text, 2, size, -1);
}
