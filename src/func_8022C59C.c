#include "basetypes.h"

void func_8022C59C(char *object) {
    char *record = *(char **)(object + 0x20);
    while (record != 0) {
        char *nested = *(char **)(record + 0x5D8);
        if (*(u8 *)(nested + 0x90) == 1) {
            *(u8 *)(nested + 0x90) = 0;
        }
        record = *(char **)(record + 0x16E0);
    }
}
