#include "span_16E000/code_8041BEA8.h"
/* Steps the record screen's transition state machine: slides the two panels in or out, swaps the
   visible item groups as each phase's timer runs out, and while idle (state 3) pulses the cursor's
   style from the elapsed time and moves the cursor to the node now under focus. */
#include "types.h"





extern Menu_func_8041D134_de *D_800E3590;

extern void func_8025DF34_de(s32 sound);
extern void func_8029973C_de(void);
extern void func_802998A8_de(void);

extern void func_8040E8D8_de(Node_func_8041D134_de *node, s32 enabled);
extern void func_80419F24_de(s32 fade);
extern s32 func_80419F38_de(s32 fade);
extern void func_80419F58_de(s32 fade, s32 speed);
extern Node_func_8041D134_de *func_8041B7FC_de(void *handle, s32 arg1);


extern void func_8041DA5C_de(s32 style);

s32 func_8041D134_de(s32 arg0, s32 arg1, s32 arg2) {
    Node_func_8041D134_de *node;

    switch (D_800E3590->state) {
    case 1:
        D_800E3590->left->x += D_800E3590->leftStep;
        D_800E3590->right->x -= D_800E3590->rightStep;
        if (--D_800E3590->timer <= 0) {
            func_8025DF34_de(0xE79);
            func_8040E8D8_de(D_800E3590->groupA, 1);
            func_80419F58_de(D_800E3590->fade, 4);
            D_800E3590->state = 4;
            D_800E3590->timer = 4;
        }
        break;
    case 2:
        D_800E3590->left->x -= D_800E3590->leftStep;
        D_800E3590->right->x += D_800E3590->rightStep;
        if (--D_800E3590->timer <= 0) {
            D_800E3590->state = 3;
            func_8029973C_de();
            func_802998A8_de();
            return 0;
        }
        break;
    case 4:
        if (func_80419F38_de(D_800E3590->fade) != 0) {
            func_80419F24_de(D_800E3590->fade);
            D_800E3590->state = 6;
            D_800E3590->timer = 4;
            func_8040E8D8_de(D_800E3590->groupB, 1);
            func_8040E8D8_de(D_800E3590->groupC, 1);
        }
        break;
    case 5:
        func_8025DF34_de(0xE78);
        D_800E3590->state = 2;
        D_800E3590->timer = 4;
        func_8040E8D8_de(D_800E3590->groupB, 0);
        func_8040E8D8_de(D_800E3590->groupC, 0);
        func_8040E8D8_de(D_800E3590->groupA, 0);
        break;
    case 6:
        D_800E3590->styleValue += D_800E3590->styleStep;
        D_800E3590->groupC->style += D_800E3590->alphaStep;
        func_8041DA5C_de(D_800E3590->styleValue);
        if (--D_800E3590->timer <= 0) {
            D_800E3590->groupC->style = 100;
            func_8041DA5C_de(0x6E);
            D_800E3590->state = 3;
            func_8040E8D8_de(D_800E3590->cursor, 1);
        }
        break;
    case 7:
        break;
    }

    if (D_800E3590->state == 3) {
        D_800E3590->clock += arg2;
        D_800E3590->cursor->style = func_802B6560_de((f32) D_800E3590->clock * 0.0033333334f) * 30.0f + 220.0f;
        node = func_8041B7FC_de(D_800E3590->handle, 0);
        if (node != D_800E3590->focus) {
            func_8025DF34_de(0xE7E);
            if (D_800E3590->focus != 0) {
                D_800E3590->focus->style = 0x6E;
            }
            D_800E3590->focus = node;
            node->style = 0xE1;
            func_8041D960_de();
            func_8041D4E0_de();
            D_800E3590->cursor->x = node->x - 2;
            D_800E3590->cursor->y = node->y;
        }
    }
    return 0;
}
