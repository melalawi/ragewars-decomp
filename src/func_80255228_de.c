#include "span_1000/code_8025477C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 func_802BB5F0_de(s32 *, s32);
extern s32 D_800CD8AC_de;





s32 func_80255228_de(s32 *arg0) {
    if (((func_802551C8_S1 *)(arg0))->unk238 != 0) {
        do {
            func_802BB5F0_de(arg0, D_800CD8B8_de);
        } while (((func_802551C8_S1 *)(arg0))->unk238 != 0);
    }
    return func_802BB5F0_de(arg0, D_800CD8AC_de);
}
