#include "basetypes.h"

extern void *D_800D052C[];
extern s32 D_800D2980;
extern s32 D_8011FE88;
extern char D_80145088;

extern s32 func_80214178(void *, void *, s32);
extern s32 func_80232770(s32);
extern s32 func_80232790(s32);
extern s32 func_802327C4(s32);
extern void func_80237E70(void *, void *, void *);

void func_8022FD9C(void *arg0, void *arg1) {
    s16 index;
    u16 unsigned_index;
    void *owner;
    void *state;

    state = *(void **)((char *)arg0 + 0x1D8);
    index = *(s16 *)((char *)state + 0x770);
    unsigned_index = *(u16 *)((char *)state + 0x770);
    if ((*(s16 *)((char *)state + 0x62E) != index) || (D_8011FE88 != 4)) {
        if (func_80232770(index) != 0) {
            *(s32 *)((char *)state + 0x13B8) = 1;
        } else if (func_80232790(index) != 0) {
            *(s32 *)((char *)state + 0x13BC) = 1;
        } else if (func_802327C4(index) != 0) {
            *(s32 *)((char *)state + 0x13C0) = 1;
        }
        *(s16 *)((char *)state + 0x62E) = unsigned_index;
        *(s32 *)((char *)arg1 + 0x2C) = *(s32 *)((char *)*(void **)
            ((char *)D_800D052C + ((s32)(unsigned_index << 16) >> 14)) + 0x54);
        *(s32 *)((char *)arg1 + 0x120) = *(s32 *)((char *)D_800D052C[*(s16 *)((char *)state + 0x62E)] + 0x58);
        owner = *(void **)((char *)state + 0x5DC);
        if ((owner != 0) && ((u32)D_800D2980 >= 5U)) {
            func_80237E70(&D_80145088, owner,
                *(void **)*(void **)((char *)D_800D052C[*(s16 *)((char *)state + 0x62E)]));
        }
        *(s32 *)((char *)arg1 + 0x124) = 0;
        *(s32 *)((char *)arg1 + 0x128) = 0;
        *(s8 *)((char *)arg0 + 1) = 0;
        *(s32 *)((char *)arg1 + 0x130) = 0;
    }
    func_80214178(arg0, arg1, 0);
}
