#include "basetypes.h"

/* Draws the child at 0x8 of window arg0 with the arguments passed by value once func_8040E154 resolves the window's rectangle, and when flag 0x200 of the halfword at 0x12 is set it saves the four values func_802A2898 reports, narrows them by the resolved basis through func_8040F508 and installs them through func_802A2870 around the draw, restoring the saved values after it. Adapted from func_802A2BE0. */

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
extern void func_8040F508(Quad *, Quad *);
extern void func_802A2870(u32, u32, u32, u32);
extern void func_8040E87C(void *, Args);

typedef struct func_8041A834_S1 func_8041A834_S1;
struct func_8041A834_S1 {
    char pad0[0x8];
    void* unk8;
    char pad8[0x12 - 0x8 - sizeof(void*)];
    u16 unk12;
};

void func_8041A834(void *arg0, Args args) {
    Quad first;
    Quad basis;
    Quad value;
    Quad transformed;
    s32 changed;

    changed = 0;
    if (func_8040E154(&first, &basis, arg0, &args) != 0) {
        if ((((func_8041A834_S1 *)(arg0))->unk12 & 0x200) != 0) {
            func_802A2898(&value.x, &value.z, &value.y, &value.w);
            transformed = value;
            func_8040F508(&transformed, &basis);
            func_802A2870(transformed.x, transformed.z,
                          transformed.y, transformed.w);
            changed = 1;
        }
        func_8040E87C(((func_8041A834_S1 *)(arg0))->unk8, args);
        if (changed != 0) {
            func_802A2870(value.x, value.z, value.y, value.w);
        }
    }
}
