#include "basetypes.h"

extern void func_8022B180(s32);
extern s32 func_80222A80(void *arg0, s16 arg1);
extern s32 func_802831FC(void *, s32);
extern s16 func_8022F95C(void *arg0);
extern s32 func_802301E4(void *, void *);
extern s32 func_80214178(void *, void *, s32);

extern s16 D_800CE8DC;
extern char D_80121990;
extern s32 D_801468F4;

void func_80233428(void *arg0, void *arg1) {
    void *actor;
    s16 idx;
    s32 value;

    actor = *(void **)((char *)arg0 + 0x1D8);
    idx = *(s16 *)((char *)actor + 0x650);
    value = *(s16 *)((char *)&D_800CE8DC + idx * 0x18);

    if (*(f32 *)((char *)actor + 0x11D8) <= 0.0f) {
        if ((*(u8 *)(*(char **)((char *)actor + 0x5D8) + 0x8F) == 0 ||
             D_801468F4 == 0) &&
            (*(s32 *)((char *)actor + 0x6AC) & 0x4000)) {
            func_8022B180(actor);
        }
    }

    if (func_80222A80(actor, *(s16 *)((char *)actor + 0x62E)) == 0) {
        if (func_802831FC(&D_80121990, actor) == 0) {
            *(s16 *)((char *)actor + 0x770) = func_8022F95C(actor);
        }
    } else if (func_802301E4(arg0, arg1) == 0 &&
               !(*(s32 *)((char *)arg0 + 0x100) & 0x400)) {
        func_80214178(arg0, arg1, value);
    }
}
