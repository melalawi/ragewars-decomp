#include "basetypes.h"

typedef struct func_802A72AC_S1 func_802A72AC_S1;
typedef struct func_802A72AC_S2 func_802A72AC_S2;
struct func_802A72AC_S1 {
    char pad0[0x40];
    void* unk40;
    char pad40[0x4C - 0x40 - sizeof(void*)];
    f32 unk4C;
};
struct func_802A72AC_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0xA8 - 0x4 - sizeof(void*)];
    f32 unkA8;
    char padA8[0xAC - 0xA8 - sizeof(f32)];
    f32 unkAC;
};

void func_802A72AC(void *arg0) {
    f32 accum;
    f32 delta;
    void *node;

    if (((func_802A72AC_S1 *)(arg0))->unk4C > 0.0f) {
        accum = 0.0f;
        node = ((func_802A72AC_S1 *)(arg0))->unk40;
        if (node != 0) {
            do {
                ((func_802A72AC_S2 *)(node))->unkA8 = accum / ((func_802A72AC_S1 *)(arg0))->unk4C;
                delta = ((func_802A72AC_S2 *)(node))->unkAC;
                node = ((func_802A72AC_S2 *)(node))->unk4;
                accum += delta;
            } while (node != 0);
        }
    }
}
