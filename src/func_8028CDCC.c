#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);

void func_8028CDCC(void *arg0) {
    s32 count;
    s32 i;
    s32 offset;
    void *entry;
    s32 field;
    s32 three;

    count = *(s32 *)((char *)arg0 + 0x140);
    i = 0;
    if (count > 0) {
        three = 3;
        offset = 0;
        do {
            entry = (char *)(*(s32 *)((char *)arg0 + 0x138)) + offset;
            field = *(*(s32 **)((char *)entry + 0x18));
            if (field != three) {
                i += 1;
            } else {
                func_80285D80(arg0, entry, 0);
                i += 1;
            }
            offset += 0x2E8;
        } while (i < count);
    }
}
