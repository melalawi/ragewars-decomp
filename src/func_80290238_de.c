#include "span_1000/code_8028FD24.h"
#include "types.h"

/* Updates a world's active actors: counts each actor's lifetime down by the frame time and expires it when the lifetime runs out or when its bounds leave the world box D_801031F0 (unless it is flagged 0x200); an expired active actor loses its active bit, decrements its owner's counter and moves from the active list to the free list, and every other actor is updated through func_80290424_de. */






extern f32 D_800FF1F0[];
extern f32 D_800CD738;
extern void func_80290424_de(Actor_func_80290238_de *actor);

void func_80290238_de(World_func_80290238_de *world) {
    Actor_func_80290238_de *actor;
    Actor_func_80290238_de *next;
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
            lifetime = actor->lifetime - D_800CD738;
            actor->lifetime = lifetime;
            if (lifetime <= 0.0f) {
                expired = 1;
            }
        }
        if (!((D_800FF1F0[3] > actor->minX) && (D_800FF1F0[0] < actor->maxX) &&
              (D_800FF1F0[5] > actor->minZ) && (D_800FF1F0[2] < actor->maxZ) &&
              (D_800FF1F0[4] > actor->minY) && (D_800FF1F0[1] < actor->maxY))) {
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
            func_80290424_de(actor);
        }
    } while (next != 0);
}
