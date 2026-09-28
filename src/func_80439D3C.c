/* Initializes the six object parameters and clears its transient state. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { s32 x,y,z; } Vec;
typedef struct { s32 unk0; Vec first,second; s32 unk1C,unk20,unk24,unk28,unk2C,unk30,unk34; } State;
void func_80439E60();                                  /* extern */
void func_80439EB4(void *, s32);                         /* extern */

s32 func_80439D3C(State *arg0, s32 arg1, Vec first, Vec second) {
    arg0->second = second;
    arg0->first = first;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    arg0->unk2C = 0;
    arg0->unk30 = 0;
    func_80439E60();
    func_80439EB4(arg0, 0);
    return arg0->unk34;
}
