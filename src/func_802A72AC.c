#include "basetypes.h"

void func_802A72AC(void *arg0) {
    f32 accum;
    f32 delta;
    void *node;

    if (*(f32 *)((char *)arg0 + 0x4C) > 0.0f) {
        accum = 0.0f;
        node = *(void **)((char *)arg0 + 0x40);
        if (node != 0) {
            do {
                *(f32 *)((char *)node + 0xA8) = accum / *(f32 *)((char *)arg0 + 0x4C);
                delta = *(f32 *)((char *)node + 0xAC);
                node = *(void **)((char *)node + 4);
                accum += delta;
            } while (node != 0);
        }
    }
}
