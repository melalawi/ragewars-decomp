#include "basetypes.h"

typedef struct {
    char pad[0x44];
    s32 field44;
} Obj;

extern f32 D_800CC7D8[2];

s32 func_802B8DA0(Obj *arg0, s32 arg1) {
    f32 v;
    int idx;

    v = (f32)arg1 * (f32)arg0->field44;
    idx = 0;
    v = v * D_800CC7D8[idx];
    v = v + D_800CC7D8[1];
    return (s32)v & ~0xF;
}
