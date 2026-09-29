#include "basetypes.h"

typedef struct func_8022C640_S1 func_8022C640_S1;
typedef struct func_8022C640_S2 func_8022C640_S2;
struct func_8022C640_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022C640_S2 {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x16E0 - 0x5D0 - sizeof(s32)];
    char* unk16E0;
};

s32 func_8022C640(char *object) {
    char *record = ((func_8022C640_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        if (((func_8022C640_S2 *)(record))->unk5D0 != 0) {
            count += 1;
        }
        record = ((func_8022C640_S2 *)(record))->unk16E0;
    }
    return count;
}
