#include "basetypes.h"

extern void func_80285D00(s32 *);

void func_8022A870(void *object) {
    char *record = *(char **)((char *)object + 0x20);
    if (record != 0) {
        do {
            func_80285D00(*(char **)(record + 0x698) + 0x140);
            *(s32 *)(*(char **)(record + 0x698) + 0xD0) = 0;
            record = *(char **)(record + 0x16E0);
        } while (record != 0);
    }
}
