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

typedef struct func_8022E280_S1 func_8022E280_S1;
typedef union func_8022E280_S1_U744 { s32 v0; f32 v1; } func_8022E280_S1_U744;
struct func_8022E280_S1 {
    char pad0[0x8];
    Vector3 unk8;
    char pad8[0x5D4 - 0x8 - sizeof(Vector3)];
    s32 unk5D4;
    char pad5D4[0x6C0 - 0x5D4 - sizeof(s32)];
    s32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(s32)];
    s32 unk6C4;
    char pad6C4[0x6C8 - 0x6C4 - sizeof(s32)];
    s32 unk6C8;
    char pad6C8[0x6CC - 0x6C8 - sizeof(s32)];
    s32 unk6CC;
    char pad6CC[0x6D0 - 0x6CC - sizeof(s32)];
    s32 unk6D0;
    char pad6D0[0x6D4 - 0x6D0 - sizeof(s32)];
    s32 unk6D4;
    char pad6D4[0x6D8 - 0x6D4 - sizeof(s32)];
    s32 unk6D8;
    char pad6D8[0x6DC - 0x6D8 - sizeof(s32)];
    s32 unk6DC;
    char pad6DC[0x6E4 - 0x6DC - sizeof(s32)];
    s32 unk6E4;
    char pad6E4[0x6E8 - 0x6E4 - sizeof(s32)];
    Vector3 unk6E8;
    char pad6E8[0x6F8 - 0x6E8 - sizeof(Vector3)];
    Vector3 unk6F8;
    char pad6F8[0x708 - 0x6F8 - sizeof(Vector3)];
    s32 unk708;
    char pad708[0x70C - 0x708 - sizeof(s32)];
    s32 unk70C;
    char pad70C[0x710 - 0x70C - sizeof(s32)];
    s32 unk710;
    char pad710[0x714 - 0x710 - sizeof(s32)];
    s32 unk714;
    char pad714[0x724 - 0x714 - sizeof(s32)];
    s32 unk724;
    char pad724[0x728 - 0x724 - sizeof(s32)];
    s32 unk728;
    char pad728[0x72C - 0x728 - sizeof(s32)];
    s32 unk72C;
    char pad72C[0x730 - 0x72C - sizeof(s32)];
    s32 unk730;
    char pad730[0x734 - 0x730 - sizeof(s32)];
    s32 unk734;
    char pad734[0x738 - 0x734 - sizeof(s32)];
    s32 unk738;
    char pad738[0x73C - 0x738 - sizeof(s32)];
    s32 unk73C;
    char pad73C[0x740 - 0x73C - sizeof(s32)];
    f32 unk740;
    char pad740[0x744 - 0x740 - sizeof(f32)];
    func_8022E280_S1_U744 unk744;
    char pad744[0x748 - 0x744 - sizeof(func_8022E280_S1_U744)];
    Vector3 unk748;
    char pad748[0x754 - 0x748 - sizeof(Vector3)];
    f32 unk754;
    char pad754[0x758 - 0x754 - sizeof(f32)];
    s32 unk758;
    char pad758[0x75C - 0x758 - sizeof(s32)];
    s32 unk75C;
    char pad75C[0x780 - 0x75C - sizeof(s32)];
    f32 unk780;
    char pad780[0x784 - 0x780 - sizeof(f32)];
    f32 unk784;
    char pad784[0x11B4 - 0x784 - sizeof(f32)];
    s32 unk11B4;
    char pad11B4[0x11B8 - 0x11B4 - sizeof(s32)];
    s32 unk11B8;
    char pad11B8[0x1450 - 0x11B8 - sizeof(s32)];
    s32 unk1450;
};

void func_8022E280(void *arg0) {
    char *object = arg0;
    void *attributes;
    void *state = object + 0x688;
    f32 zero;

    if (((func_8022E280_S1 *)(object))->unk1450 != 0) {
        attributes = D_8010EEB8;
    } else {
        s32 index = ((func_8022E280_S1 *)(object))->unk5D4;
        attributes = (void *)(index << 4);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 3);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 2);
        attributes = D_8010F328 + (s32)attributes;
    }
    func_8026369C(state, attributes);

    ((func_8022E280_S1 *)(object))->unk6C0 = 0;
    ((func_8022E280_S1 *)(object))->unk6C4 = 0;
    ((func_8022E280_S1 *)(object))->unk6C8 = 0;
    ((func_8022E280_S1 *)(object))->unk6CC = 0;
    ((func_8022E280_S1 *)(object))->unk6D0 = 1;
    ((func_8022E280_S1 *)(object))->unk6D4 = 0;
    ((func_8022E280_S1 *)(object))->unk6D8 = 0;
    ((func_8022E280_S1 *)(object))->unk6DC = 0;
    ((func_8022E280_S1 *)(object))->unk6E4 = 0;
    ((func_8022E280_S1 *)(object))->unk758 = 0;
    ((func_8022E280_S1 *)(object))->unk75C = 0;
    ((func_8022E280_S1 *)(object))->unk11B4 = 0;
    ((func_8022E280_S1 *)(object))->unk11B8 = 0;
    ((func_8022E280_S1 *)(object))->unk708 = 0;
    ((func_8022E280_S1 *)(object))->unk70C = 0;
    ((func_8022E280_S1 *)(object))->unk710 = 0;
    ((func_8022E280_S1 *)(object))->unk714 = 0;
    ((func_8022E280_S1 *)(object))->unk724 = 0;
    ((func_8022E280_S1 *)(object))->unk728 = 0;
    ((func_8022E280_S1 *)(object))->unk72C = 0;
    ((func_8022E280_S1 *)(object))->unk730 = 0;
    ((func_8022E280_S1 *)(object))->unk734 = 0;
    ((func_8022E280_S1 *)(object))->unk738 = 0;
    ((func_8022E280_S1 *)(object))->unk73C = 0;
    ((func_8022E280_S1 *)(object))->unk740 = func_8022ADAC(object);
    ((func_8022E280_S1 *)(object))->unk744.v0 = 0;
    zero = ((func_8022E280_S1 *)(object))->unk744.v1;
    (&((func_8022E280_S1 *)(object))->unk748)->x = (&((func_8022E280_S1 *)(object))->unk748)->y = (&((func_8022E280_S1 *)(object))->unk748)->z = zero;
    ((func_8022E280_S1 *)(object))->unk754 = D_800C7F00;
    ((func_8022E280_S1 *)(object))->unk780 = zero;
    ((func_8022E280_S1 *)(object))->unk784 = D_800C7F00;
    ((func_8022E280_S1 *)(object))->unk6E8 = ((func_8022E280_S1 *)(object))->unk8;
    ((func_8022E280_S1 *)(object))->unk6F8 = ((func_8022E280_S1 *)(object))->unk8;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D40_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F00_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C30B4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30F4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E10_4 = 1.0f;
#endif
