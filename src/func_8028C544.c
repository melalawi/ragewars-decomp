#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern void func_80278C80(void *);
extern f32 func_802B2350(s32 arg0);
extern f32 D_800CA3D8;

s32 func_8028C544(void *arg0, void *arg1) {
    void *rec;
    f32 val;
    s32 flag;

    rec = *(void **) ((char *) arg0 + 0x11EC);
    if (rec != 0) {
        func_80255E78((char *) arg0 + 0x11EC, rec);
        func_80255C58((char *) arg0 + 0x11D8, (s32) rec);
        *(void **) ((char *) rec + 8) = arg1;
    } else {
        rec = *(void **) ((char *) arg0 + 0x11DC);
        func_80278C80(*(void **) ((char *) rec + 8));
        *(void **) ((char *) rec + 8) = arg1;
    }
    val = func_802B2350((s32) *(unsigned short *) ((char *) arg1 + 0xC));
    *(f32 *) ((char *) rec + 0xC) = val;
    flag = *(u8 *) ((char *) arg1 + 0xE) & 2;
    if (flag != 0) {
        *(f32 *) ((char *) rec + 0xC) = val * D_800CA3D8;
    }
    return flag;
}
