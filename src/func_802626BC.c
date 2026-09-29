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

typedef struct func_802626BC_S1 func_802626BC_S1;
typedef union func_802626BC_S1_U10 { s32 v0; void* v1; } func_802626BC_S1_U10;
struct func_802626BC_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8 - 0x4 - sizeof(u16)];
    u16 unk8;
    char pad8[0xC - 0x8 - sizeof(u16)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    func_802626BC_S1_U10 unk10;
};

s32 func_802626BC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *out = arg0;
    void *resource;
    ResourceEntry *entry;
    u16 value;
    s32 key;
    s32 sp28;

    if (arg3 == -1) {
        ((func_802626BC_S1 *)(out))->unk10.v0 = 0;
        return 0;
    }

    key = func_8028FE1C(arg1, arg2, arg3, &sp28);
    resource = func_802518DC(0, key, key, sp28, 4, arg0,
                            &D_25F58C, D_800C92A0, 0);
    ((func_802626BC_S1 *)(out))->unk10.v1 = resource;
    if (!func_802624F8(arg0)) {
        return 0;
    }

    resource = func_802604BC(arg0);
    entry = func_8028FD94(resource, 0);
    value = entry->unk6;
    ((func_802626BC_S1 *)(out))->unk4 = arg3;
    ((func_802626BC_S1 *)(out))->unk8 = value;
    resource = func_8028FD94(resource, 3);
    ((func_802626BC_S1 *)(out))->unkC = func_8028FD94(resource, 0)->unk2;
    return 1;
}
