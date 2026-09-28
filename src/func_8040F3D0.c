#include "basetypes.h"

/* Draws the child at 0x8 of a window with the arguments passed by value after clearing D_800E2AB8 once func_8040E154 resolves the window's rectangle, and when flag 0x200 of the halfword at 0x12 is set it saves the four values func_802A2898 reports, narrows them by the resolved basis through func_8040F508, giving up when it fails, and installs them through func_802A2870 around the draw, restoring the saved values after it. Adapted from func_8041BA80 with D_800E2AB8 cleared before the rectangle is resolved, the resolved basis declared first, and a failed func_8040F508 ending the function. */

typedef struct {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
} Quad;

typedef struct {
    u32 words[10];
} Args;

extern s32 func_8040E154(Quad *, Quad *, void *, Args *);
extern void func_802A2898(u32 *, u32 *, u32 *, u32 *);
extern s32 func_8040F508(Quad *, Quad *);
extern void func_802A2870(u32, u32, u32, u32);
extern void func_8040E87C(void *, Args);
extern s32 D_800E2AB8;

void func_8040F3D0(void *arg0, Args args) {
    Quad basis;
    Quad value;
    Quad transformed;
    Quad first;
    s32 changed;

    changed = 0;
    D_800E2AB8 = 0;
    if (func_8040E154(&first, &basis, arg0, &args) != 0) {
        if ((*(u16 *)((char *)arg0 + 0x12) & 0x200) != 0) {
            func_802A2898(&value.x, &value.z, &value.y, &value.w);
            transformed = value;
            if (func_8040F508(&transformed, &basis) == 0) {
                return;
            }
            func_802A2870(transformed.x, transformed.z,
                          transformed.y, transformed.w);
            changed = 1;
        }
        func_8040E87C(*(void **)((char *)arg0 + 8), args);
        if (changed != 0) {
            func_802A2870(value.x, value.z, value.y, value.w);
        }
    }
}
