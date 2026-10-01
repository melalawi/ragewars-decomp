#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

typedef struct Work80244494 {
    char data[0x1B8];
} Work80244494;

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

typedef struct func_80244494_S1 func_80244494_S1;
typedef struct func_80244494_S2 func_80244494_S2;
struct func_80244494_S1 {
    char* unk0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    s32 unk4;
    char pad4[0x1C - 0x4 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
    char pad30[0x34 - 0x30 - sizeof(s32)];
    s32 unk34;
    char pad34[0x40 - 0x34 - sizeof(s32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    Vector3 unk44;
    char pad44[0x50 - 0x44 - sizeof(Vector3)];
    Vector3 unk50;
    char pad50[0x74 - 0x50 - sizeof(Vector3)];
    Vector3 unk74;
    char pad74[0xAC - 0x74 - sizeof(Vector3)];
    s32 unkAC;
    char padAC[0x180 - 0xAC - sizeof(s32)];
    Vector3 unk180;
    char pad180[0x198 - 0x180 - sizeof(Vector3)];
    Vector3 unk198;
    char pad198[0x1A4 - 0x198 - sizeof(Vector3)];
    Vector3 unk1A4;
};
struct func_80244494_S2 {
    char pad0[0x100];
    s32 unk100;
};

s32 func_80244494(char *arg0, Vector3 arg1, Vector3 arg2, s32 arg3) {
    Work80244494 work;
    VectorPair vectors;
    char *object = arg0;
    char *out;
    s32 count;
    s32 active;
    s32 result;
    s32 next;
    s32 maximum;
    s32 flags;

    func_8023E6C0(work.data, 0.0f);
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

    ((func_80244494_S1 *)(out))->unk0 = object;
    if (object != 0) {
        s32 value = 0;
        if (*(u8 *)object == 1) {
            flags = ((func_80244494_S2 *)(object))->unk100;
            flags &= 0x300000;
            value = flags != 0;
        }
        ((func_80244494_S1 *)(out))->unk4 = value;
    } else {
        ((func_80244494_S1 *)(out))->unk4 = 0;
    }

    ((func_80244494_S1 *)(out))->unk44 = vectors.first;
    ((func_80244494_S1 *)(out))->unk50 = vectors.second;
    ((func_80244494_S1 *)(out))->unk24 = 0;
    ((func_80244494_S1 *)(out))->unk20 = 0;
    ((func_80244494_S1 *)(out))->unk28 = 0;
    ((func_80244494_S1 *)(out))->unk2C = 0;
    ((func_80244494_S1 *)(out))->unk1C = 0;
    ((func_80244494_S1 *)(out))->unk40 = arg3;
    ((func_80244494_S1 *)(out))->unkAC = 0;
    ((func_80244494_S1 *)(out))->unk30 = 0;
    ((func_80244494_S1 *)(out))->unk34 = 0;
    func_8023E828(out);

    active = 1;
    count = 0;
    do {
        if (func_8023D148(out) != 0) {
            func_8023E44C(out);
            count += 1;
            result = func_8023D370(out);
            ((func_80244494_S1 *)(out))->unk44 = ((func_80244494_S1 *)(out))->unk180;
            ((func_80244494_S1 *)(out))->unk50 = ((func_80244494_S1 *)(out))->unk198;
            ((func_80244494_S1 *)(out))->unk74 = ((func_80244494_S1 *)(out))->unk1A4;
            active -= 1;
        } else {
            result = 0;
            ((func_80244494_S1 *)(out))->unk44 = ((func_80244494_S1 *)(out))->unk50;
            active -= 1;
        }
    } while (result != 0 && active != 0);
    return count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800DD140_8 = 4294967296.0;
const float unbake_rodata_800DD148_4 = 0.0174532942f;
const float unbake_rodata_800DD14C_4 = 1.0f;
const float unbake_rodata_800DD150_4 = 50.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E23F8_24[] = {0x0043F464U, 0x0043F498U, 0x0043F498U, 0x0043F470U, 0x0043F484U, 0x0043F498U, 0x0043F4A8U, 0x0043F4BCU, 0x0043F4D0U};
#elif defined(VERSION_EU)
const double unbake_rodata_800ED2B0_8 = 4294967296.0;
const float unbake_rodata_800ED2B8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8330_4 = 1.0f;
const float unbake_rodata_800E8334_4 = 1.0f;
const float unbake_rodata_800E8338_4 = 6.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD9D8_14[] = {0x00428580U, 0x00428590U, 0x004285A0U, 0x004285B0U, 0x004285C0U};
#endif
