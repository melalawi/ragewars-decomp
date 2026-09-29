/* Runs a computer player's chase step toward the object at 0x68: without a target id at 0xBC it
   switches to mode 2 and without an object it only updates; farther than D_800C71D0[0] from its goal
   node it heads there through func_80208410, otherwise it takes mode 8 once arrived or copies the
   object's position to 0x2C; then, within D_800C71D0[1] of the object and not yet arrived, it marks
   arrival at 0x238 and plans a new route through func_8020B95C to pick the next goal node. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    u8 pad0[8];
    Vec3f pos;
} Thing;

typedef struct {
    Thing *self;
    s32 node;
    u8 pad8[4];
    s32 goal;
    u8 pad10[0x1C];
    Vec3f dest;
    u8 pad38[0x30];
    Thing *target;
    u8 pad6C[0x50];
    s32 targetId;
    u8 padC0[0x178];
    s32 arrived;
} Bot;

typedef struct {
    u8 pad0[0x1454];
    Bot *bot;
} Player;

typedef struct {
    u8 pad0[0x1D8];
    Player *player;
} Actor;

typedef struct {
    u8 pad0[4];
} NodeGraph;

extern NodeGraph D_8013B364;
extern f32 D_800C71D0[2];

extern void func_80209874(Bot *bot, s32 mode);
extern void func_80211020(Bot *bot);
extern f32 func_80209948(Bot *bot, s32 node);
extern void func_80208410(Bot *bot);
extern void func_80208EB0(Bot *bot);
extern f32 func_80272768(Vec3f *a, Vec3f *b);
extern s32 func_8020B95C(NodeGraph *graph, s32 from, s32 to, s32 *path, s32 flags);
extern void func_80209804(Bot *bot);

void func_80212FE0(Actor *actor)
{
    s32 path[64];
    Bot *bot = actor->player->bot;
    NodeGraph *graph = &D_8013B364;
    f32 dist;
    s32 i;
    s32 len;
    s32 start;
    s32 none; /* FAKEMATCH: constant-holding local places the li */

    if (bot->targetId == -1) {
        func_80209874(bot, 2);
        return;
    }
    if (bot->target == 0) {
        func_80211020(bot);
        return;
    }
    dist = func_80209948(bot, bot->goal);
    if (bot->node != bot->goal && D_800C71D0[0] < dist) {
        func_80208410(bot);
    } else if (bot->arrived != 0) {
        func_80209874(bot, 8);
    } else {
        bot->dest = bot->target->pos;
    }
    func_80211020(bot);
    if (bot->target != 0) {
        func_80208EB0(bot);
        if (func_80272768(&bot->self->pos, &bot->target->pos) < D_800C71D0[1] && bot->arrived == 0) {
            bot->arrived = 1;
            none = -1;
            for (i = 63; i >= 0; i--) {
                path[i] = none;
            }
            func_8020B95C(graph, bot->goal, bot->goal, path, 0);
            none = -1;
            start = path[0];
            for (i = 63; i >= 0; i--) {
                path[i] = none;
            }
            len = func_8020B95C(graph, start, bot->goal, path, 0);
            func_80209804(bot);
            bot->goal = path[len - 1];
        }
    }
}
