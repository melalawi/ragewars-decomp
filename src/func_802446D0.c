#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

typedef struct Work802446D0 {
    char data[0x1B8];
} Work802446D0;

typedef struct VectorPair {
    Vector3 first;
    Vector3 second;
    char pad[8];
} VectorPair;

extern s32 D_800D0658;
extern s32 D_800D065C;

extern void func_8023E6C0(void *arg0, f32 arg1);
extern void func_8023EBC4(void *arg0);
extern void func_8023E828(void *arg0);
extern s32 func_8023D148(void *arg0);
extern void func_8023E44C(void *arg0);
extern s32 func_8023D370(void *arg0);

s32 func_802446D0(char *arg0, Vector3 arg1, Vector3 arg2, s32 arg3,
                   f32 arg4) {
    Work802446D0 work;
    VectorPair vectors;
    char *object = arg0;
    char *out;
    s32 count;
    s32 active;
    s32 result;
    s32 next;
    s32 maximum;
    s32 flags;

    func_8023E6C0(work.data, arg4);
    out = work.data;
    vectors.first = arg1;
    vectors.second = arg2;
    func_8023EBC4(out);
    if (vectors.first.x == vectors.second.x &&
        vectors.first.y == vectors.second.y &&
        vectors.first.z == vectors.second.z) {
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

    *(Vector3 *)(out + 0x44) = vectors.first;
    *(Vector3 *)(out + 0x50) = vectors.second;
    *(s32 *)(out + 0x24) = 0;
    *(s32 *)(out + 0x20) = 0;
    *(s32 *)(out + 0x28) = 0;
    *(s32 *)(out + 0x2C) = 0;
    *(s32 *)(out + 0x1C) = 0;
    *(s32 *)(out + 0x40) = arg3;
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
