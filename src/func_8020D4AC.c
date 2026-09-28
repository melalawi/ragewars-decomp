#include "basetypes.h"

/* Records the next stage of a selection: finds the kind-6 link from the selection's node in the route D_8013B364 (stopping at the stage number at 0x1BC), stores its two node ids in that stage's entry, measures the distance from the selection's own node through func_8020C994 and func_8027272C, multiplies the unit directions from each attached object to the stage's node (func_802720EC) into a facing term, and stores the distance scaled by that term (made positive for a single object) before advancing the stage count. Returns zero. */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    u16 from;
    u16 to;
    u8 kind;
} Link;

typedef struct {
    s32 to;
    s32 from;
    f32 distance;
} Stage;

typedef struct {
    char pad0[8];
    Vec3 pos;
} Object;

typedef struct {
    char pad0[0xC];
    s32 node;
    char pad10[0x28];
    s32 objectCount;
    Object *objects[33];
    Stage stages[10];
    Vec3 dirs[10];
    char pad1B0[0xC];
    s32 stageCount;
    s32 id;
} Selection;

typedef struct {
    char pad0[0xC];
    s32 linkCount;
} Route;

extern Route D_8013B364;

extern Link *func_8020C9B0(Route *, s32);
extern Vec3 *func_8020C994(Route *, s32);
extern f32 func_8027272C(Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);

s32 func_8020D4AC(Selection *sel) {
    Vec3 facing;
    Vec3 *node;
    s32 i;
    s32 stage;
    Link *link;
    f32 distance;
    f32 term;
    Route *route;

    node = 0;
    i = 0;
    stage = 0;
    route = &D_8013B364;
    for (; i < route->linkCount; i++) {
        link = func_8020C9B0(route, i);
        if (link->from == sel->id && link->kind == 6) {
            node = func_8020C994(route, link->to);
            sel->stages[stage].from = link->from;
            sel->stages[stage].to = link->to;
            if (stage + 1 == sel->stageCount) {
                break;
            }
            stage++;
        }
    }
    distance = func_8027272C(node, func_8020C994(route, sel->node));
    facing.x = facing.y = facing.z = 1.0f;
    for (i = 0; i < sel->objectCount; i++) {
        if (sel->objects[i] == 0) {
            break;
        }
        sel->dirs[stage].x = node->x - sel->objects[i]->pos.x;
        sel->dirs[stage].y = node->y - sel->objects[i]->pos.y;
        sel->dirs[stage].z = node->z - sel->objects[i]->pos.z;
        func_802720EC(&sel->dirs[stage]);
        facing.x *= sel->dirs[stage].x;
        facing.y *= sel->dirs[stage].y;
        facing.z *= sel->dirs[stage].z;
    }
    term = facing.x + facing.y + facing.z;
    if (sel->objectCount == 1 && term < 0.0f) {
        term = -term;
    }
    sel->stages[stage].distance = term * distance;
    sel->stageCount++;
    return 0;
}
