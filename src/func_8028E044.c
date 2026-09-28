#include "basetypes.h"

void func_8028E044(void *arg0) {
    s32 found;
    s32 clear_index;
    char *record;
    char *clear_ptr;
    char *out;
    s32 wanted_type;

    found = 0;
    clear_index = 15;
    record = *(char **)((char *)arg0 + 0x138);
    clear_ptr = (char *)arg0 + 0x3C;
    *(s32 *)((char *)arg0 + 0x1B6A4) = 0;
    do {
        *(char **)(clear_ptr + 0x1B664) = 0;
        clear_index--;
        clear_ptr -= 4;
    } while (clear_index >= 0);

    if (*(s32 *)((char *)arg0 + 0x140) > 0) {
        clear_index = 0;
        wanted_type = 14;
        out = (char *)((found * 4) + (s32)arg0);
        do {
            if (**(s32 **)(record + 0x18) == wanted_type) {
                *(char **)(out + 0x1B664) = record;
                out += 4;
                found++;
            }
            if (found >= 16) {
                break;
            }
            clear_index++;
            if (clear_index >= *(s32 *)((char *)arg0 + 0x140)) {
                break;
            }
            record += 0x2E8;
        } while (1);
    }
    *(s32 *)((char *)arg0 + 0x1B6A4) = found;
}
