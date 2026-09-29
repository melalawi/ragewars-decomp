#include "basetypes.h"

typedef struct func_8020CFE0_S1 func_8020CFE0_S1;
typedef struct func_8020CFE0_S2 func_8020CFE0_S2;
struct func_8020CFE0_S1 {
    char pad0[0x24];
    char* unk24;
};
struct func_8020CFE0_S2 {
    s32 unk0;
    char pad0[0x10 - 0x0 - sizeof(s32)];
    char* unk10;
};

void *func_8020CFE0(char *object, s32 arg1) {
    char *record = ((func_8020CFE0_S1 *)(object))->unk24;
    if (record != 0) {
        do {
            if (((func_8020CFE0_S2 *)(record))->unk0 == arg1) {
                return record;
            }
            record = ((func_8020CFE0_S2 *)(record))->unk10;
        } while (record != 0);
    }
    return 0;
}
