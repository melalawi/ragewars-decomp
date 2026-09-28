#include "basetypes.h"

extern void func_802266E4(void *arg0);

void func_8022C5CC(void *object) {
    char *record = *(char **)((char *)object + 0x20);
    if (record != 0) {
        do {
            *(s8 *)(*(char **)(record + 0x5D8) + 0x8F) = 0;
            func_802266E4(record);
            record = *(char **)(record + 0x16E0);
        } while (record != 0);
    }
}
