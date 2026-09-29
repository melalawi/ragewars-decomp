#include "basetypes.h"

extern f32 D_800C8D6C;
extern f32 D_800C8D70;

extern void *jtbl_800C8D30[];

typedef struct func_8024D388_S1 func_8024D388_S1;
typedef struct func_8024D388_S2 func_8024D388_S2;
typedef struct func_8024D388_S3 func_8024D388_S3;
typedef struct func_8024D388_S4 func_8024D388_S4;
struct func_8024D388_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void* unk1D8;
};
struct func_8024D388_S2 {
    char pad0[0x80C];
    s32 unk80C;
};
struct func_8024D388_S3 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x28 - 0x1C - sizeof(f32)];
    f32 unk28;
    char pad28[0xEC - 0x28 - sizeof(f32)];
    f32 unkEC;
};
struct func_8024D388_S4 {
    char pad0[0x18];
    u16 unk18;
    char pad18[0x1C - 0x18 - sizeof(u16)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x28 - 0x20 - sizeof(f32)];
    f32 unk28;
};

/** Return the state-dependent extent used for this actor. */
f32 func_8024D388(void *arg0) {
    void *state;
    f32 value;
    f32 other;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_11, &&sw_state_0, &&sw_state_5, &&sw_state_8, &&sw_state_10, &&sw_state_12, &&sw_state_13, &&sw_state_14, &&sw_state_1, &&sw_state_4, &&sw_state_2, &&sw_state_7, &&sw_state_default
        };
        s32 sw_state_value = *(s32 *)((func_8024D388_S1 *)(arg0))->unk18;
        if ((unsigned int)sw_state_value > 14) {
            goto sw_state_default;
        }
        goto *jtbl_800C8D30[sw_state_value];
    }
    do {
    sw_state_11:
        if (*(u8 *)arg0 == 1 &&
            (((func_8024D388_S1 *)(arg0))->unk100 & 0x300000) != 0 &&
            ((func_8024D388_S2 *)(((func_8024D388_S1 *)(arg0))->unk1D8))->unk80C != 0) {
            return D_800C8D6C;
        }
        return ((func_8024D388_S3 *)(((func_8024D388_S1 *)(arg0))->unk18))->unkEC;
    sw_state_0:
    sw_state_5:
    sw_state_8:
    sw_state_10:
    sw_state_12:
    sw_state_13:
    sw_state_14:
        return ((func_8024D388_S3 *)(((func_8024D388_S1 *)(arg0))->unk18))->unk18;
    sw_state_1:
    sw_state_4:
        return ((func_8024D388_S3 *)(((func_8024D388_S1 *)(arg0))->unk18))->unk28;
    sw_state_2:
        state = ((func_8024D388_S1 *)(arg0))->unk18;
        if (((func_8024D388_S4 *)(state))->unk18 == 2) {
            value = ((func_8024D388_S4 *)(state))->unk20;
            other = ((func_8024D388_S4 *)(state))->unk1C;
            if (!(other <= value)) {
                value = other;
            }
            other = ((func_8024D388_S4 *)(state))->unk28;
            if (!(value <= other)) {
                other = value;
            }
            return other * D_800C8D70;
        }
        return ((func_8024D388_S4 *)(state))->unk1C;
    sw_state_7:
        return ((func_8024D388_S3 *)(((func_8024D388_S1 *)(arg0))->unk18))->unk1C;
    sw_state_default:
        return 0.0f;
    
    } while (0);
}
