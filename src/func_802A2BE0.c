#include "basetypes.h"

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

void func_802A2BE0(void *arg0, Args args) {
    Quad first;
    Quad basis;
    Quad value;
    Quad transformed;
    s32 changed;

    changed = 0;
    if (func_8040E154(&first, &basis, arg0, &args) != 0) {
        if ((*(u16 *)((char *)arg0 + 0x12) & 0x200) != 0) {
            func_802A2898(&value.x, &value.z, &value.y, &value.w);
            transformed = value;
            func_8040F508(&transformed, &basis);
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
