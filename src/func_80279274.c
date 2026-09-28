#include "basetypes.h"

/* Updates a table of triggers against masks: for each trigger the world accepts (always in world mode 4, otherwise when func_8028BBE8 refuses it), a trigger not yet entered whose mask meets the enter mask is marked entered and runs its enter action (the id's action through func_8028C400 and func_8028C490, or func_80278F70 without an id); it then counts as active when its mask meets the require mask, meets the enter mask, passes the paired exclude masks, is not flagged 0x1000 without 0x100 and passes func_80279490, and an active trigger runs its fire action once (through func_8028BAF8, func_8028BD28, func_8028BD88 and func_8028C34C for an id, or func_80278EEC without one). */

typedef struct Trigger {
    s32 mask;
    s32 unk4;
    s32 unk8;
    union {
        s32 word;
        struct {
            u16 unkC;
            u8 state;
            u8 id;
        } bytes;
    } flags;
    s32 unk10;
} Trigger;

extern s32 D_8011FE88;
extern s32 func_8028BBE8(s32 *world, Trigger *trigger);
extern s32 func_8028C400(s32 *world, s32 id);
extern void func_8028C490(s32 *world, s32 id);
extern void func_80278F70(Trigger *trigger);
extern s32 func_80279490(Trigger *trigger, s32 arg);
extern void func_8028BAF8(s32 *world, Trigger *trigger, s32 arg);
extern void func_8028BD28(s32 *world, s32 id);
extern s32 func_8028BD88(s32 *world, s32 id);
extern void func_8028C34C(s32 *world, s32 id);
extern void func_80278EEC(Trigger *trigger);

void func_80279274(Trigger *triggers, s32 count, s32 require, s32 enter, s32 exclude, s32 group, s32 arg) {
    s32 i;
    s32 active;
    s32 usable;
    s32 *world;
    Trigger *trigger;

    for (trigger = triggers, i = 0; i < count; trigger++, i++) {
        world = &D_8011FE88;
        usable = 1;
        if (*world != 4) {
            usable = func_8028BBE8(world, trigger) == 0;
        }
        if (!usable) {
            continue;
        }
        active = 1;
        if (!(trigger->flags.bytes.state & 0x20) && enter != 0 && (trigger->mask & enter)) {
            trigger->flags.bytes.state |= 0x40;
            if (trigger->flags.bytes.id != 0) {
                if (func_8028C400(world, trigger->flags.bytes.id) != 0) {
                    func_8028C490(world, trigger->flags.bytes.id);
                }
            } else {
                func_80278F70(trigger);
            }
            active = 1;
        }
        if (require != 0) {
            active = 0;
            if (trigger->mask & require) {
                active = 1;
            }
        }
        if (enter != 0 && !(trigger->mask & enter)) {
            active = 0;
        }
        if ((trigger->mask & group) && !(trigger->mask & group & exclude)) {
            active = 0;
        }
        if ((trigger->flags.word & 0x1100) == 0x1000) {
            active = 0;
        }
        if (func_80279490(trigger, arg) == 0) {
            active = 0;
        }
        if (!active) {
            continue;
        }
        if (trigger->flags.bytes.id != 0) {
            if (!(trigger->flags.bytes.state & 0x80)) {
                func_8028BAF8(world, trigger, 1);
                trigger->flags.bytes.state |= 0x80;
                func_8028BD28(world, trigger->flags.bytes.id);
                if (func_8028BD88(world, trigger->flags.bytes.id) != 0) {
                    func_8028C34C(world, trigger->flags.bytes.id);
                }
            }
        } else {
            func_80278EEC(trigger);
        }
    }
}
