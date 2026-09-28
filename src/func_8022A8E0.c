#include "basetypes.h"

s32 func_8022A8E0(void *arg0) {
    char *record = *(char **)((char *)arg0 + 0x20);
    s32 count = 0;
    if (record != 0) {
        do {
            if (*(s16 *)(record + 0x5FE) != 0 && *(s32 *)(record + 0x1450) == 0) {
                count += 1;
            }
            record = *(char **)(record + 0x16E0);
        } while (record != 0);
    }
    return count;
}
