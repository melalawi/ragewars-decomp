#include "basetypes.h"

typedef struct ObjectPool {
    void *allocation;
    char *objects;
    s32 count;
    s32 active_queue[5];
    s32 object_queue[5];
} ObjectPool;

extern char D_8010EEB8[];
extern char D_8010F328[];
extern char D_801462C8[];
extern char D_801468A0[];
extern s32 D_800CE8C8;

extern void func_80255C40(void *, s32, s32);
extern void func_80264874(s32);
extern void func_802538A8(s32);
extern void func_802537D8(s32, void *);
extern void func_8022692C(ObjectPool *, s32);
extern void func_80255CB4(void *, void *);
extern void func_8026369C(void *, void *);
extern void func_802097E8(void *, void *);
extern void func_8021A78C(void *);
extern void func_802A7F58(void *);
extern void func_80449B44(void *, s32, s32);
extern void func_80255E78(void *, void *);
extern void func_80255C58(void *, void *);

void func_8044A600(ObjectPool *pool, s32 count, s32 force_active) {
    s32 i;
    s32 j;
    s32 entry_offset;
    s32 attribute_offset;
    s32 player_index;
    s32 object_offset;
    s32 roster_index;
    u8 object_id;
    void *owner;
    char *object;
    char *entry;
    char *global;
    char *state;

    func_80255C40(pool->active_queue, 0x16DC, 0x16E0);
    func_80255C40(pool->object_queue, 0x16DC, 0x16E0);
    func_80264874(0);
    func_802538A8(0);
    global = D_801462C8;

    if (pool->allocation != 0) {
        func_802537D8(0, pool->allocation);
        pool->allocation = 0;
        pool->objects = 0;
        pool->count = 0;
    }

    if (count == 0) {
        return;
    }

    func_8022692C(pool, count);
    for (i = 0; i < pool->count; i++) {
        func_80255CB4(pool->active_queue, pool->objects + i * 0x16E8);
    }

    for (i = 0; i < pool->count; i++) {
        entry = global + 0xD0 + i * 0x96;
        if (*(u8 *)(entry + 0x95) != 0) {
            *(u8 *)(entry + 0x78) = 0;
        }
    }

    entry = global + 0x3A;
    if (*(u8 *)(global + 0x1D) != 0) {
        if (pool->count <= 0) {
            goto initialized;
        }
        i = 0;
        player_index = i;
        attribute_offset = i;
        entry_offset = 0xD0;
        object_offset = i;
initialize_object:
            entry = global + entry_offset;
            object = pool->objects + object_offset;
            *(s32 *)(object + 0x1450) = *(u8 *)(entry + 0x91);
            *(s32 *)(object + 0x5D0) = 0;
            if (*(s32 *)(object + 0x1450) != 0) {
                func_8026369C(object + 0x688, D_8010EEB8);
                *(s32 *)(object + 0x5D4) = *(s8 *)(entry + 0x7F);
            } else {
                func_8026369C(object + 0x688, D_8010F328 + attribute_offset);
                *(s32 *)(object + 0x5D4) = i;
            }
            owner = *(void **)(object + 0x1454);
            *(char **)(object + 0x5D8) = entry;
            object_id = *(u8 *)(entry + 0x81);
            *(s32 *)(object + 0x11BC) = 0;
            *(s32 *)(object + 0x11C0) = 0;
            *(s32 *)(object + 0x5EC) = 0;
            *(s32 *)(object + 0x5F0) = 0;
            *(s32 *)(object + 0x864) = 0;
            *(s32 *)(object + 0x868) = 0;
            *(char **)(object + 0x1D8) = object;
            *(u8 *)(object + 3) = object_id;
            func_802097E8(owner, object);
            *(s32 *)(object + 0x13C8) = 0;
            *(s32 *)(object + 0x121C) = player_index;
            *(s32 *)(object + 0x1220) = 0;
            *(s32 *)(object + 0x122C) = 0;
            *(s32 *)(object + 0x11CC) = 0;
            *(s32 *)(object + 0x1218) = 0;
            for (j = 0; j < 8; j++) {
                *(s32 *)(object + 0x12CC + j * 4) = 0;
                *(s32 *)(object + 0x12F4 + j * 4) = 0;
            }
            *(s32 *)(object + 0x1338) = -1;
            *(s32 *)(object + 0x12C4) = 0;
            *(s32 *)(object + 0x12C8) = 0;
            *(s32 *)(object + 0x1334) = 0;
            *(s32 **)(object + 0x13B4) = &D_800CE8C8;
            *(s32 *)(object + 0x11E8) = 0;
            func_8021A78C(object);
            *(s32 *)(object + 0x16D4) = 0;
            *(s16 *)(object + 0x16D8) = 0;
            func_802A7F58(object + 0xD40);
            if (*(u8 *)(entry + 0x78) != 0) {
                func_80449B44(object, *(s8 *)(entry + 0x80), 1);
                func_80255E78(pool->active_queue, object);
                func_80255C58(pool->object_queue, object);
            }
            player_index += 2;
            attribute_offset += 0x224;
            entry_offset += 0x96;
            object_offset += 0x16E8;
            if (++i < pool->count) {
                goto initialize_object;
            }
    } else {
        object = pool->objects;
        roster_index = *(s8 *)(entry + 0x7F);
        *(s32 *)(object + 0x1450) = *(u8 *)(entry + 0x91);
        *(s32 *)(object + 0x5D0) = 0;
        if (*(s32 *)(object + 0x1450) != 0) {
            func_8026369C(object + 0x688, D_8010EEB8);
            *(s32 *)(object + 0x5D4) = *(s8 *)(entry + 0x7F);
        } else {
            func_8026369C(object + 0x688, D_8010F328 + roster_index * 0x224);
            *(s32 *)(object + 0x5D4) = roster_index;
        }
        owner = *(void **)(object + 0x1454);
        *(char **)(object + 0x5D8) = entry;
        object_id = *(u8 *)(entry + 0x81);
        *(s32 *)(object + 0x11BC) = 0;
        *(s32 *)(object + 0x11C0) = 0;
        *(s32 *)(object + 0x5EC) = 0;
        *(s32 *)(object + 0x5F0) = 0;
        *(s32 *)(object + 0x864) = 0;
        *(s32 *)(object + 0x868) = 0;
        *(char **)(object + 0x1D8) = object;
        *(u8 *)(object + 3) = object_id;
        func_802097E8(owner, object);
        *(s32 *)(object + 0x13C8) = 0;
        *(s32 *)(object + 0x121C) = roster_index * 2;
        *(s32 *)(object + 0x1220) = 0;
        *(s32 *)(object + 0x122C) = 0;
        *(s32 *)(object + 0x11CC) = 0;
        *(s32 *)(object + 0x1218) = 0;
        for (j = 0; j < 8; j++) {
            *(s32 *)(object + 0x12CC + j * 4) = 0;
            *(s32 *)(object + 0x12F4 + j * 4) = 0;
        }
        *(s32 *)(object + 0x1338) = -1;
        *(s32 *)(object + 0x12C4) = 0;
        *(s32 *)(object + 0x12C8) = 0;
        *(s32 *)(object + 0x1334) = 0;
        *(s32 **)(object + 0x13B4) = &D_800CE8C8;
        *(s32 *)(object + 0x11E8) = 0;
        func_8021A78C(object);
        *(s32 *)(object + 0x16D4) = 0;
        *(s16 *)(object + 0x16D8) = 0;
        func_802A7F58(object + 0xD40);
        func_80449B44(object, *(s8 *)(entry + 0x80), force_active);
        func_80255E78(pool->active_queue, object);
        func_80255C58(pool->object_queue, object);
    }

initialized:
    state = D_801468A0;
    *(s32 *)(state + 0x74) = 1;
    *(s32 *)(state + 0x84) = 3;
}
