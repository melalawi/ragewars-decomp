#include "basetypes.h"

void func_80273424(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    char *o = (char *)arg0;

    *(f32 *)(o + 0x30) = *(f32 *)(o + 0x30) + (arg1 * *(f32 *)(o + 0x0) + arg2 * *(f32 *)(o + 0x10) + arg3 * *(f32 *)(o + 0x20));
    *(f32 *)(o + 0x34) = *(f32 *)(o + 0x34) + (arg1 * *(f32 *)(o + 0x4) + arg2 * *(f32 *)(o + 0x14) + arg3 * *(f32 *)(o + 0x24));
    *(f32 *)(o + 0x38) = *(f32 *)(o + 0x38) + (arg1 * *(f32 *)(o + 0x8) + arg2 * *(f32 *)(o + 0x18) + arg3 * *(f32 *)(o + 0x28));
}
