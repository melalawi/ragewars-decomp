#include "basetypes.h"

extern f32 D_800CB028;
extern f32 D_800CB02C;
extern void func_80270980(f32 *, s32);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272898(f32 *arg0);
extern void func_802A35C0(void *arg0, void *arg1, f32 *arg2);

void func_802A68A0(void *arg0, void *arg1, s32 arg2) {
    f32 local[16];
    f32 scale;
    f32 zero;
    void *node;

    node = *(void **)((char *)arg0 + 0x7528);
    if (node != 0) {
        zero = 0.0f;
        do {
            if (*(void **)((char *)node + 0x1C) == arg1 &&
                *(f32 *)((char *)node + 0x24) > zero &&
                *(f32 *)((char *)node + 0x24) > zero) {
                func_80270980(local, arg2);
                scale = D_800CB028;
                if (*(s32 *)((char *)*(void **)((char *)arg1 + 0x118) + 0x14) != 0) {
                    scale = D_800CB02C;
                }
                func_802734EC(local, scale, scale, scale);
                func_80272898(local);
                func_802A35C0(arg0, node, local);
            }
            node = *(void **)((char *)node + 4);
        } while (node != 0);
    }
}
