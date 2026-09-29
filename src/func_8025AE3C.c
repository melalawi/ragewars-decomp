/* Updates a playing view each frame: records the result of func_80239594 for its position in the context, selects its channel and checks whether it still plays; a view past its end, finished once, or whose track changed is marked done, and a done view that still plays is stopped once per frame and loses its handle; a stopped view first waits out its hold count, then is released with its slot and state cleared unless it is fading, while a playing view copies its tracked position and runs its three per-frame updates. The first channel selection matches as an inline helper returning the channel. */
#include "basetypes.h"

typedef struct Vec3 {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

typedef struct Slots {
    char pad0[0x60];
    s16 ids[16];
} Slots;

typedef struct Context {
    char pad0[0x7C];
    Slots slots;
    char padFC[0x104 - 0xFC];
    s32 frame;
    char pad108[0x134 - 0x108];
    s32 track;
    char pad138[0x2B98 - 0x138];
    s32 result;
} Context;

typedef struct View {
    s32 slot;
    s32 handle;
    s32 field8;
    s32 fieldC;
    s32 frame;
    char pad14[4];
    s32 finished;
    char pad1C[0x2C - 0x1C];
    f32 time;
    char pad30[0x38 - 0x30];
    s16 field38;
    s16 field3A;
    char pad3C[0x44 - 0x3C];
    Vec3 position;
    Vec3 *tracked;
    char pad54[0xA0 - 0x54];
    s32 hold;
    s32 flags;
    s32 trackId;
    s32 done;
    Context *context;
    s32 fieldB4;
    char padB8[4];
    s32 followTrack;
} View;

extern char D_80145088;
extern f32 D_800C9058;

extern s32 func_80239594(void *, Vec3 *);
extern void func_802B7FD0(char *, s32);
extern s32 func_802B76F0(char *);
extern void func_802B8030(char *);
extern void func_802B7E50(char *);
extern void func_802B76A0(char *, s32);
extern void func_8025A3EC(View *);
extern void func_8025A864(View *);
extern void func_8025ABB4(View *);

typedef struct func_8025AE3C_S1 func_8025AE3C_S1;
struct func_8025AE3C_S1 {
    char pad0[0x84];
    char unk84;
};

static inline char *selectChannel(Context *context, s32 slot) {
    func_802B7FD0(&((func_8025AE3C_S1 *)(context))->unk84, context->slots.ids[slot]);
    return &((func_8025AE3C_S1 *)(context))->unk84;
}

void func_8025AE3C(View *view) {
    char *channel;
    Context *context;
    Slots *slots;
    s32 playing;

    view->context->result = func_80239594(&D_80145088, &view->position);
    playing = func_802B76F0(selectChannel(view->context, view->slot));
    if (view->time <= D_800C9058 || ((view->flags & 4) && view->finished == 0)) {
        view->done = 1;
    }
    if (view->followTrack != 0 && view->context->track != view->trackId) {
        view->done = 1;
    }
    if (playing != 0) {
        if (view->done != 0) {
            view->done = 1;
            view->tracked = 0;
            context = view->context;
            if (view->frame != context->frame) {
                channel = &((func_8025AE3C_S1 *)(context))->unk84;
                func_802B7FD0(channel, context->slots.ids[view->slot]);
                if (func_802B76F0(channel) != 0) {
                    func_802B8030(channel);
                }
                view->handle = -1;
            }
            return;
        }
    } else if (view->hold > 0) {
        view->hold--;
        view->flags |= 0x10;
        return;
    }
    if ((view->flags & 0x18) == 0x10) {
        func_802B7E50((char *)view->context + 0x84);
        return;
    }
    if (playing == 0) {
        context = view->context;
        slots = &context->slots;
        func_802B76A0(&((func_8025AE3C_S1 *)(context))->unk84, slots->ids[view->slot]);
        slots->ids[view->slot] = -1;
        view->field38 = 0;
        view->fieldC = -1;
        view->field8 = -1;
        view->trackId = -1;
        view->field3A = -1;
        view->fieldB4 = -1;
        return;
    }
    if (view->tracked != 0) {
        view->position = *view->tracked;
    }
    func_8025A3EC(view);
    func_8025A864(view);
    func_8025ABB4(view);
}
