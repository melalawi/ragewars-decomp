#include "basetypes.h"

typedef struct func_8020D328_S1 func_8020D328_S1;
typedef struct func_8020D328_S2 func_8020D328_S2;
struct func_8020D328_S1 {
    char pad0[0x24];
    char* unk24;
};
struct func_8020D328_S2 {
    char pad0[0x10];
    char* unk10;
    char pad10[0x28 - 0x10 - sizeof(char*)];
    s32 unk28;
};

s32 func_8020D328(void *arg0) {
    char *record = ((func_8020D328_S1 *)(arg0))->unk24;
    if (record != 0) {
        do {
            if (((func_8020D328_S2 *)(record))->unk28 == 1) {
                return 1;
            }
            record = ((func_8020D328_S2 *)(record))->unk10;
        } while (record != 0);
    }
    return 0;
}
