#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80297CD0.h"
#include "span_1000/code_80299DB4.h"
#include "span_16E000/code_8040F1E0.h"
#include "span_16E000/code_80411B68.h"
#include "types.h"

/* Initialises the interface system for a number of screens: resets the input state and display, allocates and clears the 0x544-byte interface state in D_8014D080 with its 64 widget slots, its 900-byte object cache and its screen table, records the screen count, a 4000 limit and the frame duration from func_802A18CC_de, resets the focus and paging fields, and registers fonts 9 and 11. */





extern Ui_func_80297FA0_de *D_80146E00;
extern s32 D_80146E04;


extern s32 D_80146E14;


extern void func_802A1918_de(s32 *width, s32 *height);



extern void *func_8025305C_de(s32 size);
extern void func_802A0748_de(void *buffer, s32 value, s32 size);
extern f64 func_802A18CC_de(void);

void func_80297FA0_de(s32 screenCount, s32 value) {
    s32 i;
    f64 frames;

    D_80146E18 = -1;
    func_802A1918_de(&D_80146E08, &D_80146E0C);
    func_80411EEC_de();
    func_8040F534_de(D_80146E08, D_80146E0C);
    func_8029AA78_de();
    D_80146E04 = 0;
    D_80146E00 = func_8025305C_de(0x544);
    func_802A0748_de(D_80146E00, 0, 0x544);
    D_80146E00->value = value;
    D_80146E00->limit = 4000;
    {
        Rec_func_8024C92C_de *slot = D_80146E00->slots;
        s32 *ids = &D_80146E00->slots[0].x;
        for (i = 0; i < 64; slot++, i++, ids += 5) {
            slot->z = 0;
            *ids = -1;
            slot->y = 0;
            slot->pad0 = 0;
        }
    }
    D_80146E00->cache = func_8025305C_de(0x384);
    func_802A0748_de(D_80146E00->cache, 0, 0x384);
    D_80146E00->cacheCount = 0;
    frames = func_802A18CC_de() * D_800C5668_de;
    D_80146E00->screenCount = screenCount;
    D_80146E00->frames = frames;
    D_80146E00->screens = func_8025305C_de(screenCount * 28);
    func_802A0748_de(D_80146E00->screens, 0, screenCount * 28);
    D_80146E14 = 0;
    D_80146E00->current = -1;
    D_80146E00->focus = -1;
    D_80146E00->field534 = 0;
    D_80146E00->field538 = 0;
    D_80146E00->paging = 1;
    func_802982C4_de(9, D_0040C5C0, D_0040C5C8, 1);
    func_802982C4_de(11, D_004125A4, D_00412634, 1);
}
