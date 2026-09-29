#include "basetypes.h"

extern s32 func_802C0CB0(s32);

typedef struct func_802BB32C_S1 func_802BB32C_S1;
typedef struct func_802BB32C_S2 func_802BB32C_S2;
typedef struct func_802BB32C_S3 func_802BB32C_S3;
struct func_802BB32C_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
};
struct func_802BB32C_S2 {
    char pad0[0x2];
    u16 unk2;
    char pad2[0x28 - 0x2 - sizeof(u16)];
    s32 unk28;
    char pad28[0x2F - 0x28 - sizeof(s32)];
    u8 unk2F;
};
struct func_802BB32C_S3 {
    char pad0[0x2C];
    s32 unk2C;
};

void *func_802BB32C(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    char *o = (char *) arg0;
    char *d = (char *) arg3;
    void *ret;
    s32 a1;

    a1 = arg1 & 0xFFFF;
    ((func_802BB32C_S1 *)(d))->unk0 = a1 | 0x08000000;
    ((func_802BB32C_S1 *)(d))->unk4 = (a1 << 0x10) | ((arg2 * 2) & 0xFFFF);
    ((func_802BB32C_S1 *)(d))->unk8 = 0x0B000020;
    ((func_802BB32C_S1 *)(d))->unkC = func_802C0CB0((s32) ((char *)o + 8));
    {
        s32 c2 = 0x0E000000;
        s32 b2f = ((func_802BB32C_S2 *)(o))->unk2F;
        s32 h2 = ((func_802BB32C_S2 *)(o))->unk2;
        ((func_802BB32C_S1 *)(d))->unk10 = (b2f << 0x10) | (h2 | c2);
    }
    ret = d + 0x18;
    ((func_802BB32C_S1 *)(d))->unk14 = func_802C0CB0(((func_802BB32C_S2 *)(o))->unk28);
    ((func_802BB32C_S3 *)(o))->unk2C = 0;
    return ret;
}
