#include "basetypes.h"

/* Steps an object's nesting count at 0x1C up and back down while it is nonzero, each step bracketed by func_802C2020 and func_802C2040: going up past one calls func_802C0390, and coming down to anything but zero calls func_802C0510. */
typedef struct Object {
    char pad0[0x1C];
    s32 depth;
} Object;

extern s32 func_802C2020(void);
extern void func_802C2040(s32);
extern void func_802C0390(Object *, s32, s32);
extern void func_802C0510(Object *, s32, s32);

void func_80256710(Object *obj) {
    s32 mask;
    s32 mask2;

    if (obj->depth == 0) {
        return;
    }
    mask = func_802C2020();
    if (++obj->depth != 1) {
        func_802C2040(mask);
        func_802C0390(obj, 0, 1);
    } else {
        func_802C2040(mask);
    }
    mask2 = func_802C2020();
    if (--obj->depth != 0) {
        func_802C2040(mask2);
        func_802C0510(obj, 0, 1);
        return;
    }
    func_802C2040(mask2);
}
