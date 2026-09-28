#include "basetypes.h"

/* Spawns an entity through func_80278C80 when its bit is set in the current level's placement mask and it either names no flag or its flag in the global flag table D_8011FF08 is clear. */

typedef struct Entity {
    char pad0[0xF];
    unsigned char flag;
    char pad10[3];
    unsigned char index;
} Entity;

typedef struct World {
    char pad0[0x80];
    void *levels;
    char pad84[0x1B40C - 0x84];
    s32 level;
} World;

extern void *D_8011FF08;
extern void *func_8028FD94(void *table, s32 index);
extern s32 func_8028FDD8(void *table, s32 index);
extern void func_80278C80(Entity *entity);

void func_8028784C(World *world, Entity *entity) {
    s32 index;
    s32 level;
    void *mask;
    unsigned char *bits;
    void *flags;
    s32 flag;
    s32 bit;

    index = entity->index;
    level = world->level;
    mask = func_8028FD94(func_8028FD94(func_8028FD94(world->levels, 0), level), 2);
    func_8028FD94(mask, 0);
    func_8028FDD8(mask, 1);
    bits = func_8028FD94(mask, 1);
    bit = 1 << (index & 7);
    if (bits[index / 8] & bit) {
        if (entity->flag != 0) {
            flag = entity->flag;
            flags = func_8028FD94(D_8011FF08, 1);
            func_8028FD94(flags, 0);
            if (((unsigned char *)func_8028FD94(flags, 1))[flag] != 0) {
                return;
            }
        }
        func_80278C80(entity);
    }
}
