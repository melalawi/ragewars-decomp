#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2) {
    void *descriptor;
    s32 count;
    s32 i;
    void *entry;

    descriptor = *(void **)((char *)arg0 + 0x78);
    count = *(s32 *)descriptor;
    for (i = 0; i < count; i++) {
        entry = func_8028FD94(*(void **)((char *)arg0 + 0x78), i);
        if (arg1 != -1 && *(s32 *)entry != arg1) {
            continue;
        }
        if (arg2 == -1) {
            return entry;
        }
        if (*(s16 *)((char *)entry + 0xC) != arg2) {
            continue;
        }
        return entry;
    }
    return 0;
}
