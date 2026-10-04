#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "types.h"

/* Calls func_802172D0_de on an object, its block at offset 0x170 and a stack argument when the pause word is clear, the object exists and its first byte is one. Adapted from func_802688AC_de with the pause-word test, the callee and the extra stack argument changed, and the call wrapped in do-while(0) so the stack argument loads at entry. */


extern s32 D_801427D4;
extern void func_802172D0_de(u8 *, u8 *, s32);

void func_80268864_de(void *unused, u8 *object, s32 third, struct Shape_func_802764D4_de_2 pair, s32 fifth, s32 sixth) {
    if (D_801427D4 == 0 && object != 0 && object[0] == 1) {
        do {
            func_802172D0_de(object, object + 0x170, sixth);
        } while (0);
    }
}
