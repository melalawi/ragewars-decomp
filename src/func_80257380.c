/* Initialises a renderer context: under its own lock sets up the frame buffer pool with the screen size, creates the graphics task queue with a 0x5622-byte 37-by-37 descriptor, records the free-memory split, loads the shared font and its glyph table, sorts the glyph offsets in ascending order, sets the draw list, clears the sixteen slot ids and the layer state, initialises the view and panel state, sets the background colour from the saved RGB bytes scaled to unit range with full alpha, initialises the menu and marks the renderer ready. The lock helpers are inline, and the sixteen slot ids are filled from a local s16 holding -1. */
#include "basetypes.h"

typedef struct Glyphs {
    char pad0[0xE];
    s16 count;
    u32 offsets[1];
} Glyphs;

typedef struct Font {
    char pad0[4];
    struct Font *next;
    char pad8[4];
    struct Font *child;
} Font;

typedef struct Lock {
    char queue[0x1C];
    s32 count;
} Lock;

typedef struct Context {
    char pad0[0x24];
    s32 field24;
    s32 field28;
    char *field2C;
    char pad30[0x7C - 0x30];
    Font *font;
    Font *resource;
    char list[0x110 - 0x84];
    Lock lock;
    char pad130[0x138 - 0x130];
    char view[0x1D64 - 0x138];
    char panel[0x1D6C - 0x1D64];
    s32 field1D6C;
    char pad1D70[0x1DA8 - 0x1D70];
    char frames[0x10];
    char menu[0x2B88 - 0x1DB8];
    s32 field2B88;
    s16 field2B8C;
    char pad2B8E[6];
    u8 field2B94;
    char pad2B95[3];
    s32 field2B98;
    s32 field2B9C;
    f32 red;
    f32 green;
    f32 blue;
    s32 field2BAC;
    s32 field2BB0;
    s32 field2BB4;
    s32 field2BB8;
    f32 alpha;
    char dialog[1];
} Context;

typedef struct TaskSetup {
    s32 width;
    s32 height;
    s32 size;
    s32 pad0C;
    s32 field10;
    char *frames;
    s32 pad18;
    s8 priority;
    char pad1D[3];
    void *name;
} TaskSetup;

typedef struct TaskStack {
    s32 id;
    s32 flags;
    s32 size;
} TaskStack;

extern s32 D_801536B0;
extern s32 D_801536EC;
extern s32 D_800D2B30;
extern char D_800D0964;
extern s32 D_8010B6A0;
extern u8 D_801462DE[];
extern s32 D_800D0960;

extern void func_802567C4(void *);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(void *, s32, s32);
extern s32 func_802C0510(void *, s32, s32);
extern void func_802B5460(char *, s32, s32);
extern void func_802568A0(TaskSetup *, s32, TaskStack *);
extern s32 func_80265984(s32);
extern Font *func_8023C77C(s32, s32, s32);
extern void func_802576AC(Context *);
extern void func_8025D864(char *, Context *);
extern void func_802B7720(char *, s32 *);
extern void func_802596D4(char *, Context *);
extern void func_8025B778(char *, Context *);
extern void func_8025D178(char *, Context *);

static inline void lock(Lock *lock) {
    u32 token = func_802C2020();
    s32 counter = lock->count + 1;

    lock->count = counter;
    if (counter != 1) {
        func_802C2040(token);
        func_802C0390(lock, 0, 1);
    } else {
        func_802C2040(token);
    }
}

static inline void unlock(Lock *lock) {
    u32 token = func_802C2020();
    s32 counter = lock->count - 1;

    lock->count = counter;
    if (counter != 0) {
        func_802C2040(token);
        func_802C0510(lock, 0, 1);
    } else {
        func_802C2040(token);
    }
}

void func_80257380(Context *context) {
    TaskSetup setup;
    TaskStack stack;
    Font *font;
    Glyphs *glyphs;
    s32 i;
    s32 j;
    s32 k;
    s16 none;
    u32 a;
    u32 b;

    func_802567C4(&context->lock);
    lock(&context->lock);
    ((s32 *)context)[0x36] = 0;
    func_802B5460(context->frames, D_801536B0, D_801536EC);
    setup.width = 0x25;
    setup.height = 0x25;
    setup.size = 0x100;
    setup.priority = 6;
    setup.name = &D_800D0964;
    stack.id = 0x5622;
    stack.flags = 1;
    setup.field10 = 0;
    setup.frames = context->frames;
    stack.size = 0x800;
    func_802568A0(&setup, D_800D2B30, &stack);
    D_8010B6A0 = func_80265984(8);
    font = func_8023C77C(func_80265984(4) - func_80265984(0), 0, func_80265984(0));
    context->field1D6C = (s32)font->next;
    font = font->child;
    context->resource = font;
    context->font = font->next;
    func_802576AC(context);
    func_8025D864(context->panel, context);
    glyphs = (Glyphs *)context->font->child;
    for (i = 0; i < glyphs->count; i++) {
        for (j = i + 1; j < glyphs->count; j++) {
            a = glyphs->offsets[j];
            b = glyphs->offsets[i];
            if (a < b) {
                glyphs->offsets[i] = a;
                glyphs->offsets[j] = b;
            }
        }
    }
    context->field24 = 0x11;
    context->field28 = 0xC0;
    context->field2C = context->frames;
    func_802B7720(context->list, &context->field24);
    none = -1;
    for (k = 15; k >= 0; k--) {
        ((s16 *)context)[0x6E + k] = none;
    }
    ((s16 *)context)[0x81] = -1;
    context->field2B8C = -1;
    ((s32 *)context)[0x42] = 0;
    ((s32 *)context)[0x41] = 0;
    context->field2B88 = 0;
    context->field2B94 = 0x40;
    context->field2B98 = 0;
    context->field2BB8 = 0;
    context->field2B9C = 0;
    func_802596D4(context->view, context);
    func_8025B778(context->menu, context);
    context->red = D_801462DE[3] * 0.003921569f;
    context->green = D_801462DE[2] * 0.003921569f;
    context->blue = D_801462DE[4] * 0.003921569f;
    context->field2BAC = 0;
    context->field2BB0 = D_801462DE[1];
    context->field2BB4 = 1;
    context->alpha = 1.0f;
    func_8025D178(context->dialog, context);
    D_800D0960 = 1;
    unlock(&context->lock);
}
