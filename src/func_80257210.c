/* Returns the physical address of a ROM offset through the 0x300-byte ROM window cache: a cached window
 * covering the offset and length is stamped with the current frame; otherwise a free window node is
 * linked in address order (or at the head), aligned to an even start, stamped, counted, filled from ROM
 * through func_802563F4 and its buffer address returned with the odd byte added back. */
#include "basetypes.h"

typedef struct Window {
    struct Window *next;
    struct Window *prev;
    u32 base;
    s32 frame;
    s32 buffer;
} Window;

extern s32 D_8010B6A0;
extern Window *D_8010BDF4;
extern Window *D_8010BDF8;
extern s32 D_800D0940;
extern s32 D_800D0944;
extern char D_801051B8;
extern char D_8010BDD8;
extern void func_802B7520(Window *);
extern void func_802B7550(Window *, Window *);
extern void func_802563F4(void *, u32, s32, s32, void *, s32, s32);
extern u32 func_802C0CB0(s32);

u32 func_80257210(s32 offset, s32 length) {
    Window *window;
    Window *after;
    Window **pool;
    u32 address;
    s32 end;
    s32 top;
    s32 odd;
    s32 word;

    after = 0;
    address = offset + D_8010B6A0;
    end = address + length;
    for (window = D_8010BDF4; window != 0; window = window->next) {
        top = window->base + 0x300;
        word = window->base;
        if (address < word) {
            break;
        }
        after = window;
        if (top >= end) {
            window->frame = D_800D0940;
            return func_802C0CB0(window->buffer + address - window->base);
        }
    }
    pool = &D_8010BDF8;
    window = *pool;
    *pool = window->next;
    func_802B7520(window);
    if (after != 0) {
        func_802B7550(window, after);
    } else if (pool[-1] != 0) {
        after = pool[-1];
        pool[-1] = window;
        window->next = after;
        window->prev = 0;
        after->prev = window;
    } else {
        pool[-1] = window;
        window->next = 0;
        window->prev = 0;
    }
    odd = address & 1;
    address -= odd;
    window->base = address;
    window->frame = D_800D0940;
    word = window->buffer;
    D_800D0944++;
    func_802563F4(&D_801051B8, address, 0x300, word, &D_8010BDD8, 0, 1);
    return func_802C0CB0(word) + odd;
}
