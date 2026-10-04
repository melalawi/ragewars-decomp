#include "common/types.h"
#include "span_1000/code_802688AC.h"
#include "types.h"

/* Calls func_80217388_de on an object and its block at offset 0x170 when the object exists and its
   first byte is one. The fourth argument is a record passed by value whose first word lands in
   its home slot. */


extern void func_80217388_de(u8 *, u8 *);

void func_802688AC_de(void *unused, u8 *object, s32 third, struct Shape_func_802764D4_de_2 pair) {
    if (object != 0 && object[0] == 1) {
        func_80217388_de(object, object + 0x170);
    }
}
