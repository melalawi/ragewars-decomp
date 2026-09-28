#include "basetypes.h"

extern f32 func_8027272C(f32 *a, f32 *b);
extern f32 D_800C9F90;

void func_8028509C(void *arg0, void *arg1, f32 *arg2) {
    f32 temp;
    void *node;

    *arg2 = D_800C9F90;
    node = *(void **)((char *)arg0 + 0xFC14);
    if (node != 0) {
        do {
            if (*(void **)((char *)node + 0x12C) != arg1 && (*(s32 *)((char *)node + 0x5C) & 0x100)) {
                temp = func_8027272C((f32 *)((char *)node + 8), (f32 *)((char *)arg1 + 8));
                if (temp < *arg2) {
                    *arg2 = temp;
                }
            }
            node = *(void **)((char *)node + 0x1F4);
        } while (node != 0);
    }
}
