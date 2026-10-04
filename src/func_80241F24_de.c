#include "common/types.h"
#include "span_1000/code_802406DC.h"
#include "span_1000/types.h"
#include "types.h"








extern f32 func_8024D398_de(Input_func_80241BAC_de *);
extern f32 func_8024E464_de(Input_func_80241BAC_de *);
extern f32 func_8024D284_de(Input_func_80241BAC_de *);
extern f32 func_8024E420_de(Input_func_80241BAC_de *);
extern void func_80240D20_de(Query_func_80241BAC_de *, Bounds *);
extern void func_80240E00_de(Query_func_80241BAC_de *, Bounds *);
extern s32 func_8023EA44_de(Actor_func_80241BAC_de *, Query_func_80241BAC_de *, void *, f32, s32);
extern f32 func_80241728_de(Query_func_80241BAC_de *, f32, f32);
extern s32 func_8024491C_de(Input_func_80241BAC_de *, Vec3, Vec3, void *, f32, f32, f32, f32);
extern s32 func_8023E178_de(Actor_func_80241BAC_de *, void *, f32, s32, f32, s32, Query_func_80241BAC_de *, s32);
extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);
extern void *D_800FFFCC;
extern char D_801000F0;
extern f32 D_800C3758_de[];










void func_80241F24_de(Actor_func_80241BAC_de *actor, Owner_func_80241BAC_de *owner, Bounds *bounds, Query_func_80241BAC_de *query, Input_func_80241BAC_de *input) {
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

    owner_data = &((func_8020CC0C_S1 *)(owner))->unk8;
    entry = owner->entries + 0x14;
    height = ((func_80212828_S7 *)(entry))->unk8 + func_8024D398_de(input);
    if (actor->move_y > 0.0f) {
        query->word0 = 3;
        func_80240D20_de(query, bounds);
        if (func_8023EA44_de(actor, query, owner_data, height, 0)) {
            saved_collision = D_800FFFCC;
            D_800FFFCC = collision;
            hit_y = func_80241728_de(query, input->x, input->z);
            input->owner = owner;
            extent0 = func_8024E464_de(input);
            extent1 = func_8024D398_de(input);
            extent2 = func_8024D284_de(input);
            extent3 = func_8024E420_de(input);
            next.x = input->x;
            next.y = hit_y + D_800C3758_de[1];
            next.z = input->z;
            if (func_8024491C_de(input, *(Vec3 *)&input->x, next, &D_801000F0,
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
            D_800FFFCC = saved_collision;
        }
    }
    if (actor->move_y < 0.0f) {
        query->word0 = 2;
        func_80240E00_de(query, bounds);
        if (func_8023EA44_de(actor, query, owner_data, height, 1)) {
            actor->flags |= 8;
            input->flags38 |= 0x10;
        }
    }
    if (actor->move_x != 0.0f || actor->move_z != 0.0f) {
        query->word0 = 3;
        if (func_8023E178_de(actor, owner_data, height,
                          ((func_80241F14_S3 *)(bounds))->unk4, ((func_80241F14_S3 *)(bounds))->unk34,
                          1, query, 1)) {
            actor->flags |= 8;
            func_80271F34_de(&((func_8022CA04_S4 *)(input))->unk1C,
                          &((func_8022CA04_S4 *)(input))->unk1C,
                          (Vec3 *)&actor->move_x);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C368C_4 = 0.40959999f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C884C_4 = 0.40959999f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A0C_4 = 0.40959999f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A4C_4 = 0.40959999f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C375C_4 = 0.40959999f;
#endif
