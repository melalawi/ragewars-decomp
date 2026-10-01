#include "basetypes.h"

/* Initialises the interface system for a number of screens: resets the input state and display, allocates and clears the 0x544-byte interface state in D_8014D080 with its 64 widget slots, its 900-byte object cache and its screen table, records the screen count, a 4000 limit and the frame duration from func_802A28CC, resets the focus and paging fields, and registers fonts 9 and 11. */

typedef struct Slot {
    s32 id;
    s32 field4;
    s32 field8;
    s32 fieldC;
    s32 field10;
} Slot;

typedef struct Ui {
    s32 pad0;
    s32 current;
    s32 pad8;
    void *screens;
    s32 value;
    s32 limit;
    s32 screenCount;
    Slot slots[64];
    s32 pad51C[2];
    s32 frames;
    s32 focus;
    s32 paging;
    s32 pad530;
    s32 field534;
    s32 field538;
    void *cache;
    s32 cacheCount;
} Ui;

extern Ui *D_8014D080;
extern s32 D_8014D084;
extern s32 D_8014D088;
extern s32 D_8014D08C;
extern s32 D_8014D094;
extern s32 D_8014D098;
extern f64 D_800CA7F8;
extern char D_40C640;
extern char D_40C648;
extern char D_412624;
extern char D_4126B4;
extern void func_802A2918(s32 *width, s32 *height);
extern void func_80411F6C(void);
extern void func_8040F5B4(s32 width, s32 height);
extern void func_8029BA78(void);
extern void *func_80252FFC(s32 size);
extern void func_802A1748(void *buffer, s32 value, s32 size);
extern f64 func_802A28CC(void);
extern void func_802992C4(s32 font, void *start, void *end, s32 arg3);

void func_80298FA0(s32 screenCount, s32 value) {
    s32 i;
    f64 frames;

    D_8014D098 = -1;
    func_802A2918(&D_8014D088, &D_8014D08C);
    func_80411F6C();
    func_8040F5B4(D_8014D088, D_8014D08C);
    func_8029BA78();
    D_8014D084 = 0;
    D_8014D080 = func_80252FFC(0x544);
    func_802A1748(D_8014D080, 0, 0x544);
    D_8014D080->value = value;
    D_8014D080->limit = 4000;
    {
        Slot *slot = D_8014D080->slots;
        s32 *ids = &D_8014D080->slots[0].id;
        for (i = 0; i < 64; slot++, i++, ids += 5) {
            slot->field8 = 0;
            *ids = -1;
            slot->field4 = 0;
            slot->fieldC = 0;
        }
    }
    D_8014D080->cache = func_80252FFC(0x384);
    func_802A1748(D_8014D080->cache, 0, 0x384);
    D_8014D080->cacheCount = 0;
    frames = func_802A28CC() * D_800CA7F8;
    D_8014D080->screenCount = screenCount;
    D_8014D080->frames = frames;
    D_8014D080->screens = func_80252FFC(screenCount * 28);
    func_802A1748(D_8014D080->screens, 0, screenCount * 28);
    D_8014D094 = 0;
    D_8014D080->current = -1;
    D_8014D080->focus = -1;
    D_8014D080->field534 = 0;
    D_8014D080->field538 = 0;
    D_8014D080->paging = 1;
    func_802992C4(9, &D_40C640, &D_40C648, 1);
    func_802992C4(11, &D_412624, &D_4126B4, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5598_8 = 1000.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CA7F8_8 = 1000.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5908_8 = 1000.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5948_8 = 1000.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5668_8 = 1000.0;
#endif
