#include "basetypes.h"

typedef struct ResourceEntry {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} ResourceEntry;

extern s32 func_8028FE1C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_802624F8(void *arg0);
extern void *func_802604BC(void *arg0);
extern ResourceEntry *func_8028FD94(void *arg0, s32 arg1);

extern char D_25F58C;
extern ResourceEntry D_800C92A0[];

s32 func_802626BC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *out = arg0;
    void *resource;
    ResourceEntry *entry;
    u16 value;
    s32 key;
    s32 sp28;

    if (arg3 == -1) {
        *(s32 *)(out + 0x10) = 0;
        return 0;
    }

    key = func_8028FE1C(arg1, arg2, arg3, &sp28);
    resource = func_802518DC(0, key, key, sp28, 4, arg0,
                            &D_25F58C, D_800C92A0, 0);
    *(void **)(out + 0x10) = resource;
    if (!func_802624F8(arg0)) {
        return 0;
    }

    resource = func_802604BC(arg0);
    entry = func_8028FD94(resource, 0);
    value = entry->unk6;
    *(u16 *)(out + 4) = arg3;
    *(u16 *)(out + 8) = value;
    resource = func_8028FD94(resource, 3);
    *(s32 *)(out + 0xC) = func_8028FD94(resource, 0)->unk2;
    return 1;
}
