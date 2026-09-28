#include "basetypes.h"

typedef struct {
    s32 field0;
    u8 pad4[0x18];
    s32 field1C;
} GlobalState;

extern s32 func_8024F848(void *arg0);

extern f32 D_800C8EE0;
extern f32 D_800C8EE8;
extern f32 D_800C8EEC;
extern f32 D_800D2988;
extern s32 D_800D2B40;
extern GlobalState D_80146894;

void func_8024F490(void *arg0) {
    char *o = (char *) arg0;
    f32 temp_f1;
    f32 threshold;
    f32 final_value;

    *(u8 *)(o + 1) = func_8024F848(arg0);
    *(u8 *)(o + 3) = *(u8 *)(*(char **)(o + 0x18) + 0x12);

    if (D_80146894.field0 == 0) {
        char *state = *(char **)(o + 0x18);
        if (*(s32 *)state == 0xC) {
            *(f32 *)(o + 0x1A4) = D_800D2988 * *(f32 *)(state + 0x20);
        } else if (*(u16 *)(o + 0x19C) & 0x10) {
            temp_f1 = *(f32 *)(o + 0x1A0) + D_800D2988 * D_800C8EE0;
            threshold = *(&D_800C8EE0 + 1);
            *(f32 *)(o + 0x1A0) = temp_f1;
            if (temp_f1 < threshold) {
                *(f32 *)(o + 0x194) = temp_f1 * D_800C8EE8;
            } else {
                final_value = D_800C8EEC;
                *(u16 *)(o + 0x19C) &= 0xFFEF;
                *(f32 *)(o + 0x194) = final_value;
            }
        }

        if (*(void **)(o + 0x14) != 0) {
            *(s32 *)(o + 0x1C0) = *(s32 *)((char *)*(void **)(o + 0x14) + 0x1C);
        } else {
            *(s32 *)(o + 0x1C0) = D_800D2B40;
        }
    }
}
