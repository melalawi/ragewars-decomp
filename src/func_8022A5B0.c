#include "basetypes.h"

typedef struct func_8022A5B0_S1 func_8022A5B0_S1;
typedef struct func_8022A5B0_S2 func_8022A5B0_S2;
struct func_8022A5B0_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A5B0_S2 {
    char pad0[0x698];
    s32 unk698;
    char pad698[0x16E0 - 0x698 - sizeof(s32)];
    char* unk16E0;
};

void *func_8022A5B0(char *object, s32 arg1) {
    char *record = ((func_8022A5B0_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            if (((func_8022A5B0_S2 *)(record))->unk698 == arg1) {
                return record;
            }
            record = ((func_8022A5B0_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
    return 0;
}
