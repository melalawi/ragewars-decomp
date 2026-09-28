#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern char D_8010EEB8[];
extern char D_8010F328[];
extern f32 D_800C7F00;
extern void func_8026369C(void *arg0, void *arg1);
extern f32 func_8022ADAC(void *arg0);

void func_8022E280(void *arg0) {
    char *object = arg0;
    void *attributes;
    void *state = object + 0x688;
    f32 zero;

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
    *(s32 *)(object + 0x744) = 0;
    zero = *(f32 *)(object + 0x744);
    ((Vector3 *)(object + 0x748))->x = ((Vector3 *)(object + 0x748))->y = ((Vector3 *)(object + 0x748))->z = zero;
    *(f32 *)(object + 0x754) = D_800C7F00;
    *(f32 *)(object + 0x780) = zero;
    *(f32 *)(object + 0x784) = D_800C7F00;
    *(Vector3 *)(object + 0x6E8) = *(Vector3 *)(object + 8);
    *(Vector3 *)(object + 0x6F8) = *(Vector3 *)(object + 8);
}
