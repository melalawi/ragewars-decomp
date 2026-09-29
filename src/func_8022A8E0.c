#include "basetypes.h"

typedef struct func_8022A8E0_S1 func_8022A8E0_S1;
typedef struct func_8022A8E0_S2 func_8022A8E0_S2;
struct func_8022A8E0_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A8E0_S2 {
    char pad0[0x5FE];
    s16 unk5FE;
    char pad5FE[0x1450 - 0x5FE - sizeof(s16)];
    s32 unk1450;
    char pad1450[0x16E0 - 0x1450 - sizeof(s32)];
    char* unk16E0;
};

s32 func_8022A8E0(void *arg0) {
    char *record = ((func_8022A8E0_S1 *)(arg0))->unk20;
    s32 count = 0;
    if (record != 0) {
        do {
            if (((func_8022A8E0_S2 *)(record))->unk5FE != 0 && ((func_8022A8E0_S2 *)(record))->unk1450 == 0) {
                count += 1;
            }
            record = ((func_8022A8E0_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
    return count;
}
