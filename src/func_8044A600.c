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

typedef struct func_8044A600_S1 func_8044A600_S1;
typedef struct func_8044A600_S2 func_8044A600_S2;
typedef struct func_8044A600_S3 func_8044A600_S3;
typedef struct func_8044A600_S4 func_8044A600_S4;
struct func_8044A600_S1 {
    char pad0[0x78];
    u8 unk78;
    char pad78[0x7F - 0x78 - sizeof(u8)];
    s8 unk7F;
    char pad7F[0x80 - 0x7F - sizeof(s8)];
    s8 unk80;
    char pad80[0x81 - 0x80 - sizeof(s8)];
    u8 unk81;
    char pad81[0x91 - 0x81 - sizeof(u8)];
    u8 unk91;
    char pad91[0x95 - 0x91 - sizeof(u8)];
    u8 unk95;
};
struct func_8044A600_S2 {
    char pad0[0x1D];
    u8 unk1D;
};
struct func_8044A600_S3 {
    char pad0[0x3];
    u8 unk3;
    char pad3[0x1D8 - 0x3 - sizeof(u8)];
    char* unk1D8;
    char pad1D8[0x5D0 - 0x1D8 - sizeof(char*)];
    s32 unk5D0;
    char pad5D0[0x5D4 - 0x5D0 - sizeof(s32)];
    s32 unk5D4;
    char pad5D4[0x5D8 - 0x5D4 - sizeof(s32)];
    char* unk5D8;
    char pad5D8[0x5EC - 0x5D8 - sizeof(char*)];
    s32 unk5EC;
    char pad5EC[0x5F0 - 0x5EC - sizeof(s32)];
    s32 unk5F0;
    char pad5F0[0x864 - 0x5F0 - sizeof(s32)];
    s32 unk864;
    char pad864[0x868 - 0x864 - sizeof(s32)];
    s32 unk868;
    char pad868[0x11BC - 0x868 - sizeof(s32)];
    s32 unk11BC;
    char pad11BC[0x11C0 - 0x11BC - sizeof(s32)];
    s32 unk11C0;
    char pad11C0[0x11CC - 0x11C0 - sizeof(s32)];
    s32 unk11CC;
    char pad11CC[0x11E8 - 0x11CC - sizeof(s32)];
    s32 unk11E8;
    char pad11E8[0x1218 - 0x11E8 - sizeof(s32)];
    s32 unk1218;
    char pad1218[0x121C - 0x1218 - sizeof(s32)];
    s32 unk121C;
    char pad121C[0x1220 - 0x121C - sizeof(s32)];
    s32 unk1220;
    char pad1220[0x122C - 0x1220 - sizeof(s32)];
    s32 unk122C;
    char pad122C[0x12C4 - 0x122C - sizeof(s32)];
    s32 unk12C4;
    char pad12C4[0x12C8 - 0x12C4 - sizeof(s32)];
    s32 unk12C8;
    char pad12C8[0x1334 - 0x12C8 - sizeof(s32)];
    s32 unk1334;
    char pad1334[0x1338 - 0x1334 - sizeof(s32)];
    s32 unk1338;
    char pad1338[0x13B4 - 0x1338 - sizeof(s32)];
    s32* unk13B4;
    char pad13B4[0x13C8 - 0x13B4 - sizeof(s32*)];
    s32 unk13C8;
    char pad13C8[0x1450 - 0x13C8 - sizeof(s32)];
    s32 unk1450;
    char pad1450[0x1454 - 0x1450 - sizeof(s32)];
    void* unk1454;
    char pad1454[0x16D4 - 0x1454 - sizeof(void*)];
    s32 unk16D4;
    char pad16D4[0x16D8 - 0x16D4 - sizeof(s32)];
    s16 unk16D8;
};
struct func_8044A600_S4 {
    char pad0[0x74];
    s32 unk74;
    char pad74[0x84 - 0x74 - sizeof(s32)];
    s32 unk84;
};

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
        if (((func_8044A600_S1 *)(entry))->unk95 != 0) {
            ((func_8044A600_S1 *)(entry))->unk78 = 0;
        }
    }

    entry = global + 0x3A;
    if (((func_8044A600_S2 *)(global))->unk1D != 0) {
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
            ((func_8044A600_S3 *)(object))->unk1450 = ((func_8044A600_S1 *)(entry))->unk91;
            ((func_8044A600_S3 *)(object))->unk5D0 = 0;
            if (((func_8044A600_S3 *)(object))->unk1450 != 0) {
                func_8026369C(object + 0x688, D_8010EEB8);
                ((func_8044A600_S3 *)(object))->unk5D4 = ((func_8044A600_S1 *)(entry))->unk7F;
            } else {
                func_8026369C(object + 0x688, D_8010F328 + attribute_offset);
                ((func_8044A600_S3 *)(object))->unk5D4 = i;
            }
            owner = ((func_8044A600_S3 *)(object))->unk1454;
            ((func_8044A600_S3 *)(object))->unk5D8 = entry;
            object_id = ((func_8044A600_S1 *)(entry))->unk81;
            ((func_8044A600_S3 *)(object))->unk11BC = 0;
            ((func_8044A600_S3 *)(object))->unk11C0 = 0;
            ((func_8044A600_S3 *)(object))->unk5EC = 0;
            ((func_8044A600_S3 *)(object))->unk5F0 = 0;
            ((func_8044A600_S3 *)(object))->unk864 = 0;
            ((func_8044A600_S3 *)(object))->unk868 = 0;
            ((func_8044A600_S3 *)(object))->unk1D8 = object;
            ((func_8044A600_S3 *)(object))->unk3 = object_id;
            func_802097E8(owner, object);
            ((func_8044A600_S3 *)(object))->unk13C8 = 0;
            ((func_8044A600_S3 *)(object))->unk121C = player_index;
            ((func_8044A600_S3 *)(object))->unk1220 = 0;
            ((func_8044A600_S3 *)(object))->unk122C = 0;
            ((func_8044A600_S3 *)(object))->unk11CC = 0;
            ((func_8044A600_S3 *)(object))->unk1218 = 0;
            for (j = 0; j < 8; j++) {
                *(s32 *)(object + 0x12CC + j * 4) = 0;
                *(s32 *)(object + 0x12F4 + j * 4) = 0;
            }
            ((func_8044A600_S3 *)(object))->unk1338 = -1;
            ((func_8044A600_S3 *)(object))->unk12C4 = 0;
            ((func_8044A600_S3 *)(object))->unk12C8 = 0;
            ((func_8044A600_S3 *)(object))->unk1334 = 0;
            ((func_8044A600_S3 *)(object))->unk13B4 = &D_800CE8C8;
            ((func_8044A600_S3 *)(object))->unk11E8 = 0;
            func_8021A78C(object);
            ((func_8044A600_S3 *)(object))->unk16D4 = 0;
            ((func_8044A600_S3 *)(object))->unk16D8 = 0;
            func_802A7F58((char *)object + 0xD40);
            if (((func_8044A600_S1 *)(entry))->unk78 != 0) {
                func_80449B44(object, ((func_8044A600_S1 *)(entry))->unk80, 1);
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
        roster_index = ((func_8044A600_S1 *)(entry))->unk7F;
        ((func_8044A600_S3 *)(object))->unk1450 = ((func_8044A600_S1 *)(entry))->unk91;
        ((func_8044A600_S3 *)(object))->unk5D0 = 0;
        if (((func_8044A600_S3 *)(object))->unk1450 != 0) {
            func_8026369C(object + 0x688, D_8010EEB8);
            ((func_8044A600_S3 *)(object))->unk5D4 = ((func_8044A600_S1 *)(entry))->unk7F;
        } else {
            func_8026369C(object + 0x688, D_8010F328 + roster_index * 0x224);
            ((func_8044A600_S3 *)(object))->unk5D4 = roster_index;
        }
        owner = ((func_8044A600_S3 *)(object))->unk1454;
        ((func_8044A600_S3 *)(object))->unk5D8 = entry;
        object_id = ((func_8044A600_S1 *)(entry))->unk81;
        ((func_8044A600_S3 *)(object))->unk11BC = 0;
        ((func_8044A600_S3 *)(object))->unk11C0 = 0;
        ((func_8044A600_S3 *)(object))->unk5EC = 0;
        ((func_8044A600_S3 *)(object))->unk5F0 = 0;
        ((func_8044A600_S3 *)(object))->unk864 = 0;
        ((func_8044A600_S3 *)(object))->unk868 = 0;
        ((func_8044A600_S3 *)(object))->unk1D8 = object;
        ((func_8044A600_S3 *)(object))->unk3 = object_id;
        func_802097E8(owner, object);
        ((func_8044A600_S3 *)(object))->unk13C8 = 0;
        ((func_8044A600_S3 *)(object))->unk121C = roster_index * 2;
        ((func_8044A600_S3 *)(object))->unk1220 = 0;
        ((func_8044A600_S3 *)(object))->unk122C = 0;
        ((func_8044A600_S3 *)(object))->unk11CC = 0;
        ((func_8044A600_S3 *)(object))->unk1218 = 0;
        for (j = 0; j < 8; j++) {
            *(s32 *)(object + 0x12CC + j * 4) = 0;
            *(s32 *)(object + 0x12F4 + j * 4) = 0;
        }
        ((func_8044A600_S3 *)(object))->unk1338 = -1;
        ((func_8044A600_S3 *)(object))->unk12C4 = 0;
        ((func_8044A600_S3 *)(object))->unk12C8 = 0;
        ((func_8044A600_S3 *)(object))->unk1334 = 0;
        ((func_8044A600_S3 *)(object))->unk13B4 = &D_800CE8C8;
        ((func_8044A600_S3 *)(object))->unk11E8 = 0;
        func_8021A78C(object);
        ((func_8044A600_S3 *)(object))->unk16D4 = 0;
        ((func_8044A600_S3 *)(object))->unk16D8 = 0;
        func_802A7F58((char *)object + 0xD40);
        func_80449B44(object, ((func_8044A600_S1 *)(entry))->unk80, force_active);
        func_80255E78(pool->active_queue, object);
        func_80255C58(pool->object_queue, object);
    }

initialized:
    state = D_801468A0;
    ((func_8044A600_S4 *)(state))->unk74 = 1;
    ((func_8044A600_S4 *)(state))->unk84 = 3;
}
