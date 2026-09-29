#include "basetypes.h"

typedef struct func_80284FC8_S1 func_80284FC8_S1;
typedef struct func_80284FC8_S2 func_80284FC8_S2;
typedef struct func_80284FC8_S3 func_80284FC8_S3;
struct func_80284FC8_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_80284FC8_S2 {
    char pad0[0xFC3C];
    s8* unkFC3C;
};
struct func_80284FC8_S3 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8 - 0x4 - sizeof(u16)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x5C - 0x10 - sizeof(f32)];
    s32 unk5C;
    char pad5C[0x12C - 0x5C - sizeof(s32)];
    s32 unk12C;
    char pad12C[0x1EC - 0x12C - sizeof(s32)];
    s8* unk1EC;
};

void func_80284FC8(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f2;
    s32 count;
    u16 v;
    s8 *record;

    ((func_80284FC8_S1 *)(arg2))->unk0 = 0.0f;
    ((func_80284FC8_S1 *)(arg2))->unk4 = 0.0f;
    ((func_80284FC8_S1 *)(arg2))->unk8 = 0.0f;
    record = ((func_80284FC8_S2 *)(arg0))->unkFC3C;
    count = 0;
    if (record != 0) {
        do {
            v = ((func_80284FC8_S3 *)(record))->unk4;
            if (((v == 0x41E) || (v == 0x3EF)) &&
                (((func_80284FC8_S3 *)(record))->unk12C == arg1) &&
                (((func_80284FC8_S3 *)(record))->unk5C & 0x100)) {
                ((func_80284FC8_S1 *)(arg2))->unk0 += ((func_80284FC8_S3 *)(record))->unk8;
                ((func_80284FC8_S1 *)(arg2))->unk4 += ((func_80284FC8_S3 *)(record))->unkC;
                count += 1;
                ((func_80284FC8_S1 *)(arg2))->unk8 += ((func_80284FC8_S3 *)(record))->unk10;
            }
            record = ((func_80284FC8_S3 *)(record))->unk1EC;
        } while (record != 0);
    }
    if (count != 0) {
        temp_f2 = (f32)count;
        ((func_80284FC8_S1 *)(arg2))->unk0 = (f32)(((func_80284FC8_S1 *)(arg2))->unk0 / temp_f2);
        ((func_80284FC8_S1 *)(arg2))->unk4 = (f32)(((func_80284FC8_S1 *)(arg2))->unk4 / temp_f2);
        ((func_80284FC8_S1 *)(arg2))->unk8 = (f32)(((func_80284FC8_S1 *)(arg2))->unk8 / temp_f2);
    }
}
