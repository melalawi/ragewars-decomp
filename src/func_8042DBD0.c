/* Builds screen state D_800E5430: allocates 0x24 bytes, sets up the handle for resources
   0x398/0x399, loads resource 0x39C, wires up windows 0x39A and 0x39D, the 0x39B button and
   the delay, and formats D_800E1B60 into the state's text buffer through func_802A1C08. */
#include "basetypes.h"

struct State {
    s32 menu;
    s32 button;
    void *window;
    s32 delay;
    s32 target;
    char text[0xC];
    s32 value;
};

struct Node {
    char pad0[0x10];
    u8 unk10;
    char pad14[0x38 - 0x11];
    void *unk38;
};

extern struct State *D_800E5430;
extern char D_800E1B60[];

extern void *func_80252FFC(s32 size);
extern void func_802A3358(void);
extern s32 func_8041A300(s32, s32);
extern void func_8041A4FC(s32);
extern void func_8041B190(s32);
extern struct Node *func_8040ECB0(s32, s32);
extern s32 func_80419ED4(s32, s32);
extern void func_802A1C08(void *, void *, s32);

s32 func_8042DBD0(s32 arg0) {
    struct State *state;
    s32 handle;
    struct Node *node;
    void *text;

    D_800E5430 = func_80252FFC(0x24);
    func_802A3358();
    handle = func_8041A300(0x398, 0x399);
    state = D_800E5430;
    state->menu = handle;
    func_8041A4FC(handle);
    func_8041B190(0x39C);
    node = func_8040ECB0(arg0, 0x39A);
    state = D_800E5430;
    state->window = node;
    node->unk10 = 0xF;
    handle = func_80419ED4(0x39B, 0x6E);
    state = D_800E5430;
    state->button = handle;
    state->delay = 3;
    node = func_8040ECB0(arg0, 0x39D);
    state = D_800E5430;
    text = &state->text;
    node->unk38 = text;
    state->value = 1;
    func_802A1C08(text, D_800E1B60, 1);
    return 0;
}
