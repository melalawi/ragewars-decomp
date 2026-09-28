#include "basetypes.h"

/* Calls func_802172D0 on an object, its block at offset 0x170 and a stack argument when the pause word is clear, the object exists and its first byte is one. Adapted from func_802688AC with the pause-word test, the callee and the extra stack argument changed, and the call wrapped in do-while(0) so the stack argument loads at entry. */
struct Pair {
    s32 first;
    s32 second;
};

extern s32 D_80146894;
extern void func_802172D0(u8 *, u8 *, s32);

void func_80268864(void *unused, u8 *object, s32 third, struct Pair pair, s32 fifth, s32 sixth) {
    if (D_80146894 == 0 && object != 0 && object[0] == 1) {
        do {
            func_802172D0(object, object + 0x170, sixth);
        } while (0);
    }
}
