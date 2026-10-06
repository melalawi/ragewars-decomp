#include "span_16E000/code_8041BEA8.h"
/* Steps the record screen's transition state machine: slides the two panels in or out, swaps the
   visible item groups as each phase's timer runs out, and while idle (state 3) pulses the cursor's
   style from the elapsed time and moves the cursor to the node now under focus. */
#include "types.h"
#include "common/unused.h"





extern Menu_func_8041D134_de *D_800DF540;

extern void func_8025DF34_de(s32 sound);
extern void func_8029973C_de(void);
extern void func_802998A8_de(void);
extern f32 func_802B6560_de(f32 t);
extern void func_8040E8D8_de(Node_func_8041D134_de *node, s32 enabled);
extern void func_80419F24_de(s32 fade);
extern s32 func_80419F38_de(s32 fade);
extern void func_80419F58_de(s32 fade, s32 speed);
extern Node_func_8041D134_de *func_8041B7FC_de(void *handle, s32 arg1);
extern void func_8041D4E0_de(void);

extern void func_8041DA5C_de(s32 style);

s32 func_8041D134_de(s32 arg0, s32 arg1, s32 arg2) {
    Node_func_8041D134_de *node;

    switch (D_800DF540->state) {
    case 1:
        D_800DF540->left->x += D_800DF540->leftStep;
        D_800DF540->right->x -= D_800DF540->rightStep;
        if (--D_800DF540->timer <= 0) {
            func_8025DF34_de(0xE79);
            func_8040E8D8_de(D_800DF540->groupA, 1);
            func_80419F58_de(D_800DF540->fade, 4);
            D_800DF540->state = 4;
            D_800DF540->timer = 4;
        }
        break;
    case 2:
        D_800DF540->left->x -= D_800DF540->leftStep;
        D_800DF540->right->x += D_800DF540->rightStep;
        if (--D_800DF540->timer <= 0) {
            D_800DF540->state = 3;
            func_8029973C_de();
            func_802998A8_de();
            return 0;
        }
        break;
    case 4:
        if (func_80419F38_de(D_800DF540->fade) != 0) {
            func_80419F24_de(D_800DF540->fade);
            D_800DF540->state = 6;
            D_800DF540->timer = 4;
            func_8040E8D8_de(D_800DF540->groupB, 1);
            func_8040E8D8_de(D_800DF540->groupC, 1);
        }
        break;
    case 5:
        func_8025DF34_de(0xE78);
        D_800DF540->state = 2;
        D_800DF540->timer = 4;
        func_8040E8D8_de(D_800DF540->groupB, 0);
        func_8040E8D8_de(D_800DF540->groupC, 0);
        func_8040E8D8_de(D_800DF540->groupA, 0);
        break;
    case 6:
        D_800DF540->styleValue += D_800DF540->styleStep;
        D_800DF540->groupC->style += D_800DF540->alphaStep;
        func_8041DA5C_de(D_800DF540->styleValue);
        if (--D_800DF540->timer <= 0) {
            D_800DF540->groupC->style = 100;
            func_8041DA5C_de(0x6E);
            D_800DF540->state = 3;
            func_8040E8D8_de(D_800DF540->cursor, 1);
        }
        break;
    case 7:
        break;
    }

    if (D_800DF540->state == 3) {
        D_800DF540->clock += arg2;
        D_800DF540->cursor->style = func_802B6560_de((f32) D_800DF540->clock * 0.0033333334f) * 30.0f + 220.0f;
        node = func_8041B7FC_de(D_800DF540->handle, 0);
        if (node != D_800DF540->focus) {
            func_8025DF34_de(0xE7E);
            if (D_800DF540->focus != 0) {
                D_800DF540->focus->style = 0x6E;
            }
            D_800DF540->focus = node;
            node->style = 0xE1;
            func_8041D960_de();
            func_8041D4E0_de();
            D_800DF540->cursor->x = node->x - 2;
            D_800DF540->cursor->y = node->y;
        }
    }
    return 0;
}
