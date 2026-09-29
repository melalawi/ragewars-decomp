#include "basetypes.h"

typedef struct func_80255CB4_S1 func_80255CB4_S1;
struct func_80255CB4_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

s32 func_80255CB4(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v0;

    temp_v1 = ((func_80255CB4_S1 *)(arg0))->unk4;
    if (temp_v1 != 0) {
        *(s32 *)(arg1 + ((func_80255CB4_S1 *)(arg0))->unk8) = temp_v1;
        *(s32 *)(((func_80255CB4_S1 *)(arg0))->unk4 + ((func_80255CB4_S1 *)(arg0))->unkC) = arg1;
    } else {
        *(s32 *)(arg1 + ((func_80255CB4_S1 *)(arg0))->unk8) = 0;
        *(s32 *)arg0 = arg1;
    }
    *(s32 *)(arg1 + ((func_80255CB4_S1 *)(arg0))->unkC) = 0;
    ((func_80255CB4_S1 *)(arg0))->unk4 = arg1;
    temp_v0 = ((func_80255CB4_S1 *)(arg0))->unk10 + 1;
    ((func_80255CB4_S1 *)(arg0))->unk10 = temp_v0;
    return temp_v0;
}
