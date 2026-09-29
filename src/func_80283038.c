#include "basetypes.h"

extern u8 D_801462E3;

typedef struct func_80283038_S1 func_80283038_S1;
struct func_80283038_S1 {
    char pad0[0x5C];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32* unk118;
};

void func_80283038(void *arg0, s32 *arg1) {
    s32 result;

    result = 0;
    if ((*(((func_80283038_S1 *)((arg0)))->unk118)) & 0x02000000) {
        if ((((func_80283038_S1 *)((arg0)))->unk5C) & 2) {
            result = 2;
        } else if (D_801462E3 == 2) {
            result = 1;
        }
    }
    *arg1 |= result << 0x1E;
}
