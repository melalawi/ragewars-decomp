#include "basetypes.h"

extern char D_801468A0[];

typedef struct func_8022A410_S1 func_8022A410_S1;
typedef struct func_8022A410_S2 func_8022A410_S2;
typedef struct func_8022A410_S3 func_8022A410_S3;
struct func_8022A410_S1 {
    char pad0[0x54];
    int unk54;
    char pad54[0x68 - 0x54 - sizeof(int)];
    int unk68;
};
struct func_8022A410_S2 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A410_S3 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    void* unk16E0;
};

void *func_8022A410(void *arg0) {
    char *base = D_801468A0;
    void *record;

    if (((func_8022A410_S1 *)(base))->unk54 != 0 && ((func_8022A410_S1 *)(base))->unk68 != 0) {
        return 0;
    }
    record = ((func_8022A410_S2 *)(arg0))->unk20;
    if (record != 0) {
        do {
            if (*(u8 *)(((func_8022A410_S3 *)(record))->unk5D8 + 0x8F) == 1) {
                return record;
            }
            record = ((func_8022A410_S3 *)(record))->unk16E0;
        } while (record != 0);
    }
    return 0;
}
