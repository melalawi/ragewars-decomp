#include "basetypes.h"

typedef struct {
    s16 count;
    s16 _pad2;
    s32 value;
    s32 _pad8;
    s32 _padC;
} Buf16;

typedef struct {
    char pad3C[0x3C];
    s32 field3C;
    s32 field40;
} Obj;

extern s32 func_802B51A4(void *, s16 *, s32);

typedef struct func_802B8030_S1 func_802B8030_S1;
struct func_802B8030_S1 {
    char pad0[0x14];
    char unk14;
};

void func_802B8030(Obj *arg0) {
    s32 new_var;
    Buf16 sp10;

    new_var = arg0->field40;
    sp10.count = 1;
    sp10.value = new_var + (arg0->field3C * 0x30);
    func_802B51A4(&((func_802B8030_S1 *)(arg0))->unk14, &sp10, 0);
}
