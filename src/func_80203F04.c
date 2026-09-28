/* Tests whether a viewer can see a target: raises both positions by their heights scaled by one half and casts
   a ray between them through func_80244494 into D_80103FD0, returning 1 when nothing or the target itself
   blocks it. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Player {
    char pad0[8];
    Vec3 pos;
} Player;

typedef struct {
    char pad0[0x130];
    Vec3 aim;
} Rider;

extern Player **D_80103FCC;
extern char D_80103FD0[];
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_8024D274(Player *);
extern s32 func_80244494(Player *, Vec3, Vec3, char *);

s32 func_80203F04(Player *player, Rider *rider, Player *other) {
    Vec3 from;
    Vec3 to;
    f32 lift;
    s32 blocked;

    func_80271FD8(&to, &other->pos, &player->pos);
    lift = 0.5f;
    from.x = rider->aim.x;
    from.y = rider->aim.y;
    from.z = rider->aim.z;
    from = player->pos;
    from.y += func_8024D274(player) * lift;
    to = other->pos;
    to.y += func_8024D274(other) * lift;
    blocked = func_80244494(player, from, to, D_80103FD0);
    if (blocked != 0 && *D_80103FCC != other) {
        return 0;
    }
    return 1;
}
