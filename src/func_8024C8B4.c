#include "basetypes.h"

typedef struct func_8024C8B4_S1 func_8024C8B4_S1;
typedef struct func_8024C8B4_S2 func_8024C8B4_S2;
typedef struct func_8024C8B4_S3 func_8024C8B4_S3;
struct func_8024C8B4_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_8024C8B4_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_8024C8B4_S3 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};

/** Lerp a 4-component vector: out = a + t * (b - a). */
void func_8024C8B4(void *arg0, f32 t, void *a, void *b) {
    ((func_8024C8B4_S1 *)(arg0))->unk0 = ((func_8024C8B4_S2 *)(a))->unk0 + (t * (((func_8024C8B4_S3 *)(b))->unk0 - ((func_8024C8B4_S2 *)(a))->unk0));
    ((func_8024C8B4_S1 *)(arg0))->unk4 = ((func_8024C8B4_S2 *)(a))->unk4 + (t * (((func_8024C8B4_S3 *)(b))->unk4 - ((func_8024C8B4_S2 *)(a))->unk4));
    ((func_8024C8B4_S1 *)(arg0))->unk8 = ((func_8024C8B4_S2 *)(a))->unk8 + (t * (((func_8024C8B4_S3 *)(b))->unk8 - ((func_8024C8B4_S2 *)(a))->unk8));
    ((func_8024C8B4_S1 *)(arg0))->unkC = ((func_8024C8B4_S2 *)(a))->unkC + (t * (((func_8024C8B4_S3 *)(b))->unkC - ((func_8024C8B4_S2 *)(a))->unkC));
}
