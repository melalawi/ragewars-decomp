#include "basetypes.h"

extern void func_80285D00(s32 *);

typedef struct func_8022A870_S1 func_8022A870_S1;
typedef struct func_8022A870_S2 func_8022A870_S2;
struct func_8022A870_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A870_S2 {
    char pad0[0x698];
    char* unk698;
    char pad698[0x16E0 - 0x698 - sizeof(char*)];
    char* unk16E0;
};

void func_8022A870(void *object) {
    char *record = ((func_8022A870_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            func_80285D00(((func_8022A870_S2 *)(record))->unk698 + 0x140);
            *(s32 *)(((func_8022A870_S2 *)(record))->unk698 + 0xD0) = 0;
            record = ((func_8022A870_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}
