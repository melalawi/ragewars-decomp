#include "basetypes.h"

/* Processes a widget with clipping and drawing operations. */

typedef struct {
    s32 x0;
    s32 y0;
    s32 x1;
    s32 y1;
} Quad;

typedef struct {
    u32 words[10];
} Args;

extern s32 func_8040E154(Quad *, Quad *, void *, Args *);
extern void func_802A2898(s32 *, s32 *, s32 *, s32 *);
extern s32 func_8040F508(Quad *, Quad *);
extern void func_802A2870(s32, s32, s32, s32);
extern void func_8040E87C(void *, Args);

void func_8040CA08(void *widget, Args args) {
    Quad first;
    Quad basis;
    Quad value;
    Quad transformed;
    s32 changed;

    changed = 0;
    if (func_8040E154(&first, &basis, widget, &args) != 0) {
        if ((*(u16 *)((char *)widget + 0x12) & 0x200) != 0) {
            func_802A2898(&value.x0, &value.x1, &value.y0, &value.y1);
            transformed = value;
            func_8040F508(&transformed, &basis);
            func_802A2870(transformed.x0, transformed.x1, transformed.y0, transformed.y1);
            changed = 1;
        }
        func_8040E87C(*(void **)((char *)widget + 8), args);
        if (changed != 0) {
            func_802A2870(value.x0, value.x1, value.y0, value.y1);
        }
    }
}
