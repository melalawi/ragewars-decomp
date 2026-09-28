#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

typedef struct {
    u8 pad0[4];
    u16 kind;
} Entry;

typedef struct {
    u8 pad0[0x18];
    u8 *entries;
} Owner;

typedef struct {
    u8 pad0[8];
    Vec3 position;
} Input;

typedef struct {
    Owner *owner;
    u8 pad04[0x3C];
    s32 *flags;
    Vec3 previous;
    Vec3 position;
    Vec3 delta;
} Actor;

typedef struct {
    s32 word0;
    s32 word4;
    s32 word8;
    s32 wordC;
    s32 word10;
    u8 pad14[0x40];
    void *input;
    s32 index;
    u8 pad5C[0x80];
} Query;

typedef struct {
    u8 bytes[0x60];
} Bounds;

extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_80241940(Owner *, Bounds *, Actor *, Input *);
extern void func_80241B9C(Actor *, Owner *, Bounds *, Query *, Input *);
extern void func_80241F14(Actor *, Owner *, Bounds *, Query *, Input *);

void func_80242540(Actor *actor, Input *input) {
    Vec3 saved_previous;
    Vec3 saved_position;
    Query query;
    Bounds bounds;
    Owner *owner;
    Entry *entry;

    owner = actor->owner;
    entry = (Entry *)(owner->entries + 0x14);
    if (*actor->flags & 0x40000) {
        saved_previous = actor->previous;
        saved_position = actor->position;
        actor->previous = input->position;
        func_80271FD8(&actor->position, &input->position, &actor->delta);
        query.word4 = 0;
        query.word8 = 1;
        query.wordC = 0;
        query.word10 = 0;
        query.input = input;
        query.index = -1;
        func_80241940(owner, &bounds, actor, input);
        switch (entry->kind) {
        case 1:
            func_80241F14(actor, owner, &bounds, &query, input);
            break;
        case 2:
            func_80241B9C(actor, owner, &bounds, &query, input);
            break;
        }
        actor->previous = saved_previous;
        actor->position = saved_position;
    }
}
