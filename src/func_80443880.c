#include "basetypes.h"

/* Calls func_8044A37C on the object at offset 0x1C of the second argument and returns one. */
struct Holder {
    char pad[0x1C];
    void *object;
};

extern void func_8044A37C(void *);

s32 func_80443880(void *unused, struct Holder *holder) {
    func_8044A37C(holder->object);
    return 1;
}
