#include "basetypes.h"

extern void func_802266E4(void *arg0);

typedef struct func_8022C5CC_S1 func_8022C5CC_S1;
typedef struct func_8022C5CC_S2 func_8022C5CC_S2;
struct func_8022C5CC_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022C5CC_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    char* unk16E0;
};

void func_8022C5CC(void *object) {
    char *record = ((func_8022C5CC_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            *(s8 *)(((func_8022C5CC_S2 *)(record))->unk5D8 + 0x8F) = 0;
            func_802266E4(record);
            record = ((func_8022C5CC_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}
