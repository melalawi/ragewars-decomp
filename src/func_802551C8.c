#include "basetypes.h"

extern s32 func_802C06E0(s32 *, s32);
extern s32 D_800D2B1C;
extern s32 D_800D2B28;

typedef struct func_802551C8_S1 func_802551C8_S1;
struct func_802551C8_S1 {
    char pad0[0x238];
    s32 unk238;
};

s32 func_802551C8(s32 *arg0) {
    if (((func_802551C8_S1 *)(arg0))->unk238 != 0) {
        do {
            func_802C06E0(arg0, D_800D2B28);
        } while (((func_802551C8_S1 *)(arg0))->unk238 != 0);
    }
    return func_802C06E0(arg0, D_800D2B1C);
}
