#include "basetypes.h"

void func_802A01A0(void *arg0, void *arg1, void *arg2, s32 arg3) {
    u8 *m = (u8 *) arg0;
    s32 i;
    f32 vx, vy, vz;

    i = 0;
    if (arg3 > 0) {
        do {
            u8 *v = (u8 *) arg2 + i * 0xC;
            u8 *out = (u8 *) arg1 + i * 0xC;

            vx = *(f32 *) (v + 0x0);
            vy = *(f32 *) (v + 0x4);
            vz = *(f32 *) (v + 0x8);
            *(f32 *) (out + 0x0) = (*(f32 *) (m + 0x0) * vx) + (*(f32 *) (m + 0x10) * vy) + (*(f32 *) (m + 0x20) * vz) + *(f32 *) (m + 0x30);
            *(f32 *) (out + 0x4) = (*(f32 *) (m + 0x4) * vx) + (*(f32 *) (m + 0x14) * vy) + (*(f32 *) (m + 0x24) * vz) + *(f32 *) (m + 0x34);
            *(f32 *) (out + 0x8) = (*(f32 *) (m + 0x8) * vx) + (*(f32 *) (m + 0x18) * vy) + (*(f32 *) (m + 0x28) * vz) + *(f32 *) (m + 0x38);
            i += 1;
        } while (i < arg3);
    }
}
