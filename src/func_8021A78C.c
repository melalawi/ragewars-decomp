#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

typedef struct IntVector3 {
    s32 x;
    s32 y;
    s32 z;
} IntVector3;

extern char D_8010EEB8[];
extern char D_8010F328[];
extern f32 D_800C73E8;
extern volatile f32 D_800C73EC;
extern void func_8026369C(void *arg0, void *arg1);
extern f32 func_8022ADAC(void *arg0);
extern void func_802227D0(void *, void *, s32);

void func_8021A78C(void *arg0) {
    char *object = arg0;
    void *attributes;
    void *state = object + 0x688;
    f32 zero;
    f32 default_value;
    f32 tail_value;
    Vector3 *tail_vector;
    s32 type;

    if (*(s32 *)(object + 0x1450) != 0) {
        attributes = D_8010EEB8;
    } else {
        s32 index = *(s32 *)(object + 0x5D4);
        attributes = (void *)(index << 4);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 3);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 2);
        attributes = D_8010F328 + (s32)attributes;
    }
    func_8026369C(state, attributes);

    *(s32 *)(object + 0x6C0) = 0;
    *(s32 *)(object + 0x6C4) = 0;
    *(s32 *)(object + 0x6C8) = 0;
    *(s32 *)(object + 0x6CC) = 0;
    *(s32 *)(object + 0x6D0) = 1;
    *(s32 *)(object + 0x6D4) = 0;
    *(s32 *)(object + 0x6D8) = 0;
    *(s32 *)(object + 0x6DC) = 0;
    *(s32 *)(object + 0x6E4) = 0;
    *(s32 *)(object + 0x758) = 0;
    *(s32 *)(object + 0x75C) = 0;
    *(s32 *)(object + 0x11B4) = 0;
    *(s32 *)(object + 0x11B8) = 0;
    *(s32 *)(object + 0x708) = 0;
    *(s32 *)(object + 0x70C) = 0;
    *(s32 *)(object + 0x710) = 0;
    *(s32 *)(object + 0x714) = 0;
    *(s32 *)(object + 0x724) = 0;
    *(s32 *)(object + 0x728) = 0;
    *(s32 *)(object + 0x72C) = 0;
    *(s32 *)(object + 0x730) = 0;
    *(s32 *)(object + 0x734) = 0;
    *(s32 *)(object + 0x738) = 0;
    *(s32 *)(object + 0x73C) = 0;
    *(f32 *)(object + 0x740) = func_8022ADAC(object);
    default_value = D_800C73E8;
    *(s32 *)(object + 0x744) = 0;
    ((IntVector3 *)(object + 0x748))->x = ((IntVector3 *)(object + 0x748))->y = ((IntVector3 *)(object + 0x748))->z = 0;
    *(f32 *)(object + 0x754) = default_value;
    *(s32 *)(object + 0x780) = 0;
    *(f32 *)(object + 0x784) = default_value;
    *(Vector3 *)(object + 0x6E8) = *(Vector3 *)(object + 8);
    *(Vector3 *)(object + 0x6F8) = *(Vector3 *)(object + 8);
    *(s32 *)(object + 0x658) = 0;
    *(s32 *)(object + 0x668) = 0;
    *(s32 *)(object + 0x66C) = 0;
    if (*(void **)(object + 0x18) != 0) {
        *(f32 *)(object + 0x6F4) = *(f32 *)(*(char **)(object + 0x18) + 0xF4);
    } else {
        *(s32 *)(object + 0x6F4) = 0;
    }
    tail_vector = (Vector3 *)(object + 0x7D8);
    *(s32 *)(object + 0x7B0) = 0;
    zero = *(volatile f32 *)(object + 0x7B0);
    tail_value = D_800C73EC;
    type = 2;
    *(s32 *)(object + 0x718) = 0;
    *(s32 *)(object + 0x71C) = 0;
    *(s32 *)(object + 0x720) = 0;
    *(s32 *)(object + 0x7EC) = 0;
    *(s32 *)(object + 0x7F0) = 0;
    *(s32 *)(object + 0x7E8) = 0;
    *(s32 *)(object + 0x788) = 0;
    *(s32 *)(object + 0x78C) = 0;
    *(s32 *)(object + 0x790) = 0;
    *(s32 *)(object + 0x794) = 0;
    *(s32 *)(object + 0x798) = -1;
    *(s32 *)(object + 0x79C) = 0;
    *(s32 *)(object + 0x7A0) = 0;
    *(s32 *)(object + 0x7A4) = 0;
    *(s32 *)(object + 0x7A8) = 0;
    *(s32 *)(object + 0x7AC) = 0;
    tail_vector->x = tail_vector->y = tail_vector->z = zero;
    *(f32 *)(object + 0x7E4) = tail_value;
    *(s32 *)(object + 0x7B4) = 0;
    *(s32 *)(object + 0x7B8) = -1;
    *(f32 *)(object + 0x7C0) = zero;
    *(f32 *)(object + 0x7C4) = zero;
    *(f32 *)(object + 0x7C8) = zero;
    *(f32 *)(object + 0x7CC) = zero;
    *(f32 *)(object + 0x7D0) = zero;
    *(f32 *)(object + 0x7D4) = zero;
    func_802227D0(object, object, type);
    *(s32 *)(object + 0x80C) = 0;
    *(f32 *)(object + 0x838) = zero;
    *(f32 *)(object + 0x83C) = zero;
    *(f32 *)(object + 0x840) = zero;
    *(s32 *)(object + 0x848) = 0;
    *(s8 *)(*(char **)(object + 0x5D8) + 0x8D) = 0;
    *(f32 *)(object + 0x704) = zero;
    *(s32 *)(object + 0x16D4) = 0;
}
