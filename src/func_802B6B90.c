#include "basetypes.h"

typedef struct func_802B6B90_S1 func_802B6B90_S1;
typedef struct func_802B6B90_S2 func_802B6B90_S2;
typedef struct func_802B6B90_S3 func_802B6B90_S3;
struct func_802B6B90_S1 {
    char pad0[0x60];
    s32 unk60;
};
struct func_802B6B90_S2 {
    void *unk0;
    u16 unk4;
    char pad4[0x7 - 0x4 - sizeof(u16)];
    u8 unk7;
    char pad7[0x8 - 0x7 - sizeof(u8)];
    u8 unk8;
    char pad8[0x9 - 0x8 - sizeof(u8)];
    u8 unk9;
};
struct func_802B6B90_S3 {
    u8 unk0;
    char pad0[0x1 - 0x0 - sizeof(u8)];
    u8 unk1;
    char pad1[0x2 - 0x1 - sizeof(u8)];
    u8 unk2;
    char pad2[0xC - 0x2 - sizeof(u8)];
    u16 unkC;
};

/** Store a new history slot (pointer + selected byte/word fields) into the ring buffer at arg0+0x60. */
void func_802B6B90(void *arg0, void *arg1, s32 arg2) {
    s32 stride = arg2 * 0x10;

    ((func_802B6B90_S2 *)(stride + ((func_802B6B90_S1 *)(arg0))->unk60))->unk0 = arg1;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk7 = ((func_802B6B90_S3 *)(arg1))->unk1;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk9 = ((func_802B6B90_S3 *)(arg1))->unk0;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk8 = ((func_802B6B90_S3 *)(arg1))->unk2;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk4 = ((func_802B6B90_S3 *)(arg1))->unkC;
}
