#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

/* Picks a rider's nearest target: walks the player list D_80145060 for players within the segment's range at 0x54 (squared distance through func_8027272C) that are not the rider's own player, are active and, in team play (D_801468C4), are on the other team, keeps those with a clear line of sight between their raised centres through func_80244494 (or whose blocker is the player itself), and records the nearest in the rider at 0x80 and in the result with its distance through func_802BC380, clearing both when none qualifies. */
typedef struct Record {
    char pad0[0x92];
    u8 team;
} Record;


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
    segment = (Segment *)(player->views18.view18_1.track + 0x14);
    other = D_80145060;
    if (other != 0) {
        lift = D_800C6B14;
        do {
            distance = func_8027272C(&player->views0.view8_3.pos, &other->views0.view8_3.pos);
            if (distance < segment->range * segment->range) {
                enemy = 0;
                if (player->views1C.view1D8_23.self != other && other->views5E4.view5E4_1.active != 0) {
                    enemy = 1;
                    if (D_801468C4 != 0) {
                        enemy = player->views1C.view1D8_23.self->views5D8.view5D8_1.record->team != other->views5D8.view5D8_1.record->team;
                    }
                }
                if (enemy) {
                    func_80271FD8(&to, &other->views0.view8_3.pos, &player->views0.view8_3.pos);
                    from.x = rider->aim.x;
                    from.y = rider->aim.y;
                    from.z = rider->aim.z;
                    from = player->views0.view8_3.pos;
                    from.y += func_8024D274(player) * lift;
                    to = other->views0.view8_3.pos;
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
            other = other->views16E0.view16E0_1.next;
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1954_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B14_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1CC4_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D04_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A24_4 = 0.5f;
#endif
