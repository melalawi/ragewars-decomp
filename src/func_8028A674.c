#include "basetypes.h"

typedef struct { s32 pad; s32 value; } GlobalWord;

extern f32 D_800D2934[];
extern f32 D_800D2988;
extern s32 D_800D7AC8;
extern s32 D_801462C8;

extern void func_804037D4(void);
extern void func_804030E0(s32);
extern s32 func_8044DE70(void *, s32, s32, void *, s32);
extern void func_80286A78(void *, s32, s32);
extern s32 func_802934DC(void);
extern void func_80239760(void *, void *, s32, f32);

typedef struct func_8028A674_S1 func_8028A674_S1;
struct func_8028A674_S1 {
    char pad0[0x1B410];
    s32 unk1B410;
    s32 unk1B414;
    f32 unk1B418;
    s32 unk1B41C;
    char unk1B420;
    char pad1B421[0x1B430-0x1B421];
    s16 unk1B430;
    char pad1B432[2];
    s32 unk1B434;
    s32 unk1B438;
    char pad1B43C[0x10];
    s32 unk1B44C;
};

void func_8028A674(void *arg0) {
    f32 *target;
    f32 value;
    f32 next;
    s32 resource;
    s32 state;
    s32 selected;
    s8 *global;

    target = &D_800D2934[((func_8028A674_S1 *)arg0)->unk1B410 * 2];
    state = ((func_8028A674_S1 *)arg0)->unk1B414;
    if (state == 1) {
        goto state_one;
    }
    if (state < 2) {
        goto done;
    }
    if (state == 2) {
        goto state_two;
    }
    goto done;

state_one:
        value = ((func_8028A674_S1 *)arg0)->unk1B418;
        if (value == *target) {
            if (((func_8028A674_S1 *)arg0)->unk1B438 == 0x3E7) {
                func_804037D4();
                func_804030E0(0x190);
            }
            if (((func_8028A674_S1 *)arg0)->unk1B410 == 0) {
                ((func_8028A674_S1 *)arg0)->unk1B414 = 0;
            } else {
                ((func_8028A674_S1 *)arg0)->unk1B414 = 2;
            }
            resource = ((func_8028A674_S1 *)arg0)->unk1B438;
            if (resource < 0) {
                ((func_8028A674_S1 *)arg0)->unk1B438 = ~resource;
                ((func_8028A674_S1 *)arg0)->unk1B41C = 0;
            } else {
                ((func_8028A674_S1 *)arg0)->unk1B41C =
                    func_8044DE70(arg0, -1, resource,
                                  &((func_8028A674_S1 *)(arg0))->unk1B420, 1);
            }
            ((func_8028A674_S1 *)arg0)->unk1B434 = ((func_8028A674_S1 *)arg0)->unk1B438;
            if (((func_8028A674_S1 *)arg0)->unk1B41C != 0) {
                selected = ((func_8028A674_S1 *)arg0)->unk1B430;
            } else {
                selected = ((func_8028A674_S1 *)arg0)->unk1B438;
            }
            func_80286A78(arg0, selected, ((func_8028A674_S1 *)arg0)->unk1B41C);
            global = (s8 *)&D_801462C8;
            if (((func_8028A674_S1 *)arg0)->unk1B44C !=
                ((GlobalWord *)global)->value) {
                if (func_802934DC() != 0) {
                    func_80239760(global - 0x1240,
                                  global - 0x1200,
                                  D_800D7AC8, 4.0f);
                    ((func_8028A674_S1 *)arg0)->unk1B44C =
                        ((GlobalWord *)global)->value;
                }
            }
        } else {
            next = value + D_800D2988;
            ((func_8028A674_S1 *)arg0)->unk1B418 = next;
            value = *target;
            if (value < next) {
                ((func_8028A674_S1 *)arg0)->unk1B418 = value;
            }
        }
        goto done;

state_two:
        value = ((func_8028A674_S1 *)arg0)->unk1B418;
        if (value == 0.0f) {
            ((func_8028A674_S1 *)arg0)->unk1B414 = 0;
        } else {
            next = value - D_800D2988;
            ((func_8028A674_S1 *)arg0)->unk1B418 = next;
            if (next < 0.0f) {
                ((func_8028A674_S1 *)arg0)->unk1B418 = 0.0f;
            }
        }
done:
    return;
}
