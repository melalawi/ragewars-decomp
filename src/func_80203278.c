#include "basetypes.h"

/* Picks a rider's nearest target: walks the player list D_80145060 for players within the segment's range at 0x54 (squared distance through func_8027272C) that are not the rider's own player, are active and, in team play (D_801468C4), are on the other team, keeps those with a clear line of sight between their raised centres through func_80244494 (or whose blocker is the player itself), and records the nearest in the rider at 0x80 and in the result with its distance through func_802BC380, clearing both when none qualifies. */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x92];
    u8 team;
} Record;

typedef struct Player {
    char pad0[8];
    Vec3 pos;
    char pad14[4];
    char *track;
    char pad1C[0x1BC];
    struct Player *self;
    char pad1DC[0x3FC];
    Record *record;
    char pad5DC[8];
    s32 active;
    char pad5E8[0x10F8];
    struct Player *next;
} Player;

typedef struct {
    char pad0[0x80];
    Player *target;
    char pad84[0xAC];
    Vec3 aim;
} Rider;

typedef struct {
    char pad0[4];
    Player *target;
    char pad8[0x38];
    f32 distance;
} Result;

typedef struct {
    char pad0[0x54];
    f32 range;
} Segment;

extern Player *D_80145060;
extern s32 D_801468C4;
extern f32 D_800C6B14;
extern Player **D_80103FCC;
extern char D_80103FD0[];

extern f32 func_8027272C(Vec3 *, Vec3 *);
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_8024D274(Player *);
extern s32 func_80244494(Player *, Vec3, Vec3, char *);
extern f32 func_802BC380(f32);

void func_80203278(Player *player, Rider *rider, Result *result) {
    f32 nearest;
    Player *best;
    Segment *segment;
    Player *other;
    f32 distance;
    f32 lift;
    s32 enemy;
    s32 valid;
    s32 blocked;
    Vec3 from;
    Vec3 to;

    nearest = 0.0f;
    best = 0;
    segment = (Segment *)(player->track + 0x14);
    other = D_80145060;
    if (other != 0) {
        lift = D_800C6B14;
        do {
            distance = func_8027272C(&player->pos, &other->pos);
            if (distance < segment->range * segment->range) {
                enemy = 0;
                if (player->self != other && other->active != 0) {
                    enemy = 1;
                    if (D_801468C4 != 0) {
                        enemy = player->self->record->team != other->record->team;
                    }
                }
                if (enemy) {
                    func_80271FD8(&to, &other->pos, &player->pos);
                    from.x = rider->aim.x;
                    from.y = rider->aim.y;
                    from.z = rider->aim.z;
                    from = player->pos;
                    from.y += func_8024D274(player) * lift;
                    to = other->pos;
                    to.y += func_8024D274(other) * lift;
                    blocked = func_80244494(player, from, to, D_80103FD0);
                    valid = 1;
                    if (blocked != 0) {
                        valid = *D_80103FCC == other;
                    }
                    if (valid && (best == 0 || distance < nearest)) {
                        best = other;
                        nearest = distance;
                    }
                }
            }
            other = other->next;
        } while (other != 0);
    }
    if (best != 0) {
        rider->target = best;
        result->distance = func_802BC380(nearest);
        result->target = best;
    } else {
        result->target = 0;
        rider->target = 0;
    }
}
