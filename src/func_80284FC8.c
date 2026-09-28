#include "basetypes.h"

void func_80284FC8(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f2;
    s32 count;
    u16 v;
    s8 *record;

    *(f32 *)((s8 *)arg2 + 0) = 0.0f;
    *(f32 *)((s8 *)arg2 + 4) = 0.0f;
    *(f32 *)((s8 *)arg2 + 8) = 0.0f;
    record = *(s8 **)((s8 *)arg0 + 0xFC3C);
    count = 0;
    if (record != 0) {
        do {
            v = *(u16 *)(record + 4);
            if (((v == 0x41E) || (v == 0x3EF)) &&
                (*(s32 *)(record + 0x12C) == arg1) &&
                (*(s32 *)(record + 0x5C) & 0x100)) {
                *(f32 *)((s8 *)arg2 + 0) += *(f32 *)(record + 8);
                *(f32 *)((s8 *)arg2 + 4) += *(f32 *)(record + 0xC);
                count += 1;
                *(f32 *)((s8 *)arg2 + 8) += *(f32 *)(record + 0x10);
            }
            record = *(s8 **)(record + 0x1EC);
        } while (record != 0);
    }
    if (count != 0) {
        temp_f2 = (f32)count;
        *(f32 *)((s8 *)arg2 + 0) = (f32)(*(f32 *)((s8 *)arg2 + 0) / temp_f2);
        *(f32 *)((s8 *)arg2 + 4) = (f32)(*(f32 *)((s8 *)arg2 + 4) / temp_f2);
        *(f32 *)((s8 *)arg2 + 8) = (f32)(*(f32 *)((s8 *)arg2 + 8) / temp_f2);
    }
}
