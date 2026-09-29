#include "basetypes.h"

typedef struct { char pad[0x4]; s32 field; } Access_s32_4;
typedef struct { char pad[0xC4]; s32 field; } Access_s32_C4;
typedef struct { char pad[0xD0]; s32 field; } Access_s32_D0;
typedef struct { char pad[0xE6]; s8 field; } Access_s8_E6;
typedef struct { char pad[0x100]; s32 field; } Access_s32_100;

extern s32 D_800C8954[];

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *, s32);
extern s32 func_80265508(void *, s32, s32);
extern void func_802798CC(s16 *);
extern s32 func_802798D4(s16 *, s16, s16);
extern s16 func_80279918(s16 *);
extern void func_802536F4(s32, void *);

typedef struct func_802469F8_S1 func_802469F8_S1;
struct func_802469F8_S1 {
    char pad0[0x8];
    s32 unk8;
};


s32 func_802469F8(void *arg0, s32 arg1, s32 arg2) {
    s16 table[52];
    void **resource;
    s32 *entries;
    void *data;
    s32 count;
    s32 total;
    s32 original;

    if (!(((Access_s32_100 *)(arg0))->field & 0x40000)) {
        goto fail;
    }
    resource = func_802518DC(0, ((Access_s32_C4 *)(arg0))->field,
                             ((Access_s32_C4 *)(arg0))->field, ((Access_s32_D0 *)(arg0))->field,
                             0, 0, 0, D_800C8954, 1);
    if (resource == 0) {
        goto fail;
    }
    data = func_8028FD94(*resource, 1);
    entries = &((func_802469F8_S1 *)(data))->unk8;
    total = ((Access_s32_4 *)(data))->field;
    count = func_80265508(entries, ((Access_s8_E6 *)(arg0))->field, arg1);
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
