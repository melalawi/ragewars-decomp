#include "basetypes.h"

s32 func_8022C640(char *object) {
    char *record = *(char **)(object + 0x20);
    s32 count = 0;
    while (record != 0) {
        if (*(s32 *)(record + 0x5D0) != 0) {
            count += 1;
        }
        record = *(char **)(record + 0x16E0);
    }
    return count;
}
