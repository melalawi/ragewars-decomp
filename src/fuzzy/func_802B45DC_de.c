#include "types.h"

extern void func_802B53E0_de(void *arg0, void *a, void *b, s32 c);
extern s32 func_802B0340_de(s32, s32, void *, s32, s32);

extern char D_002B4730;
extern char D_002B51B8;

typedef struct func_802B96AC_S1 func_802B96AC_S1;
struct func_802B96AC_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s16 unk18;
    char pad18[0x1A - 0x18 - sizeof(s16)];
    s16 unk1A;
    char pad1A[0x1C - 0x1A - sizeof(s16)];
    s16 unk1C;
    char pad1C[0x1E - 0x1C - sizeof(s16)];
    s16 unk1E;
    char pad1E[0x20 - 0x1E - sizeof(s16)];
    s16 unk20;
    char pad20[0x22 - 0x20 - sizeof(s16)];
    s16 unk22;
    char pad22[0x24 - 0x22 - sizeof(s16)];
    s16 unk24;
    char pad24[0x26 - 0x24 - sizeof(s16)];
    s16 unk26;
    char pad26[0x28 - 0x26 - sizeof(s16)];
    s16 unk28;
    char pad28[0x2E - 0x28 - sizeof(s16)];
    s16 unk2E;
    char pad2E[0x30 - 0x2E - sizeof(s16)];
    s32 unk30;
    char pad30[0x34 - 0x30 - sizeof(s32)];
    s32 unk34;
    char pad34[0x38 - 0x34 - sizeof(s32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    s32 unk44;
    char pad44[0x48 - 0x44 - sizeof(s32)];
    s32 unk48;
};

void func_802B45DC_de(void *arg0, s32 arg1) {
    s32 result;

    func_802B53E0_de(arg0, &D_002B4730, &D_002B51B8, 4);
    result = func_802B0340_de(0, 0, arg1, 1, 0x50);
    ((func_802B96AC_S1 *)(arg0))->unk14 = result;
    ((func_802B96AC_S1 *)(arg0))->unk38 = 1;
    ((func_802B96AC_S1 *)(arg0))->unk48 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk1A = 1;
    ((func_802B96AC_S1 *)(arg0))->unk28 = 1;
    ((func_802B96AC_S1 *)(arg0))->unk2E = 1;
    ((func_802B96AC_S1 *)(arg0))->unk1C = 1;
    ((func_802B96AC_S1 *)(arg0))->unk1E = 1;
    ((func_802B96AC_S1 *)(arg0))->unk20 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk22 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk26 = 1;
    ((func_802B96AC_S1 *)(arg0))->unk24 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk24 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk30 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk34 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk18 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk3C = 0;
    ((func_802B96AC_S1 *)(arg0))->unk40 = 0;
    ((func_802B96AC_S1 *)(arg0))->unk44 = 0;
}
