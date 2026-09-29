#include "basetypes.h"

typedef struct { f32 x, y, z; } Vec3;
typedef struct { u8 bytes[0x60]; } Bounds;
typedef struct { u8 pad0[0x18]; u8 *entries; } Owner;
typedef struct {
    s32 word0, word4, word8, wordC, word10;
    u8 pad14[0x40];
    void *input;
    s32 index;
    u8 pad5C[0x80];
} Query;
typedef struct {
    u8 pad00[0x3C];
    s32 flags;
    u8 pad40[0x1C];
    f32 move_x;
    f32 move_y;
    f32 move_z;
    u8 pad68[0x48];
    Query saved_query;
} Actor;
typedef struct {
    u8 kind;
    u8 pad01[7];
    f32 x;
    f32 y;
    f32 z;
    u8 pad14[0xC];
    f32 floor;
    u8 pad24[0x10];
    Owner *owner;
    s32 flags38;
    u8 pad3C[0xC4];
    s32 flags100;
} Input;

extern f32 func_8024D388(Input *);
extern f32 func_8024E454(Input *);
extern f32 func_8024D274(Input *);
extern f32 func_8024E410(Input *);
extern void func_80240D10(Query *, Bounds *);
extern void func_80240DF0(Query *, Bounds *);
extern s32 func_8023EA34(Actor *, Query *, void *, f32, s32);
extern f32 func_80241718(Query *, f32, f32);
extern s32 func_8024490C(Input *, Vec3, Vec3, void *, f32, f32, f32, f32);
extern s32 func_8023E168(Actor *, void *, f32, s32, f32, s32, Query *, s32);
extern void func_80271FA4(Vec3 *, Vec3 *, Vec3 *);
extern void *D_80103FCC;
extern char D_801040F0;
extern f32 D_800C8848[];

typedef struct func_80241F14_S1 func_80241F14_S1;
typedef struct func_80241F14_S2 func_80241F14_S2;
typedef struct func_80241F14_S3 func_80241F14_S3;
typedef struct func_80241F14_S4 func_80241F14_S4;
struct func_80241F14_S1 {
    char pad0[0x8];
    char unk8;
};
struct func_80241F14_S2 {
    char pad0[0x8];
    f32 unk8;
};
struct func_80241F14_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x34 - 0x4 - sizeof(s32)];
    f32 unk34;
};
struct func_80241F14_S4 {
    char pad0[0x1C];
    Vec3 unk1C;
};

void func_80241F14(Actor *actor, Owner *owner, Bounds *bounds, Query *query, Input *input) {
    u8 collision[0x108];
    Vec3 next;
    f32 hit_y;
    f32 extent0;
    f32 extent1;
    f32 extent2;
    f32 extent3;
    f32 height;
    void *saved_collision;
    void *entry;
    void *owner_data;

    owner_data = &((func_80241F14_S1 *)(owner))->unk8;
    entry = owner->entries + 0x14;
    height = ((func_80241F14_S2 *)(entry))->unk8 + func_8024D388(input);
    if (actor->move_y > 0.0f) {
        query->word0 = 3;
        func_80240D10(query, bounds);
        if (func_8023EA34(actor, query, owner_data, height, 0)) {
            saved_collision = D_80103FCC;
            D_80103FCC = collision;
            hit_y = func_80241718(query, input->x, input->z);
            input->owner = owner;
            extent0 = func_8024E454(input);
            extent1 = func_8024D388(input);
            extent2 = func_8024D274(input);
            extent3 = func_8024E410(input);
            next.x = input->x;
            next.y = hit_y + D_800C8848[1];
            next.z = input->z;
            if (func_8024490C(input, *(Vec3 *)&input->x, next, &D_801040F0,
                              extent0, extent1, extent2, extent3)) {
                actor->saved_query = *query;
                actor->flags |= 8;
                input->flags38 |= 0x10;
            } else {
                input->y = next.y;
                if (input->floor < 0.0f) input->floor = 0.0f;
                {
                    s32 flags = actor->flags;
                    actor->flags = flags | 0x20;
                    if (input->kind == 1 && (input->flags100 & 0x300000))
                        actor->flags = flags | 0x60;
                }
                input->flags38 = (input->flags38 & ~3) | 2;
            }
            D_80103FCC = saved_collision;
        }
    }
    if (actor->move_y < 0.0f) {
        query->word0 = 2;
        func_80240DF0(query, bounds);
        if (func_8023EA34(actor, query, owner_data, height, 1)) {
            actor->flags |= 8;
            input->flags38 |= 0x10;
        }
    }
    if (actor->move_x != 0.0f || actor->move_z != 0.0f) {
        query->word0 = 3;
        if (func_8023E168(actor, owner_data, height,
                          ((func_80241F14_S3 *)(bounds))->unk4, ((func_80241F14_S3 *)(bounds))->unk34,
                          1, query, 1)) {
            actor->flags |= 8;
            func_80271FA4(&((func_80241F14_S4 *)(input))->unk1C,
                          &((func_80241F14_S4 *)(input))->unk1C,
                          (Vec3 *)&actor->move_x);
        }
    }
}
