#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern s32 D_800D0658;
extern s32 D_800D065C;

extern void func_8023EBC4(void *arg0);
extern void func_8023E828(void *arg0);
extern s32 func_8023D148(void *arg0);
extern void func_8023E44C(void *arg0);
extern s32 func_8023D370(void *arg0);

s32 func_80244B58(char *arg0, char *arg1, Vector3 first, Vector3 second,
                   s32 arg4) {
    char *object = arg0;
    char *out = arg1;
    s32 count;
    s32 active;
    s32 result;
    s32 next;
    s32 maximum;
    s32 flags;

    func_8023EBC4(out);
    if (first.x == second.x && first.y == second.y && first.z == second.z) {
        return 0;
    }

    D_800D0658 += 1;
    maximum = D_800D065C;
    next = D_800D0658;
    if (next < maximum) {
        next = maximum;
    }
    D_800D065C = next;

    *(char **)(out + 0x0) = object;
    if (object != 0) {
        s32 value = 0;
        if (*(u8 *)object == 1) {
            flags = *(s32 *)(object + 0x100);
            flags &= 0x300000;
            value = flags != 0;
        }
        *(s32 *)(out + 0x4) = value;
    } else {
        *(s32 *)(out + 0x4) = 0;
    }

    *(Vector3 *)(out + 0x44) = first;
    *(Vector3 *)(out + 0x50) = second;
    *(s32 *)(out + 0x24) = 0;
    *(s32 *)(out + 0x20) = 0;
    *(s32 *)(out + 0x28) = 0;
    *(s32 *)(out + 0x2C) = 0;
    *(s32 *)(out + 0x1C) = 0;
    *(s32 *)(out + 0x40) = arg4;
    *(s32 *)(out + 0xAC) = 0;
    *(s32 *)(out + 0x30) = 0;
    *(s32 *)(out + 0x34) = 0;
    func_8023E828(out);

    active = 1;
    count = 0;
    do {
        if (func_8023D148(out) != 0) {
            func_8023E44C(out);
            count += 1;
            result = func_8023D370(out);
            *(Vector3 *)(out + 0x44) = *(Vector3 *)(out + 0x180);
            *(Vector3 *)(out + 0x50) = *(Vector3 *)(out + 0x198);
            *(Vector3 *)(out + 0x74) = *(Vector3 *)(out + 0x1A4);
            active -= 1;
        } else {
            result = 0;
            *(Vector3 *)(out + 0x44) = *(Vector3 *)(out + 0x50);
            active -= 1;
        }
    } while (result != 0 && active != 0);
    return count;
}
