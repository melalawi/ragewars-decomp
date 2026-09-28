#include "basetypes.h"

/* Sets the byte at offset 0x78 of the object at 0x5D8 of an actor, calls func_80449B44 with the
   actor, its second argument and one, then func_80214178 on offsets 0x2E8 and 0x458 with two and
   func_8021B1E4 with D_80146898, zero and one. */
struct Part {
    char pad[0x78];
    u8 active;
};

struct Actor {
    char pad[0x5D8];
    struct Part *part;
};

extern s32 D_80146898;
extern void func_80449B44(struct Actor *, void *, s32);
extern void func_80214178(void *, void *, s32);
extern void func_8021B1E4(struct Actor *, s32, s32, s32);

void func_8044AC70(struct Actor *actor, void *second) {
    actor->part->active = 1;
    func_80449B44(actor, second, 1);
    func_80214178((char *) actor + 0x2E8, (char *) actor + 0x458, 2);
    func_8021B1E4(actor, D_80146898, 0, 1);
}
