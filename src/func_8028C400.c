#include "basetypes.h"

s32 func_8028C400(char *object, s32 type) {
    s32 index;
    char *record;

    index = *(s32 *)(object + 0x11C0);
    record = *(char **)(object + 0x11D0);
    index--;
    if (index != -1) {
        record += 0xE;
        do {
            if (*(u8 *)(record + 1) == type &&
                (*(u8 *)record & 0x40) == 0) {
                return 0;
            }
            index--;
            record += 0x14;
        } while (index != -1);
    }

    index = *(s32 *)(object + 0x11C4);
    record = *(char **)(object + 0x11D4);
    index--;
    if (index != -1) {
        do {
            if (*(u8 *)(record + 0xF) == type &&
                (*(u8 *)(record + 0xE) & 0x40) == 0) {
                return 0;
            }
            index--;
            record += 0x14;
        } while (index != -1);
    }

    return 1;
}
