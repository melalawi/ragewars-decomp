#include "basetypes.h"

extern f32 D_800C6E90;

void *func_8020D28C(void *arg0) {
    char *node;
    char *best;
    f32 best_value;

    node = *(char **)((char *)arg0 + 0x24);
    best_value = D_800C6E90;
    best = 0;
    if (node != 0) {
        do {
            if (*(s32 *)(node + 0x28) == 1) {
                f32 value = *(f32 *)(node + 0x24);
                if (value < best_value || best_value == D_800C6E90) {
                    best = node;
                    best_value = value;
                }
            }
            node = *(char **)(node + 0x10);
        } while (node != 0);
    }
    if (best != 0) {
        *(s32 *)(best + 0x28) = 0;
    }
    return best;
}
