#include "basetypes.h"

extern char D_801468A0[];

void *func_8022A410(void *arg0) {
    char *base = D_801468A0;
    void *record;

    if (*(int *)(base + 0x54) != 0 && *(int *)(base + 0x68) != 0) {
        return 0;
    }
    record = *(void **)((char *)arg0 + 0x20);
    if (record != 0) {
        do {
            if (*(u8 *)(*(char **)((char *)record + 0x5D8) + 0x8F) == 1) {
                return record;
            }
            record = *(void **)((char *)record + 0x16E0);
        } while (record != 0);
    }
    return 0;
}
