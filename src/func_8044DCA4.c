/* Loads a selected resource into the shared buffer and releases the temporary allocation. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct State { char pad0[4]; s32 unk4; char pad8[48]; s32 unk38; char pad3C[8]; s32 unk44; } State;
s32 *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32); /* extern */
void func_802537D8(s32, s32 *);                          /* extern */
s32 func_80264B8C();                                /* extern */
void func_802C2490(void *, s32, s32);                       /* extern */
extern char D_285130;
extern char D_800CA1A0;
extern char D_800FD1F0;

void func_8044DCA4(State *arg0) {
    s32 *temp_v0;
    s32 temp_a1;

    if (func_80264B8C() == 0) {
        temp_v0 = func_802518DC(0, arg0->unk38, arg0->unk38, arg0->unk44, 0, 0, &D_285130, &D_800CA1A0, 1);
        func_802C2490(&D_800FD1F0, *temp_v0, 0x5800);
        func_802537D8(0, temp_v0);
        arg0->unk4 = 1;
    }
}
