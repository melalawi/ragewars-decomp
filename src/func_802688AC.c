#include "basetypes.h"

/* Calls func_80217388 on an object and its block at offset 0x170 when the object exists and its
   first byte is one. The fourth argument is a record passed by value whose first word lands in
   its home slot. */
struct Pair {
    s32 first;
    s32 second;
};

extern void func_80217388(u8 *, u8 *);

void func_802688AC(void *unused, u8 *object, s32 third, struct Pair pair) {
    if (object != 0 && object[0] == 1) {
        func_80217388(object, object + 0x170);
    }
}
