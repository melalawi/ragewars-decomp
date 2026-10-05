#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8041DF04.h"
#include "types.h"
/* Advances the join screen's pulse timer by delta and sets byte 0x10 of node 0x392 under the edited request's root to 150 plus 100 times the sine of the timer over 300; returns zero. */

#ifdef VERSION_EU_X
#define VV_0392 0x396
#elif defined(VERSION_DE)
#define VV_0392 0x38C
#else
#define VV_0392 0x392
#endif





extern struct Screen_func_8041ECB4_de *D_800DF970;
extern Resource_func_80419E54_de *func_8040EC30_de(void *root, s32 id);
extern f32 func_802B6560_de(f32 angle);

s32 func_8041ECB4_de(void *arg0, void *arg1, s32 delta) {
    Resource_func_80419E54_de *node;

    D_800DF970->timer += delta;
    node = func_8040EC30_de(D_800DF970->roots[D_800DF970->request], VV_0392);
    node->value = (u32)(func_802B6560_de(D_800DF970->timer * 0.0033333334f) * 100.0f + 150.0f);
    return 0;
}
