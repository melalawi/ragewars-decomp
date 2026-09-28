#include "basetypes.h"

/* Updates a world's active actors: counts each actor's lifetime down by the frame time and expires it when the lifetime runs out or when its bounds leave the world box D_801031F0 (unless it is flagged 0x200); an expired active actor loses its active bit, decrements its owner's counter and moves from the active list to the free list, and every other actor is updated through func_80290404. */

typedef struct Actor Actor;
struct Actor {
    char pad0[0x17C];
    f32 minX;
    f32 minY;
    f32 minZ;
    f32 maxX;
    f32 maxY;
    f32 maxZ;
    char pad194[8];
    u16 flags;
    char pad19E[0x1C8 - 0x19E];
    f32 lifetime;
    char pad1CC[4];
    s32 state;
    s32 *counter;
    Actor *prev;
    Actor *next;
};

typedef struct World {
    char pad0[0x3C00];
    Actor *free;
    Actor *head;
    Actor *tail;
} World;

extern f32 D_801031F0[];
extern f32 D_800D2988;
extern void func_80290404(Actor *actor);

void func_80290218(World *world) {
    Actor *actor;
    Actor *next;
    s32 expired;
    f32 lifetime;

    next = world->head;
    if (next == 0) {
        return;
    }
    do {
        actor = next;
        next = actor->next;
        expired = 0;
        if (actor->lifetime > 0.0f) {
            lifetime = actor->lifetime - D_800D2988;
            actor->lifetime = lifetime;
            if (lifetime <= 0.0f) {
                expired = 1;
            }
        }
        if (!((D_801031F0[3] > actor->minX) && (D_801031F0[0] < actor->maxX) &&
              (D_801031F0[5] > actor->minZ) && (D_801031F0[2] < actor->maxZ) &&
              (D_801031F0[4] > actor->minY) && (D_801031F0[1] < actor->maxY))) {
            if (!(actor->flags & 0x200)) {
                expired = 1;
            }
        }
        if (expired) {
            if (actor->state & 1) {
                actor->state &= ~1;
                if (actor->counter != 0) {
                    (*actor->counter)--;
                }
                if (actor->prev != 0) {
                    actor->prev->next = actor->next;
                }
                if (actor->next != 0) {
                    actor->next->prev = actor->prev;
                }
                if (world->head == actor) {
                    world->head = actor->next;
                }
                if (world->tail == actor) {
                    world->tail = actor->prev;
                }
                actor->next = world->free;
                actor->prev = 0;
                world->free = actor;
            }
        } else {
            func_80290404(actor);
        }
    } while (next != 0);
}
