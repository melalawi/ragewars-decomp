#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C8F40;
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);

s32 func_802500A4(void *arg0, s32 arg1) {
    Vec3 sp10;
    f32 temp_f0;
    f32 threshold;
    s32 var_v1;
    s8 temp_v0;
    s32 var_v1_2;
    u16 temp_v1;
    u16 var_v0;
    u8 next_timer;
    void *temp_a0;

    func_80271FD8(&sp10, (Vec3 *)(arg1 + 0x128),
                  (Vec3 *)((char *)arg0 + 8));
    temp_f0 = sp10.x * sp10.x + sp10.y * sp10.y + sp10.z * sp10.z;
    threshold = D_800C8F40;
    if (!(threshold <= temp_f0)) {
        var_v1 = (s32)temp_f0;
    } else {
        var_v1 = (s32)(temp_f0 - threshold) | 0x80000000;
    }
    temp_a0 = *(void **)((char *)arg0 + 0x18);
    *(s32 *)((char *)arg0 + 0xDC) = var_v1;
    if ((u32)var_v1 >= (u32)(*(s32 *)((char *)temp_a0 + 0x24) * 2)) {
        var_v1_2 = *(s8 *)((char *)temp_a0 + 0xF);
    } else {
        var_v1_2 = *(s8 *)((char *)temp_a0 + 0xE);
    }

    if (var_v1_2 == -1) {
        if (*(s8 *)((char *)arg0 + 0xE0) <= 0) {
            *(s8 *)((char *)arg0 + 0xE0) = 0;
            *(u16 *)((char *)arg0 + 0xD8) =
                *(u16 *)((char *)arg0 + 0xD8) | 4;
            return 0;
        }
        temp_v1 = *(u16 *)((char *)arg0 + 0xD8);
        if (temp_v1 & 0x200) {
            *(u16 *)((char *)arg0 + 0xD8) = temp_v1 | 4;
            *(s8 *)((char *)arg0 + 0xE0) = 0;
            return 0;
        }
        temp_v0 = *(u8 *)((char *)arg0 + 0xE0) - 1;
        *(s8 *)((char *)arg0 + 0xE0) = temp_v0;
        if (temp_v0 < 0) {
            *(s8 *)((char *)arg0 + 0xE0) = 0;
        }
        var_v0 = *(u16 *)((char *)arg0 + 0xD8) | 4;
        goto block_20;
    } else if (*(s8 *)((char *)arg0 + 0xE0) < 8) {
        next_timer = *(u8 *)((char *)arg0 + 0xE0) + 1;
        if (*(u16 *)((char *)arg0 + 0xD8) & 0x200) {
            *(s8 *)((char *)arg0 + 0xE0) = 8;
            *(u16 *)((char *)arg0 + 0xD8) =
                *(u16 *)((char *)arg0 + 0xD8) & 0xFFFB;
        } else {
            *(s8 *)((char *)arg0 + 0xE0) =
                next_timer;
            var_v0 = *(u16 *)((char *)arg0 + 0xD8) | 4;
block_20:
            *(u16 *)((char *)arg0 + 0xD8) = var_v0;
        }
    } else {
        *(s8 *)((char *)arg0 + 0xE0) = 8;
    }
    return 1;
}
