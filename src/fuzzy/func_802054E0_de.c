#include "shared/world.h"
#include "common/types_1dc8418c21db.h"
#include "types.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec54E0;

typedef struct {
    char pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s16 unk36;
    s16 pad38;
    s32 unk38;
    s32 unk3C;
} Rec54E0;

typedef struct {
    char pad0[0x14];
    Rec54E0 r;
} Hold54E0;

typedef struct {
    char pad0[0x8];
    Vec54E0 pos;
    char pad14[0x4];
    Hold54E0 *holder;
    char pad1C[0xE4];
    s32 flags;
} Obj54E0;

void func_80278D78_de(Obj54E0 *arg0, s32 arg1, Obj54E0 *arg2);
s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_80216288_de(Obj54E0 *arg0, s32 arg1, Vec54E0 arg2, s32 arg3);
void func_802170A0_de(Obj54E0 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);


void func_802054E0_de(Obj54E0 *arg0, void *arg1) {
    Rec54E0 *rec;

    rec = &arg0->holder->r;
    arg0->flags = arg0->flags & 0xFFFEFFFF;
    func_80278D78_de(arg0, 0x40000, arg0);
    if (rec->unk2C == 0) {
        arg0->flags &= ~0x2000;
        arg0->flags &= ~0x100;
    }
    if (D_8011FE88.mode == 4) {
        if (rec->unk34 != -1) {
            func_8025DE54_de(rec->unk36, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0, -1);
        }
        if (rec->unk30 != -1) {
            func_80216288_de(arg0, rec->unk30, arg0->pos, 0);
        }
        func_802170A0_de(arg0, arg1, 8, rec->unk38, rec->unk3C);
    }
}
