#include "basetypes.h"

extern f32 func_802B2350(s32 arg0);

typedef struct func_8024E454_S1 func_8024E454_S1;
typedef struct func_8024E454_S2 func_8024E454_S2;
typedef struct func_8024E454_S3 func_8024E454_S3;
typedef struct func_8024E454_S4 func_8024E454_S4;
typedef struct func_8024E454_S5 func_8024E454_S5;
struct func_8024E454_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    u32 unk100;
    char pad100[0x118 - 0x100 - sizeof(u32)];
    void* unk118;
    char pad118[0x1D8 - 0x118 - sizeof(void*)];
    void* unk1D8;
};
struct func_8024E454_S2 {
    char pad0[0x80C];
    void* unk80C;
};
struct func_8024E454_S3 {
    char pad0[0xF0];
    f32 unkF0;
};
struct func_8024E454_S4 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x2C - 0x18 - sizeof(f32)];
    f32 unk2C;
};
struct func_8024E454_S5 {
    char pad0[0x14];
    u16 unk14;
    char pad14[0x30 - 0x14 - sizeof(u16)];
    void* unk30;
};

f32 func_8024E454(void *arg0)
{
    void *temp_a1;
    void *next;
    s32 temp_v1;

loop:
    temp_a1 = ((func_8024E454_S1 *)(arg0))->unk18;
    temp_v1 = *(s32 *)temp_a1;
    if (temp_v1 == 4) {
        goto value_2c;
    }
    if (temp_v1 < 5) {
        if (temp_v1 == 1) {
            goto value_2c;
        }
        goto other;
    }
    if (temp_v1 == 5) {
        goto value_18;
    }
    if (temp_v1 != 11) {
        goto other;
    }
    if (*(u8 *)arg0 == 1 &&
        (((func_8024E454_S1 *)(arg0))->unk100 & 0x300000) != 0) {
        next = ((func_8024E454_S2 *)(((func_8024E454_S1 *)(arg0))->unk1D8))->unk80C;
        if (next != 0) {
            arg0 = next;
            goto loop;
        }
    }
    return ((func_8024E454_S3 *)(((func_8024E454_S1 *)(arg0))->unk18))->unkF0;

value_2c:
    return ((func_8024E454_S4 *)(temp_a1))->unk2C;
value_18:
    return ((func_8024E454_S4 *)(temp_a1))->unk18;
other:
    if (*(u8 *)arg0 == 2) {
        next = ((func_8024E454_S1 *)(arg0))->unk118;
        next = ((func_8024E454_S5 *)(next))->unk30;
        return func_802B2350(((func_8024E454_S5 *)(next))->unk14);
    }
    return 0.0f;
}
