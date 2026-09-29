#include "basetypes.h"

typedef struct {
    u8 pad0[4];
    u16 kind;
    u8 pad6[2];
    f32 value;
} Entry;

typedef struct { u8 pad[0x14]; Entry entry; } EntryBlock;

typedef struct {
    u8 pad0[0x18];
    u8 *entries;
} Owner;

typedef struct {
    Owner *owner;
    u8 pad04[8];
    f32 fieldC;
    u8 pad10[0x30];
    void *field40;
    u8 pad44[0x18];
    f32 field5C;
    f32 field60;
    f32 field64;
} Actor;

typedef struct {
    s32 word0;
    s32 word4;
    s32 word8;
    s32 wordC;
    s32 word10;
    u8 pad14[0x40];
    Owner *owner;
    s32 index;
    u8 pad5C[0x84];
} Query;

typedef struct {
    u8 bytes[0x60];
} Bounds;

extern char D_80104338;

extern void func_80241940(Owner *, Bounds *, Actor *, Owner *);
extern s32 func_8023E168(Actor *, void *, f32, s32, f32, s32, s32 *, s32);
extern s32 func_8023EA34(Actor *, s32 *, void *, f32, s32);
extern s32 func_8023E8C4(Actor *, s32 *, s32);
extern void func_80240D10(s32 *, Bounds *);
extern void func_80240DF0(s32 *, Bounds *);
extern void func_80240ED0(s32 *, Bounds *);
extern void func_80240FB0(s32 *, Bounds *);
extern void func_80241090(s32 *, Bounds *);
extern void func_80241170(s32 *, Bounds *);

typedef struct func_80242278_S1 func_80242278_S1;
typedef struct func_80242278_S2 func_80242278_S2;
typedef struct func_80242278_S3 func_80242278_S3;
struct func_80242278_S1 {
    char pad0[0x4];
    s8 unk4;
};
struct func_80242278_S2 {
    char pad0[0x8];
    u8 unk8;
};
struct func_80242278_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x34 - 0x4 - sizeof(s32)];
    f32 unk34;
};

void func_80242278(Actor *actor, Owner *owner) {
    Query query;
    Bounds bounds;
    Entry *entry;

    entry = &((EntryBlock *)owner->entries)->entry;
    if ((actor->field40 != &D_80104338) && (((func_80242278_S1 *)(actor->field40))->unk4 != 0)) {
        f32 value;
        s32 *word;
        void *owner_data;

        func_80241940(owner, &bounds, actor, actor->owner);
        query.word4 = 0;
        query.word8 = 2;
        query.wordC = 0;
        query.word10 = 0;
        query.owner = owner;
        query.index = -1;
        switch (entry->kind) {
        case 1:
            word = &query.word0;
            owner_data = &((func_80242278_S2 *)(owner))->unk8;
            value = ((EntryBlock *)owner->entries)->entry.value + actor->fieldC;
            if ((actor->field5C != *(f32 *)&query.word4) ||
                (actor->field64 != *(f32 *)&query.word4)) {
                *word = 3;
                func_8023E168(actor, owner_data, value, ((func_80242278_S3 *)(&bounds))->unk4,
                              ((func_80242278_S3 *)(&bounds))->unk34, 1, word, 1);
            }
            if (actor->field60 > 0.0f) {
                *word = 2;
                func_80240DF0(word, &bounds);
                func_8023EA34(actor, word, owner_data, value, 1);
            }
            if (actor->field60 < 0.0f) {
                *word = 9;
                func_80240D10(word, &bounds);
                func_8023EA34(actor, word, owner_data, value, 1);
                return;
            }
            break;
        case 2:
        {
            f32 movement;
            f32 zero;

            word = &query.word0;
            movement = actor->field60;
            zero = *(f32 *)&query.word4;
            if (zero < movement) {
                *word = 2;
                func_80240DF0(word, &bounds);
                func_8023E8C4(actor, word, 1);
            }
            if ((actor->field5C != zero) || (actor->field64 != zero)) {
                *word = 3;
                func_80240ED0(word, &bounds);
                func_8023E8C4(actor, word, 1);
                func_80240FB0(word, &bounds);
                func_8023E8C4(actor, word, 1);
                func_80241090(word, &bounds);
                func_8023E8C4(actor, word, 1);
                func_80241170(word, &bounds);
                func_8023E8C4(actor, word, 1);
            }
            if (actor->field60 < 0.0f) {
                *word = 9;
                func_80240D10(word, &bounds);
                func_8023E8C4(actor, word, 1);
            }
            break;
        }
        }
    }
}
