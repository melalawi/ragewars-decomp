/* Flushes the queued text sprite batches: when any are queued it selects render mode 0x53333 if
   not already active, saves the clip rectangle and applies the queue's own, then walks the texture
   pages from the lowest first page to the highest last page among the batches, loading each page
   once through func_80410FD4 and func_80417574 (stopping the page when it cannot load) and drawing
   every batch's run of sprites on that page at depth 10 through func_80418E20; finally it restores
   the clip rectangle and empties the queue. */
#include "basetypes.h"

typedef struct {
    s32 glyph;
    f32 x;
    f32 y;
    s32 color;
    f32 scale;
    u16 page;
    u16 pad16;
} Sprite;

typedef struct {
    s32 pad0[4];
    Sprite *cursor;
    s32 count;
} Batch;

typedef struct {
    s32 left;
    s32 top;
    s32 right;
    s32 bottom;
} Rect;

extern s32 D_80153800;
extern s32 D_80153810;
extern s32 D_80153814;
extern s32 D_80153818;
extern s32 D_8015381C;
extern Batch D_80153820[];
extern s32 D_800E2AB8;
extern s32 D_800E2ABC;
extern s32 D_801539A0;
extern s32 D_801539A4;

extern void func_804171B8(s32 mode);
extern void func_802A2898(s32 *left, s32 *right, s32 *top, s32 *bottom);
extern void func_802A2870(s32 left, s32 right, s32 top, s32 bottom);
extern s32 func_80410FD4(s32 page, s32 a, s32 b);
extern void func_80417574(s32 texture);
extern void func_80418E20(f32 x, f32 y, f32 z, s32 color, f32 scale, s32 glyph);

static inline void func_8040CB30_restore(Rect *clip) {
    func_802A2870(clip->left, clip->right, clip->top, clip->bottom);
}

void func_8040CB30(void) {
    u16 first;
    u16 last;
    u16 page;
    s32 i;
    s32 current;
    s32 loaded;
    s32 texture;
    Rect clip;
    Batch *batch;
    Sprite *sprite;

    if (D_80153800 == 0) {
        return;
    }
    first = 0x60;
    last = 0;
    if (D_800E2ABC != 0x53333 || D_800E2AB8 == 0) {
        D_800E2ABC = 0x53333;
        func_804171B8(0x53333);
        D_800E2AB8 = 1;
    }
    func_802A2898(&clip.left, &clip.right, &clip.top, &clip.bottom);
    func_802A2870(D_80153810, D_80153818, D_80153814, D_8015381C);
    for (current = 0; current < D_80153800; current++) {
        sprite = D_80153820[current].cursor;
        page = sprite->page;
        if (first < page) {
            page = first;
        }
        first = page;
        page = sprite[D_80153820[current].count - 1].page;
        if (page < last) {
            page = last;
        }
        last = page;
    }
    for (current = first; current <= last; current++) {
        loaded = 0;
        for (i = 0; i < D_80153800; i++) {
            batch = &D_80153820[i];
            while (current == batch->cursor->page && batch->count > 0) {
                sprite = batch->cursor;
                if (!loaded) {
                    texture = func_80410FD4(current & 0xFF, D_801539A0, D_801539A4);
                    if (texture == 0) {
                        i = D_80153800;
                        break;
                    }
                    func_80417574(texture);
                    loaded = 1;
                }
                func_80418E20(sprite->x, sprite->y, 10.0f, sprite->color, sprite->scale, sprite->glyph);
                batch->cursor++;
                batch->count--;
            }
        }
    }
    func_8040CB30_restore(&clip);
    D_80153800 = 0;
}
