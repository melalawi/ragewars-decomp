/* Runs a computer player's patrol step: starts its route at 0x224 on the first route of D_8011FE88,
   or random roaming (-2) when there are none; once within D_800C71C0 of its goal node it advances the
   route position at 0x228 (wrapping at the route length) and drops the goal; a dropped goal is then
   taken from the route through func_8028D220 and func_8020CB3C, or a random node of D_8013B364 when
   roaming; finally runs func_80208410, func_80211020 and func_80208AAC. */
#include "basetypes.h"

typedef struct {
    u8 pad0[2];
    s16 length;
} Route;

typedef struct {
    u8 pad0[0x7C];
    s32 *routeCount;
} RouteSet;

typedef struct {
    u8 pad0[4];
    s32 count;
} NodeList;

typedef struct {
    u8 pad0[4];
    s32 node;
    u8 pad8[4];
    s32 goal;
    u8 pad10[0x214];
    s32 route;
    s32 routePos;
} Bot;

typedef struct {
    u8 pad0[0x1454];
    Bot *bot;
} Player;

typedef struct {
    u8 pad0[0x1D8];
    Player *player;
} Actor;

extern RouteSet D_8011FE88;
extern NodeList D_8013B364;
extern f32 D_800C71C0;

extern Route *func_8028D1F4(RouteSet *set, s32 route);
extern s32 func_8028D220(RouteSet *set, s32 route, s32 pos);
extern s32 func_8020CB3C(NodeList *list, s32 id);
extern void *func_8020C994(NodeList *list, s32 index);
extern void *func_8020993C(Bot *bot);
extern f32 func_80272768(void *a, void *b);
extern s32 func_80274544(void);
extern void func_80208410(Bot *bot);
extern void func_80211020(Bot *bot);
extern void func_80208AAC(Bot *bot);

void func_80212E10(Actor *actor)
{
    Bot *bot = actor->player->bot;
    NodeList *nodes = &D_8013B364;
    void *pos;
    Route *route;

    if (bot->route == -1) {
        RouteSet *routes = &D_8011FE88;

        if (*routes->routeCount > 0) {
            bot->route = 0;
            bot->routePos = 0;
            func_8028D1F4(routes, bot->route);
        } else {
            bot->route = -2;
            bot->routePos = -1;
        }
        bot->goal = -1;
    }
    if (bot->node == bot->goal) {
        pos = func_8020993C(bot);
        if (func_80272768(pos, func_8020C994(nodes, bot->goal)) < D_800C71C0) {
            if (bot->route >= 0) {
                route = func_8028D1F4(&D_8011FE88, bot->route);
                bot->routePos++;
                if (bot->routePos == route->length) {
                    bot->routePos = 0;
                }
            }
            bot->goal = -1;
        }
    }
    if (bot->goal == -1) {
        if (bot->route == -2) {
            bot->goal = func_80274544() % nodes->count;
        } else {
            bot->goal = func_8020CB3C(nodes, func_8028D220(&D_8011FE88, bot->route, bot->routePos));
        }
    }
    func_80208410(bot);
    func_80211020(bot);
    func_80208AAC(bot);
}
