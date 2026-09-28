/* Refreshes the selected entry and updates its interface state. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char p[0x40];s32 unk40;} Obj; typedef struct {Obj *unk0;s32 unk4,unk8,unkC,unk10,unk14,unk18;} Entry; typedef struct {s32 unk0,unk4,unk8;Entry *unkC;s32 (*unk10)(s32);} State;
void func_80298310(s32, s32, void *, s32, s32);                 /* extern */
void func_8029AC80(void *);                               /* extern */
extern State *D_8014D080;

void func_80298DBC(void) {
    s32 (*temp_v0)(s32);
    s32 temp_s0;
    s32 value, param;

    temp_s0 = D_8014D080->unk4;
    temp_v0 = D_8014D080->unk10;
    param = (&D_8014D080->unkC[temp_s0])->unk4;
    if (temp_v0 != NULL) {
        value = temp_v0(param);
        (&D_8014D080->unkC[temp_s0])->unk0->unk40 = value;
    }
    func_80298310(1, 0xE06, 0, 0, 0);
    func_80298310(1, 0xE07, 0, 0, 0);
    (&D_8014D080->unkC[temp_s0])->unk14 = 0;
    func_80298310(1, 0xE02, &D_8014D080->unkC[temp_s0].unkC, 0, 0);
    func_8029AC80(&D_8014D080->unkC[temp_s0].unkC);
}
