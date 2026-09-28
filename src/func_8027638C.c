#include "basetypes.h"

f32 func_8027638C(u16 *arg0, f32 arg1, u16 arg2) {
    u16 *node = arg0;
    u16 id = arg2;

    if (*node == id) {
        if (*(f32 *)(*(char **)((char *)node + 4) + 4) != arg1 ||
            *(f32 *)(*(char **)((char *)node + 8) + 4) != arg1 ||
            *(f32 *)(*(char **)((char *)node + 0xC) + 4) != arg1) {
            *(f32 *)(*(char **)((char *)node + 4) + 4) = arg1;
            *(f32 *)(*(char **)((char *)node + 8) + 4) = arg1;
            *(f32 *)(*(char **)((char *)node + 0xC) + 4) = arg1;

            if (*(void **)((char *)node + 0x10) != 0) {
                func_8027638C(*(u16 **)((char *)node + 0x10), arg1, id);
            }
            if (*(void **)((char *)node + 0x14) != 0) {
                func_8027638C(*(u16 **)((char *)node + 0x14), arg1, id);
            }
            if (*(void **)((char *)node + 0x18) != 0) {
                func_8027638C(*(u16 **)((char *)node + 0x18), arg1, id);
            }
        }
    }
}
