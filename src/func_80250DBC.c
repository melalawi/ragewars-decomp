#include "basetypes.h"

extern u8 D_801462E5;

typedef struct func_80250DBC_S1 func_80250DBC_S1;
typedef struct func_80250DBC_S2 func_80250DBC_S2;
typedef struct func_80250DBC_S3 func_80250DBC_S3;
struct func_80250DBC_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0xDC - 0x18 - sizeof(void*)];
    u32 unkDC;
};
struct func_80250DBC_S2 {
    char pad0[0xE];
    s8 unkE;
};
struct func_80250DBC_S3 {
    char pad0[0xE];
    s8 unkE;
    char padE[0xF - 0xE - sizeof(s8)];
    s8 unkF;
    char padF[0x24 - 0xF - sizeof(s8)];
    u32 unk24;
};

s8 func_80250DBC(void *arg0) {
    void *temp_a1;

    if (D_801462E5 != 0) {
        return ((func_80250DBC_S2 *)((((func_80250DBC_S1 *)(arg0))->unk18)))->unkE;
    }
    temp_a1 = ((func_80250DBC_S1 *)(arg0))->unk18;
    if (((func_80250DBC_S1 *)(arg0))->unkDC < ((func_80250DBC_S3 *)(temp_a1))->unk24 * 2) {
        return ((func_80250DBC_S3 *)(temp_a1))->unkE;
    }
    return ((func_80250DBC_S3 *)(temp_a1))->unkF;
}
