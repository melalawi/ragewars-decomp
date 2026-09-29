#include "basetypes.h"

typedef struct func_802B742C_S1 func_802B742C_S1;
struct func_802B742C_S1 {
    char pad0[0x8];
    u8* unk8;
};

s32 func_802B742C(void *arg0) {
    u8 *p;
    s32 b;
    s32 val;

    p = ((func_802B742C_S1 *)(arg0))->unk8;
    b = *p;
    ((func_802B742C_S1 *)(arg0))->unk8 = p + 1;
    val = b;
    if (val & 0x80) {
        val = val & 0x7F;
        do {
            p = ((func_802B742C_S1 *)(arg0))->unk8;
            b = *p;
            ((func_802B742C_S1 *)(arg0))->unk8 = p + 1;
            val = (val << 7) + (b & 0x7F);
        } while (b & 0x80);
    }
    return val;
}
