#include "basetypes.h"

typedef struct func_802B5410_S1 func_802B5410_S1;
struct func_802B5410_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    u32 unk4;
    char pad4[0x8 - 0x4 - sizeof(u32)];
    s32 unk8;
};

s32 func_802B5410(s32 a, s32 b, void *c, s32 d, s32 e) {
    u32 temp_a1;
    u32 temp_v1;
    u32 var_a3;

    temp_a1 = ((func_802B5410_S1 *)(c))->unk4;
    temp_v1 = temp_a1 + (((d * e) + 0xF) & ~0xF);
    var_a3 = 0;
    if ((u32)(((func_802B5410_S1 *)(c))->unk0 + ((func_802B5410_S1 *)(c))->unk8) >= temp_v1) {
        var_a3 = temp_a1;
        ((func_802B5410_S1 *)(c))->unk4 = temp_v1;
    }
    return (s32) var_a3;
}
