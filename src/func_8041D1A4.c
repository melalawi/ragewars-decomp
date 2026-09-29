/* Steps the record screen's transition state machine: slides the two panels in or out, swaps the
   visible item groups as each phase's timer runs out, and while idle (state 3) pulses the cursor's
   style from the elapsed time and moves the cursor to the node now under focus. */
#include "basetypes.h"

typedef struct Node {
    char pad0[0x10];
    u8 style;
    char pad11[0x14 - 0x11];
    u16 x;
    u16 y;
} Node;

typedef struct Menu {
    char pad0[4];
    void *handle;
    char pad8[0xC8 - 8];
    Node *left;
    char padCC[2];
    u16 leftStep;
    Node *right;
    char padD4[2];
    u16 rightStep;
    s32 state;
    s32 timer;
    s32 fade;
    Node *groupA;
    Node *cursor;
    Node *focus;
    char padF0[4];
    Node *groupB;
    s32 styleStep;
    s32 styleValue;
    Node *groupC;
    char pad104[3];
    u8 alphaStep;
    s32 clock;
} Menu;

extern Menu *D_800E3590;

extern void func_8025DF54(s32 sound);
extern void func_8029A73C(void);
extern void func_8029A8A8(void);
extern f32 func_802BB630(f32 t);
extern void func_8040E958(Node *node, s32 enabled);
extern void func_80419FA4(s32 fade);
extern s32 func_80419FB8(s32 fade);
extern void func_80419FD8(s32 fade, s32 speed);
extern Node *func_8041B87C(void *handle, s32 arg1);
extern void func_8041D550(void);
extern void func_8041D9D0(void);
extern void func_8041DACC(s32 style);

s32 func_8041D1A4(s32 arg0, s32 arg1, s32 arg2) {
    Node *node;

    switch (D_800E3590->state) {
    case 1:
        D_800E3590->left->x += D_800E3590->leftStep;
        D_800E3590->right->x -= D_800E3590->rightStep;
        if (--D_800E3590->timer <= 0) {
            func_8025DF54(0xE79);
            func_8040E958(D_800E3590->groupA, 1);
            func_80419FD8(D_800E3590->fade, 4);
            D_800E3590->state = 4;
            D_800E3590->timer = 4;
        }
        break;
    case 2:
        D_800E3590->left->x -= D_800E3590->leftStep;
        D_800E3590->right->x += D_800E3590->rightStep;
        if (--D_800E3590->timer <= 0) {
            D_800E3590->state = 3;
            func_8029A73C();
            func_8029A8A8();
            return 0;
        }
        break;
    case 4:
        if (func_80419FB8(D_800E3590->fade) != 0) {
            func_80419FA4(D_800E3590->fade);
            D_800E3590->state = 6;
            D_800E3590->timer = 4;
            func_8040E958(D_800E3590->groupB, 1);
            func_8040E958(D_800E3590->groupC, 1);
        }
        break;
    case 5:
        func_8025DF54(0xE78);
        D_800E3590->state = 2;
        D_800E3590->timer = 4;
        func_8040E958(D_800E3590->groupB, 0);
        func_8040E958(D_800E3590->groupC, 0);
        func_8040E958(D_800E3590->groupA, 0);
        break;
    case 6:
        D_800E3590->styleValue += D_800E3590->styleStep;
        D_800E3590->groupC->style += D_800E3590->alphaStep;
        func_8041DACC(D_800E3590->styleValue);
        if (--D_800E3590->timer <= 0) {
            D_800E3590->groupC->style = 100;
            func_8041DACC(0x6E);
            D_800E3590->state = 3;
            func_8040E958(D_800E3590->cursor, 1);
        }
        break;
    case 7:
        break;
    }

    if (D_800E3590->state == 3) {
        D_800E3590->clock += arg2;
        D_800E3590->cursor->style = func_802BB630((f32) D_800E3590->clock * 0.0033333334f) * 30.0f + 220.0f;
        node = func_8041B87C(D_800E3590->handle, 0);
        if (node != D_800E3590->focus) {
            func_8025DF54(0xE7E);
            if (D_800E3590->focus != 0) {
                D_800E3590->focus->style = 0x6E;
            }
            D_800E3590->focus = node;
            node->style = 0xE1;
            func_8041D9D0();
            func_8041D550();
            D_800E3590->cursor->x = node->x - 2;
            D_800E3590->cursor->y = node->y;
        }
    }
    return 0;
}
