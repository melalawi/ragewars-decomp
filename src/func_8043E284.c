/* Clears D_80146914, runs func_802647A8 on the value at 0x4 of the menu's widget and then func_80264268 and func_80264808(widget, 1) on the widget itself, clears the flag at 0x85C of the owner at 0x1C, and returns 1. */
#include "basetypes.h"

typedef struct {
    char pad0[0x4];
    s8 unk4;
} Widget;

typedef struct {
    char pad0[0x85C];
    s32 unk85C;
} Owner;

typedef struct {
    char pad0[0x1C];
    Owner *owner;
    Widget *widget;
} Menu;

extern s32 D_80146914;
extern void func_802647A8(s8);
extern void func_80264268(Widget *);
extern void func_80264808(Widget *, s32);

s32 func_8043E284(s32 arg0, Menu *menu) {
    Widget **slot;

    D_80146914 = 0;
    slot = &menu->widget;
    func_802647A8((*slot)->unk4);
    func_80264268(*slot);
    func_80264808(*slot, 1);
    menu->owner->unk85C = 0;
    return 1;
}
