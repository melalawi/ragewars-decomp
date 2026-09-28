/* Returns the initial track vector or the configured fallback when no track is active. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { float x,y,z; } Vec; typedef struct { s32 unk0,unk4; char data[1]; } Track; typedef struct { char a[4]; void *unk4; char b[0x30]; s32 unk38; } State;
void *func_8028FD94(void *, s32);                     /* extern */
void func_80400E50(Vec *, void *, s32, s32);                /* extern */
extern State *D_800E2830;

Vec func_8040385C(void) {
    Vec sp10;
    Vec sp20;
    Track *temp_v0;

    if (D_800E2830->unk38 == 0) {
        sp20.x = 0;
        sp20.y = 0;
        sp20.z = 0;
        return sp20;
    }
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(D_800E2830->unk4, 0), 0), 0);
    func_80400E50(&sp10, temp_v0->data, temp_v0->unk4, 0);
    return sp10;
}
