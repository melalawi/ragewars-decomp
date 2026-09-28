#include "basetypes.h"

typedef struct {
    char pad0[2];
    s16 f2;
    char pad4[0xC];
    s32 f10;
    s32 f14;
} Rec;

extern void *D_800D8444;
extern u32 func_802C2020(void);
extern void func_802C2040(u32);

void func_802BF740(s32 arg0, s32 arg1, s16 arg2) {
    u32 temp_v0;
    Rec *rec;

    temp_v0 = func_802C2020();
    rec = D_800D8444;
    rec->f10 = arg0;
    rec->f14 = arg1;
    rec->f2 = arg2;
    func_802C2040(temp_v0);
}
