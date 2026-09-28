#include "basetypes.h"

/* Loads the owner at offset 0x1C of the second argument into D_80145040 through func_8022A590,
   calls func_80409814, and hands the owner, its word at 0x698 and a zero with the resource
   D_44F0DC to func_804426E4 for the block 0x5DC bytes into D_80145040. Returns one. */
struct Owner {
    char pad[0x698];
    s32 value;
};

struct Holder {
    char pad[0x1C];
    struct Owner *owner;
};

extern char D_80145040[];
extern char D_44F0DC[];
extern void func_8022A590(void *, struct Owner *);
extern void func_80409814();
extern void func_804426E4(void *, void *, struct Owner *, s32, s32);

s32 func_80443804(void *unused, struct Holder *holder) {
    struct Owner *owner = holder->owner;

    func_8022A590(D_80145040, owner);
    func_80409814();
    func_804426E4(D_80145040 + 0x5DC, D_44F0DC, owner, owner->value, 0);
    return 1;
}
