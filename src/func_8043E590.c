/* Forwards arg0->unk20->unk4 to func_80264790 and clears D_800E28C0. */
#include "basetypes.h"

extern void func_80264790(s8 arg0);
extern s32 D_800E28C0;

typedef struct {
    char pad4[4];
    s8 unk4;
} Inner8043E590;

typedef struct {
    char pad0[0x20];
    Inner8043E590 *unk20;
} Handle8043E590;

void func_8043E590(Handle8043E590 *arg0) {
    func_80264790(arg0->unk20->unk4);
    D_800E28C0 = 0;
}
