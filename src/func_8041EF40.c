/* Advances the selected menu item and updates its display state. */
#include "basetypes.h"
typedef struct { char pad[16]; unsigned char unk10; } Obj;
typedef struct { char pad[8]; int items[3]; int unk14,unk18,unk1C; } Menu;
extern Menu *D_800E39C0;
extern void func_8025DF54(int),func_8029A73C(void),func_8040E958(Obj *,int);
extern Obj *func_8040ECB0(int,int);
s32 func_8041EF40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_hi;
    s32 temp_v0_2;
    s32 temp_v1;
    Obj *temp_v0;
    Obj *temp_v0_3;

    if (arg3 == 1) {
        func_8029A73C();
        temp_v0 = func_8040ECB0(D_800E39C0->items[D_800E39C0->unk14], VV_0392);
        temp_v0->unk10 = 0xFF;
        func_8040E958(temp_v0, 0);
        temp_v1 = D_800E39C0->unk1C;
        temp_v0_2 = D_800E39C0->unk14 + 1;
        temp_hi = temp_v0_2 % temp_v1;
        D_800E39C0->unk14 = temp_hi;
        temp_v0_3 = func_8040ECB0(D_800E39C0->items[temp_hi], VV_0392);
        temp_v0_3->unk10 = 0xFF;
        func_8040E958(temp_v0_3, 1);
        D_800E39C0->unk18 = 0;
        func_8025DF54(0xE80);
        return 0;
    }
    return 0;
}
