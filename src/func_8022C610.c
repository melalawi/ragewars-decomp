#include "basetypes.h"

s32 func_8022C610(char *object) {
    char *record = *(char **)(object + 0x20);
    s32 count = 0;
    while (record != 0) {
        char *nested = *(char **)(record + 0x5D8);
        if (*(u8 *)(nested + 0x90) == 0) {
            count += 1;
        }
        record = *(char **)(record + 0x16E0);
    }
    return count;
}
