#include "basetypes.h"

void *func_8022A5B0(char *object, s32 arg1) {
    char *record = *(char **)(object + 0x20);
    if (record != 0) {
        do {
            if (*(s32 *)(record + 0x698) == arg1) {
                return record;
            }
            record = *(char **)(record + 0x16E0);
        } while (record != 0);
    }
    return 0;
}
