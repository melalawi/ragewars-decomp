#include "basetypes.h"

void *func_8020CFE0(char *object, s32 arg1) {
    char *record = *(char **) (object + 0x24);
    if (record != 0) {
        do {
            if (*(s32 *) (record + 0x0) == arg1) {
                return record;
            }
            record = *(char **) (record + 0x10);
        } while (record != 0);
    }
    return 0;
}
