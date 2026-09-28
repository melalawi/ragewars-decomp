/* Apply resource indices and dispatch the optional object effect. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char pad0[4]; u16 unk4; char pad6[2]; s32 unk8,unkC,unk10; char pad14[0x48]; u32 unk5C; char pad60[0xd8]; s32 unk138;} Obj;
typedef struct { char pad0[6]; s8 unk6,unk7; char pad8[4]; s16 unkC;} Params;
void func_8025DE74(s32, s32, s32, s32, s32, s32);      /* extern */
s32 func_80268BE0(void *, s8);                         /* extern */
void func_8027DAA4(void *, s32, s32);                              /* extern */
void func_8028438C(void *, s32);                       /* extern */
void func_802A5588(void *, void *, s8);                   /* extern */
extern char D_8013B1A8;
extern char D_8013BA80;

void func_802838F4(Obj *arg0, Params *arg1) {
    s32 temp_t0;
    s8 temp_a1;
    s8 temp_a2;
    u16 temp_v1;

    func_8027DAA4(arg0, 0, 0);
    temp_a2 = arg1->unk6;
    if (temp_a2 != -1) {
        func_802A5588(&D_8013BA80, arg0, temp_a2);
    }
    temp_a1 = arg1->unk7;
    arg0->unk138 = temp_a1 == -1 ? 0 : func_80268BE0(&D_8013B1A8, temp_a1);
    if (!(arg0->unk5C & 0x200000) && (temp_t0 = arg1->unkC, (temp_t0 != 0))) {
        switch(arg0->unk4) {
        case 0x22: case 0x5f: case 0x60:
            func_8028438C(arg0,temp_t0); break;
        default:
            func_8025DE74(temp_t0,arg0->unk8,arg0->unkC,arg0->unk10,0,-1); break;
        }
    }
}
