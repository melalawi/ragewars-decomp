#include "basetypes.h"

extern s32 D_800C8954[];

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *, s32);
extern s32 func_80265508(void *, s32, s32);
extern void func_802798CC(s16 *);
extern s32 func_802798D4(s16 *, s16, s16);
extern s16 func_80279918(s16 *);
extern void func_802536F4(s32, void *);

#define AT(t, p, o) (*(t *)((char *)(p) + (o)))

s32 func_802469F8(void *arg0, s32 arg1, s32 arg2) {
    s16 table[52];
    void **resource;
    s32 *entries;
    void *data;
    s32 count;
    s32 total;
    s32 original;

    if (!(AT(s32, arg0, 0x100) & 0x40000)) {
        goto fail;
    }
    resource = func_802518DC(0, AT(s32, arg0, 0xC4),
                             AT(s32, arg0, 0xC4), AT(s32, arg0, 0xD0),
                             0, 0, 0, D_800C8954, 1);
    if (resource == 0) {
        goto fail;
    }
    data = func_8028FD94(*resource, 1);
    entries = (s32 *)((char *)data + 8);
    total = AT(s32, data, 4);
    count = func_80265508(entries, AT(s8, arg0, 0xE6), arg1);
    if (count != -1) {
        original = count;
        while (count > 0) {
            if (entries[count - 1] != arg1) {
                break;
            }
            count--;
        }

        func_802798CC(table);
        if (arg2 == -1) {
            while (count < total && entries[count] == arg1) {
                func_802798D4(table, count++, 10);
            }
        } else {
            while (count < total && entries[count] == arg1) {
                if (arg2 != count) {
                    func_802798D4(table, count, 10);
                }
                count++;
            }
        }
        if (table[0] == 0) {
            func_802798D4(table, original, 10);
        }
        count = func_80279918(table);
    }
    func_802536F4(0, resource);
    return count;

fail:
    return -1;
}
