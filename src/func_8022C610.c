#include "basetypes.h"

typedef struct func_8022C610_S1 func_8022C610_S1;
typedef struct func_8022C610_S2 func_8022C610_S2;
typedef struct func_8022C610_S3 func_8022C610_S3;
struct func_8022C610_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022C610_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    char* unk16E0;
};
struct func_8022C610_S3 {
    char pad0[0x90];
    u8 unk90;
};

s32 func_8022C610(char *object) {
    char *record = ((func_8022C610_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        char *nested = ((func_8022C610_S2 *)(record))->unk5D8;
        if (((func_8022C610_S3 *)(nested))->unk90 == 0) {
            count += 1;
        }
        record = ((func_8022C610_S2 *)(record))->unk16E0;
    }
    return count;
}
