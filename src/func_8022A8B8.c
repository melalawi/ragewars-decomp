#include "basetypes.h"

void func_8022A8B8(char *object, f32 arg1) {
    char *record = *(char **)(object + 0x20);
    if (record != 0) {
        do {
            *(f32 *)(record + 0x670) = arg1;
            record = *(char **)(record + 0x16E0);
        } while (record != 0);
    }
}
