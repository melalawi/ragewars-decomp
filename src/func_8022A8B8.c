#include "basetypes.h"

typedef struct func_8022A8B8_S1 func_8022A8B8_S1;
typedef struct func_8022A8B8_S2 func_8022A8B8_S2;
struct func_8022A8B8_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A8B8_S2 {
    char pad0[0x670];
    f32 unk670;
    char pad670[0x16E0 - 0x670 - sizeof(f32)];
    char* unk16E0;
};

void func_8022A8B8(char *object, f32 arg1) {
    char *record = ((func_8022A8B8_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            ((func_8022A8B8_S2 *)(record))->unk670 = arg1;
            record = ((func_8022A8B8_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}
