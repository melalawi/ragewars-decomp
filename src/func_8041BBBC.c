#include "basetypes.h"

/* Calls func_8029A73C and, for an event of kind one on a slot with no word at 0x5C whose child at 0x4C has flag 0x10 of its halfword at 0x12 set and a target at 0x34, passes the owner, the slot and the target to func_8041B95C, returning zero. */
struct Child {
    char pad[0x12];
    u16 flags;
    char pad14[0x34 - 0x14];
    void *target;
};

struct Owner {
    char pad[0x4C];
    struct Child *children[4];
    s32 busy[4];
};

extern void func_8029A73C();
extern void func_8041B95C(struct Owner *, s32, void *);

s32 func_8041BBBC(struct Owner *owner, s32 arg1, s32 slot, s32 kind) {
    struct Child *child;

    func_8029A73C();
    if (kind != 1) {
        return 0;
    }
    if (owner->busy[(u16)slot] != 0) {
        return 0;
    }
    child = owner->children[(u16)slot];
    if (child == 0) {
        return 0;
    }
    if (!(child->flags & 0x10)) {
        return 0;
    }
    if (child->target == 0) {
        return 0;
    }
    func_8041B95C(owner, (u16)slot, child->target);
    return 0;
}
