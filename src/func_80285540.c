#include "basetypes.h"

extern void func_80296DDC(s32 *arg0, s32 arg1);

typedef struct func_80285540_S1 func_80285540_S1;
typedef struct func_80285540_S2 func_80285540_S2;
struct func_80285540_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    u16 unk8;
    char pad8[0xA - 0x8 - sizeof(u16)];
    u8 unkA;
    char padA[0xC - 0xA - sizeof(u8)];
    u8 unkC;
    char padC[0xD - 0xC - sizeof(u8)];
    u8 unkD;
    char padD[0xE - 0xD - sizeof(u8)];
    u8 unkE;
    char padE[0xF - 0xE - sizeof(u8)];
    u8 unkF;
    char padF[0x10 - 0xF - sizeof(u8)];
    u8 unk10;
    char pad10[0x11 - 0x10 - sizeof(u8)];
    u8 unk11;
    char pad11[0x12 - 0x11 - sizeof(u8)];
    u8 unk12;
    char pad12[0x13 - 0x12 - sizeof(u8)];
    u8 unk13;
    char pad13[0x14 - 0x13 - sizeof(u8)];
    u16 unk14;
    char pad14[0x16 - 0x14 - sizeof(u16)];
    u16 unk16;
};
struct func_80285540_S2 {
    char pad0[0x4];
    s16 unk4;
    char pad4[0x6 - 0x4 - sizeof(s16)];
    u8 unk6;
    char pad6[0x8 - 0x6 - sizeof(u8)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    u8 unk10;
    char pad10[0x11 - 0x10 - sizeof(u8)];
    u8 unk11;
    char pad11[0x12 - 0x11 - sizeof(u8)];
    u8 unk12;
    char pad12[0x13 - 0x12 - sizeof(u8)];
    u8 unk13;
    char pad13[0x14 - 0x13 - sizeof(u8)];
    u8 unk14;
    char pad14[0x15 - 0x14 - sizeof(u8)];
    u8 unk15;
    char pad15[0x16 - 0x15 - sizeof(u8)];
    u8 unk16;
    char pad16[0x17 - 0x16 - sizeof(u8)];
    u8 unk17;
    char pad17[0x18 - 0x17 - sizeof(u8)];
    u16 unk18;
    char pad18[0x1A - 0x18 - sizeof(u16)];
    u16 unk1A;
};

void func_80285540(void *arg0, void *arg1) {
    s16 value;
    s32 reference;

    *(s32 *)arg0 = ((func_80285540_S1 *)(arg1))->unk4;
    ((func_80285540_S2 *)(arg0))->unk10 = ((func_80285540_S1 *)(arg1))->unkC;
    ((func_80285540_S2 *)(arg0))->unk11 = ((func_80285540_S1 *)(arg1))->unkD;
    ((func_80285540_S2 *)(arg0))->unk12 = ((func_80285540_S1 *)(arg1))->unkE;
    ((func_80285540_S2 *)(arg0))->unk13 = ((func_80285540_S1 *)(arg1))->unkF;
    ((func_80285540_S2 *)(arg0))->unk14 = ((func_80285540_S1 *)(arg1))->unk10;
    ((func_80285540_S2 *)(arg0))->unk15 = ((func_80285540_S1 *)(arg1))->unk11;
    ((func_80285540_S2 *)(arg0))->unk16 = ((func_80285540_S1 *)(arg1))->unk12;
    ((func_80285540_S2 *)(arg0))->unk17 = ((func_80285540_S1 *)(arg1))->unk13;
    ((func_80285540_S2 *)(arg0))->unk18 = ((func_80285540_S1 *)(arg1))->unk14;
    ((func_80285540_S2 *)(arg0))->unk1A = ((func_80285540_S1 *)(arg1))->unk16;
    ((func_80285540_S2 *)(arg0))->unk6 = ((func_80285540_S1 *)(arg1))->unkA;
    if (((func_80285540_S1 *)(arg1))->unk4 & 0x40) {
        value = (((func_80285540_S1 *)(arg1))->unk8 * 2) | 1;
    } else {
        value = ((func_80285540_S1 *)(arg1))->unk8 * 2;
    }
    ((func_80285540_S2 *)(arg0))->unk4 = value;
    reference = *(s32 *)arg1;
    if (reference == -1) {
        ((func_80285540_S2 *)(arg0))->unk8 = 0;
        return;
    }
    func_80296DDC(&((func_80285540_S2 *)(arg0))->unk8, reference);
}
