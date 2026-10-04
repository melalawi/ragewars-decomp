#include "span_1000/code_8029AC80.h"
#include "types.h"

extern void func_8029AB24_de(s8 port, s32 stick_x, s32 stick_y);
extern void func_8029AAD8_de(s8 port, s32 event, s32 pressed);

#define DISPATCH_EDGE(button_mask, event_id, label)                  \
    if (!(current & (button_mask))) goto release_##label;            \
    if (previous & (button_mask)) goto select_##label;               \
    func_8029AAD8_de(((func_8029B650_S1 *)(arg0))->unk4, (event_id), 1);                 \
    return;                                                         \
release_##label:                                                    \
    if (!(previous & (button_mask))) goto next_##label;             \
select_##label:                                                     \
    if (current & (button_mask)) goto next_##label;                 \
    func_8029AAD8_de(((func_8029B650_S1 *)(arg0))->unk4, (event_id), 0);                 \
    return;                                                         \
next_##label:




/**
 * Dispatch the first controller-button edge since the previous sample.
 *
 * @name CInput__DispatchButtonEdges
 * @param arg0 Per-controller input context. Offset 0x04 is the controller
 *             port identifier carried by emitted events; 0xB0 and 0xAC are
 *             the current and previous button bitfields; 0xC4 and 0xC5 are
 *             the current analog-stick X and Y samples.
 *
 * The analog-stick sample is posted first through func_8029AB24_de. If the
 * digital button bitfields differ, the masks are then tested in priority
 * order. The first 0-to-1 transition calls func_8029AAD8_de(port, event, 1) for
 * a press, while the first 1-to-0 transition calls it with 0 for a release;
 * the function returns after dispatching that one digital edge.
 *
 * Button event map: Start 0x1000 -> 13; A 0x8000 -> 11; B 0x4000 -> 12;
 * L 0x0020 -> 9; R 0x0010 -> 8; Z 0x2000 -> 10; D-Up 0x0800 -> 4;
 * D-Left 0x0200 -> 6; D-Right 0x0100 -> 7; D-Down 0x0400 -> 5;
 * C-Up 0x0008 -> 0; C-Left 0x0002 -> 2; C-Right 0x0001 -> 3;
 * C-Down 0x0004 -> 1.
 *
 * Game role: Converts raw controller state into the press/release events used
 * by firing, jumping, weapon switching, menu navigation, and pausing.
 */
void func_8029A650_de(char *arg0) {
    s32 current;
    s32 previous;

    current = ((func_8029B650_S1 *)(arg0))->unkB0;
    previous = ((func_8029B650_S1 *)(arg0))->unkAC;
    func_8029AB24_de(((func_8029B650_S1 *)(arg0))->unk4, ((func_8029B650_S1 *)(arg0))->unkC4,
                  ((func_8029B650_S1 *)(arg0))->unkC5);

    if (current == previous) {
        return;
    }

    DISPATCH_EDGE(0x1000, 13, start)   /* Start */
    DISPATCH_EDGE(0x8000, 11, a)      /* A */
    DISPATCH_EDGE(0x4000, 12, b)      /* B */
    DISPATCH_EDGE(0x20, 9, l)         /* L */
    DISPATCH_EDGE(0x10, 8, r)         /* R */
    DISPATCH_EDGE(0x2000, 10, z)      /* Z */
    DISPATCH_EDGE(0x800, 4, d_up)     /* D-Up */
    DISPATCH_EDGE(0x200, 6, d_left)   /* D-Left */
    DISPATCH_EDGE(0x100, 7, d_right)  /* D-Right */
    DISPATCH_EDGE(0x400, 5, d_down)   /* D-Down */
    DISPATCH_EDGE(8, 0, c_up)         /* C-Up */
    DISPATCH_EDGE(2, 2, c_left)       /* C-Left */
    DISPATCH_EDGE(1, 3, c_right)      /* C-Right */
    DISPATCH_EDGE(4, 1, c_down)       /* C-Down */
}
