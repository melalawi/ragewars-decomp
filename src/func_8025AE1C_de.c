#include "common/types.h"
#include "span_1000/code_8025AE3C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Updates a playing view each frame: records the result of func_802395A4_de for its position in the context, selects its channel and checks whether it still plays; a view past its end, finished once, or whose track changed is marked done, and a done view that still plays is stopped once per frame and loses its handle; a stopped view first waits out its hold count, then is released with its slot and state cleared unless it is fading, while a playing view copies its tracked position and runs its three per-frame updates. The first channel selection matches as an inline helper returning the channel. */









extern char D_80140FC8;


extern s32 func_802395A4_de(void *, Triple *);
extern void func_802B2F00_de(char *, s32);
extern s32 func_802B2620_de(char *);
extern void func_802B2F60_de(char *);
extern void func_802B2D80_de(char *);
extern void func_802B25D0_de(char *, s32);
extern void func_8025A3CC_de(View_func_8025AE1C_de *);
extern void func_8025A844_de(View_func_8025AE1C_de *);
extern void func_8025AB94_de(View_func_8025AE1C_de *);




static inline char *selectChannel(Context_func_8025AE1C_de *context, s32 slot) {
    func_802B2F00_de(&((func_80258D60_S1 *)(context))->unk84, context->slots.ids[slot]);
    return &((func_80258D60_S1 *)(context))->unk84;
}

void func_8025AE1C_de(View_func_8025AE1C_de *view) {
    char *channel;
    Context_func_8025AE1C_de *context;
    Slots *slots;
    s32 playing;

    view->context->result = func_802395A4_de(&D_80140FC8, &view->position);
    playing = func_802B2620_de(selectChannel(view->context, view->slot));
    if (view->time <= D_800C3F68_de || ((view->flags & 4) && view->finished == 0)) {
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
                channel = &((func_80258D60_S1 *)(context))->unk84;
                func_802B2F00_de(channel, context->slots.ids[view->slot]);
                if (func_802B2620_de(channel) != 0) {
                    func_802B2F60_de(channel);
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
        func_802B2D80_de((char *)view->context + 0x84);
        return;
    }
    if (playing == 0) {
        context = view->context;
        slots = &context->slots;
        func_802B25D0_de(&((func_80258D60_S1 *)(context))->unk84, slots->ids[view->slot]);
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
    func_8025A3CC_de(view);
    func_8025A844_de(view);
    func_8025AB94_de(view);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E98_4 = 0.075000003f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9058_4 = 0.075000003f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4218_4 = 0.075000003f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4258_4 = 0.075000003f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F68_4 = 0.075000003f;
#endif
