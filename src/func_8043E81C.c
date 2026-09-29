/* Steps the selection D_800E5E48 through func_8044252C (a second step when func_802643C0 or
   func_8026439C reports the object's controller busy), then sets D_801462E8 to the chosen entry of the
   float table D_00450854 plus the offset in D_800E2358, clamped between D_800E2360 and D_800E2364. */
#include "basetypes.h"

typedef struct {
    s32 unk0;
    f32 offset;
} ScaleBase;

typedef struct {
    u8 pad0[0x20];
    s32 controller;
} MenuObject;

extern s32 D_800E5E48;
extern ScaleBase D_800E2358;
extern f32 D_800E2360;
extern f32 D_800E2364;
extern f32 D_801462E8;
extern f32 D_00450854[];

extern s32 func_8044252C(MenuObject *, s32, s32, s32, s32, s32);
extern s32 func_802643C0(s32);
extern s32 func_8026439C(s32);

s32 func_8043E81C(void *arg0, MenuObject *obj)
{
    f32 scale;

    D_800E5E48 = func_8044252C(obj, D_800E5E48, 1, 0, 15, 0);
    if (func_802643C0(obj->controller) != 0 || func_8026439C(obj->controller) != 0) {
        func_8044252C(obj, D_800E5E48, 1, 0, 15, 0);
    }
    scale = D_00450854[D_800E5E48] + D_800E2358.offset;
    if (!(scale < D_800E2360)) {
        if (!(scale > D_800E2364)) {
            if (scale < D_800E2360) {
                scale = D_800E2360;
            }
        } else {
            scale = D_800E2364;
        }
    } else {
        scale = D_800E2360;
    }
    D_801462E8 = scale;
    return 0;
}
