#include "basetypes.h"

extern void *func_8028FD94(void *, s32);

typedef struct {
    s32 unk0;
    s32 count;
    s32 ids[1];
} IdList;

typedef struct {
    u8 pad0[0x80];
    void *resource;
    u8 pad84[0x2C];
    IdList *list;
} Object;

/* Finds an identifier in the object's list and returns its mapped byte from the resource record, or -1 when absent. */
s32 func_8028BC98(Object *arg0, s32 arg1) {
    s32 i;
    void *record;
    IdList *list = arg0->list;
    s32 count = list->count;
    s32 *ids = list->ids;

    for (i = 0; i < count; i++) {
        if (ids[i] == arg1) {
            record = func_8028FD94(arg0->resource, 1);
            func_8028FD94(record, 0);
            return ((u8 *)func_8028FD94(record, 1))[i];
        }
    }
    return -1;
}
