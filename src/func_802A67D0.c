#include "basetypes.h"

extern void func_8027302C(f32 *arg0, f32 *arg1);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272898(f32 *arg0);
extern void func_802A35C0(void *arg0, void *arg1, f32 *arg2);
extern f32 D_800CB024;

void func_802A67D0(void *arg0, s32 arg1, char *arg2) {
    f32 sp10[16];
    f32 temp;
    f32 zero;
    void *node;

    node = *(void **)((char *)arg0 + 0x7528);
    if (node != 0) {
        zero = 0.0f;
        temp = D_800CB024;
        do {
            if (*(s32 *)((char *)node + 0x1C) == arg1 && *(f32 *)((char *)node + 0x24) > zero) {
                func_8027302C(sp10, (f32 *)(arg2 + (*(s32 *)((char *)*(void **)((char *)node + 8) + 0xC) << 6)));
                func_802734EC(sp10, temp, temp, temp);
                func_80272898(sp10);
                func_802A35C0(arg0, node, sp10);
            }
            node = *(void **)((char *)node + 4);
        } while (node != 0);
    }
}
