#include "basetypes.h"

#define FIELD(base, type, offset) (*(type *)((s8 *)(base) + (offset)))

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

void func_8028A674(void *arg0) {
    f32 *target;
    f32 value;
    f32 next;
    s32 resource;
    s32 state;
    s32 selected;
    s8 *global;

    target = &D_800D2934[FIELD(arg0, s32, 0x1B410) * 2];
    state = FIELD(arg0, s32, 0x1B414);
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
        value = FIELD(arg0, f32, 0x1B418);
        if (value == *target) {
            if (FIELD(arg0, s32, 0x1B438) == 0x3E7) {
                func_804037D4();
                func_804030E0(0x190);
            }
            if (FIELD(arg0, s32, 0x1B410) == 0) {
                FIELD(arg0, s32, 0x1B414) = 0;
            } else {
                FIELD(arg0, s32, 0x1B414) = 2;
            }
            resource = FIELD(arg0, s32, 0x1B438);
            if (resource < 0) {
                FIELD(arg0, s32, 0x1B438) = ~resource;
                FIELD(arg0, s32, 0x1B41C) = 0;
            } else {
                FIELD(arg0, s32, 0x1B41C) =
                    func_8044DE70(arg0, -1, resource,
                                  (s8 *)arg0 + 0x1B420, 1);
            }
            FIELD(arg0, s32, 0x1B434) = FIELD(arg0, s32, 0x1B438);
            if (FIELD(arg0, s32, 0x1B41C) != 0) {
                selected = FIELD(arg0, s16, 0x1B430);
            } else {
                selected = FIELD(arg0, s32, 0x1B438);
            }
            func_80286A78(arg0, selected, FIELD(arg0, s32, 0x1B41C));
            global = (s8 *)&D_801462C8;
            if (FIELD(arg0, s32, 0x1B44C) !=
                FIELD(global, s32, 4)) {
                if (func_802934DC() != 0) {
                    func_80239760(global - 0x1240,
                                  global - 0x1200,
                                  D_800D7AC8, 4.0f);
                    FIELD(arg0, s32, 0x1B44C) =
                        FIELD(global, s32, 4);
                }
            }
        } else {
            next = value + D_800D2988;
            FIELD(arg0, f32, 0x1B418) = next;
            value = *target;
            if (value < next) {
                FIELD(arg0, f32, 0x1B418) = value;
            }
        }
        goto done;

state_two:
        value = FIELD(arg0, f32, 0x1B418);
        if (value == 0.0f) {
            FIELD(arg0, s32, 0x1B414) = 0;
        } else {
            next = value - D_800D2988;
            FIELD(arg0, f32, 0x1B418) = next;
            if (next < 0.0f) {
                FIELD(arg0, f32, 0x1B418) = 0.0f;
            }
        }
done:
    return;
}
