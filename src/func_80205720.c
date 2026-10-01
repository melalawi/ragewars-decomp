/* Dispatch configured object, particle, or weighted-choice spawns and update the owner count. */
#include "shared/spawn_dispatch.h"

extern f32 func_80275E44(void *, f32, f32);
extern s32 *func_8028CF48(void *, s16);
/* FAKEMATCH: preserve full v0 return values at these call sites; the original
 * caller narrows picker results explicitly, while lookup ids use the full word.
 * The definitions return 16-bit values in the same o32 v0 return register. */
extern s32 func_8028B238(void *, s16);
extern s32 func_8022A8E0(void *);
extern s32 func_8022A404(void *);
extern s32 func_80222D40(s32, s16);
extern s32 func_8022ADA0(s32, s16);
extern s32 func_80279808(SpawnChoice *);
extern void func_802798CC(s16 *);
extern void func_802798D4(s16 *, s16, s16);
extern s32 func_80279918(s16 *);
extern s32 func_80262D00(void *, s16, s32, s32 *, void *, Vec3, f32, Vec3, Vec3, s32 *);
extern s32 func_80280094(void *, void *, void *, s32 *, s32, s32, Vec3, Shared_MotionOutput, Vec3, s32, s32, s32);
extern SpawnDispatchActor *func_8028FFB0(void *, s32 *, s32, Vec3, Vec3, void *, f32);
extern void func_80216288(void *, s32, Vec3, s32);
extern char D_8011FE88[];
extern char D_80121990[];
extern char D_80131600[];
extern char D_80135210[];
extern char D_80145040[];
extern SpawnDispatchConfig D_801462C8[];
extern u8 D_801462D5;
extern u8 *D_800E4680;
extern s32 D_80146918;
extern s32 D_8013B290;
extern SpawnDispatchActor *D_8013B124;

static __inline__ SpawnChoice *spawnTable0(void) {
#if defined(VERSION_US_REV1)
    extern SpawnChoice D_800CD760[];
    return D_800CD760;
#elif defined(VERSION_US)
    extern SpawnChoice D_800C8430[];
    return D_800C8430;
#elif defined(VERSION_EU)
    extern SpawnChoice D_800C9100[];
    return D_800C9100;
#elif defined(VERSION_EU_X)
    extern SpawnChoice eu_x_D_800C9AD0[];
    return eu_x_D_800C9AD0;
#elif defined(VERSION_DE)
    extern SpawnChoice D_800C8510[];
    return D_800C8510;
#endif
}

static __inline__ SpawnChoice *spawnTable1(void) {
#if defined(VERSION_US_REV1)
    extern SpawnChoice D_800CD764[];
    return D_800CD764;
#elif defined(VERSION_US)
    extern SpawnChoice D_800C8434[];
    return D_800C8434;
#elif defined(VERSION_EU)
    extern SpawnChoice D_800C9104[];
    return D_800C9104;
#elif defined(VERSION_EU_X)
    extern SpawnChoice D_800C9AD4[];
    return D_800C9AD4;
#elif defined(VERSION_DE)
    extern SpawnChoice D_800C8514[];
    return D_800C8514;
#endif
}

static __inline__ SpawnChoice *spawnTable2(void) {
#if defined(VERSION_US_REV1)
    extern SpawnChoice D_800CD768[];
    return D_800CD768;
#elif defined(VERSION_US)
    extern SpawnChoice D_800C8438[];
    return D_800C8438;
#elif defined(VERSION_EU)
    extern SpawnChoice eu_D_800C9108[];
    return eu_D_800C9108;
#elif defined(VERSION_EU_X)
    extern SpawnChoice eu_x_D_800C9AD8[];
    return eu_x_D_800C9AD8;
#elif defined(VERSION_DE)
    extern SpawnChoice D_800C8518[];
    return D_800C8518;
#endif
}

static __inline__ SpawnChoice *spawnTable3(void) {
#if defined(VERSION_US_REV1)
    extern SpawnChoice D_800CD778[];
    return D_800CD778;
#elif defined(VERSION_US)
    extern SpawnChoice D_800C8448[];
    return D_800C8448;
#elif defined(VERSION_EU)
    extern SpawnChoice eu_D_800C9118[];
    return eu_D_800C9118;
#elif defined(VERSION_EU_X)
    extern SpawnChoice eu_x_D_800C9AE8[];
    return eu_x_D_800C9AE8;
#elif defined(VERSION_DE)
    extern SpawnChoice D_800C8528[];
    return D_800C8528;
#endif
}

static __inline__ SpawnChoice *spawnTable4(void) {
#if defined(VERSION_US_REV1)
    extern SpawnChoice D_800CD784[];
    return D_800CD784;
#elif defined(VERSION_US)
    extern SpawnChoice D_800C8454[];
    return D_800C8454;
#elif defined(VERSION_EU)
    extern SpawnChoice D_800C9124[];
    return D_800C9124;
#elif defined(VERSION_EU_X)
    extern SpawnChoice eu_x_D_800C9AF4[];
    return eu_x_D_800C9AF4;
#elif defined(VERSION_DE)
    extern SpawnChoice D_800C8534[];
    return D_800C8534;
#endif
}

static __inline__ SpawnChoice *spawnTable5(void) {
#if defined(VERSION_US_REV1)
    extern SpawnChoice D_800CD794[];
    return D_800CD794;
#elif defined(VERSION_US)
    extern SpawnChoice D_800C8464[];
    return D_800C8464;
#elif defined(VERSION_EU)
    extern SpawnChoice D_800C9134[];
    return D_800C9134;
#elif defined(VERSION_EU_X)
    extern SpawnChoice D_800C9B04[];
    return D_800C9B04;
#elif defined(VERSION_DE)
    extern SpawnChoice D_800C8544[];
    return D_800C8544;
#endif
}

static __inline__ SpawnChoice *spawnTable6(void) {
#if defined(VERSION_US_REV1)
    extern SpawnChoice D_800CD798[];
    return D_800CD798;
#elif defined(VERSION_US)
    extern SpawnChoice D_800C8468[];
    return D_800C8468;
#elif defined(VERSION_EU)
    extern SpawnChoice D_800C9138[];
    return D_800C9138;
#elif defined(VERSION_EU_X)
    extern SpawnChoice D_800C9B08[];
    return D_800C9B08;
#elif defined(VERSION_DE)
    extern SpawnChoice D_800C8548[];
    return D_800C8548;
#endif
}

static __inline__ s32 spawnBlocked(void) {
#if defined(VERSION_US_REV1)
    extern s32 D_80146920;
    return D_80146920;
#elif defined(VERSION_US)
    extern s32 D_80140860;
    return D_80140860;
#elif defined(VERSION_EU)
    extern s32 D_80152860;
    return D_80152860;
#elif defined(VERSION_EU_X)
    extern s32 D_8014C860;
    return D_8014C860;
#elif defined(VERSION_DE)
    extern s32 D_80142860;
    return D_80142860;
#endif
}

static __inline__ s32 available(s32 id) {
    SpawnDispatchActor *actor;
    if (id == 0x84F) {
        actor = D_8013B124;
        while (actor) {
            if (*actor->definition == 4) {
                return 0;
            }
            actor = actor->next;
        }
        return func_8022A8E0(D_80145040) == 0;
    }
    return 1;
}

/* FAKEMATCH: reusing the inline argument for the availability result makes
 * GCC 2.8.1 fill the choice guard with a non-annulling branch delay slot.
 * A separate result or direct constant return selects bnel instead. */
static __inline__ s32 availableChoice(s32 id) {
    SpawnDispatchActor *actor;
    if (id != 0x84F) {
        id = 1;
        goto done;
    }
    actor = D_8013B124;
    while (actor) {
        if (*actor->definition == 4) {
            return id = 0;
        }
        actor = actor->next;
    }
    return id = func_8022A8E0(D_80145040) == 0;
done:
    return id;
}

/* FAKEMATCH: equivalent return paths keep the first spawn id in a distinct
 * inline result until GCC 2.8.1 schedules its copy; a single return propagates
 * the saved lookup id into the first guard and changes the delay slots. */
static __inline__ s32 copySpawnId(s32 id) {
    if (id < 0) {
        return id;
    }
    return id;
}

static __inline__ void spawn(SpawnDispatchObject *object, s32 id,
        Vec3 position, SpawnDispatchOwner *owner, void *world) {
    SpawnDispatchActor *actor;
    id = copySpawnId(id);
    if (id == 0xBD7 && D_80146918 && spawnBlocked()) {
        return;
    }
    if (id == 0x1388 && D_801462D5 == 1) {
        id = *D_800E4680 + 0x1388;
        if (id == 0x1388) {
            return;
        }
    }
    actor = func_8028FFB0(D_80131600, &owner->spawn, id,
        object->rotation, position, world, 0);
    if (actor) {
        actor->state = 0;
        owner->remaining--;
        func_80216288(actor, 0x11D, actor->position, 0);
    }
}

static __inline__ void spawnSelected(SpawnDispatchObject *object, SpawnDispatchOwner *owner, s32 id,
        void *world, Vec3 position) {
    SpawnDispatchActor *actor;
    if (id == 0xBD7 && D_80146918 && spawnBlocked()) {
        return;
    }
    if (id == 0x1388 && D_801462D5 == 1) {
        id = *D_800E4680 + 0x1388;
        if (id == 0x1388) {
            return;
        }
    }
    actor = func_8028FFB0(D_80131600, &owner->spawn, id,
        object->rotation, position, world, 0);
    if (actor) {
        actor->state = 0;
        owner->remaining--;
        func_80216288(actor, 0x11D, actor->position, 0);
    }
}

static __inline__ void spawnParticles(SpawnDispatchObject *object, SpawnDispatchOwner *owner,
        Vec3 position, Vec3 velocity, s32 type, s32 *entry, void *world) {
    if (func_80262D00(D_80135210, type, 0, entry, world, position,
            object->scale, object->rotation, velocity, &owner->spawn)) {
        owner->remaining--;
    }
}

static __inline__ void spawnGroup(SpawnDispatchObject *object, SpawnDispatchOwner *owner,
        Vec3 position, s32 count) {
    owner->remaining -= func_80280094(D_80121990, object, object, &owner->spawn,
            0, count, object->rotation, object->motion, position, 0, -1, 0);
}

void func_80205720(SpawnDispatchObject *object, SpawnDispatchOwner *owner) {
    Vec3 position;
    Vec3 velocity;
    s16 picker[52];
    s16 otherPicker[52];
    void *world;
    SpawnDefinition *definition;
    s32 *entry;
    SpawnChoice *choice;
    SpawnDispatchActor *actor;
    s32 first, second;
    s32 third;
    s32 id;
    s32 context;
    f32 height;

    definition = (SpawnDefinition *)(object->definition + 0x14);
    position = object->position;
    world = object->world;
    if (world) {
        height = func_80275E44(world, object->position.x, object->position.z);
        if (position.y < height) {
            position.y = height;
        }
    }
    switch (definition->kind) {
    case 0:
        entry = func_8028CF48(D_8011FE88, definition->selector);
        switch (*entry) {
        case 8:
            id = func_8028B238(D_8011FE88, definition->id);
            if (!available(id)) {
                return;
            }
            spawn(object, id, position, owner, world);
            return;
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 9: case 10:
            velocity.x = definition->velocity.x;
            velocity.y = definition->velocity.y;
            velocity.z = definition->velocity.z;
            spawnParticles(object, owner, position, velocity, definition->id, entry, world);
            break;
        }
        return;
    case 1:
        spawnGroup(object, owner, position, definition->count);
        return;
    case 2:
        first = -1;
        second = -1;
        third = -1;
        if (D_801462C8->enabled) {
            if (definition->flags & 0x20) {
                first = (s16)func_80279808(spawnTable1());
            }
            if (definition->flags & 0x40) {
                second = (s16)func_80279808(spawnTable4());
            }
            if (definition->flags & 0x80) {
                func_802798CC(otherPicker);
                choice = spawnTable6();
                while (choice->id != -1) {
                    if (availableChoice(choice->id)) {
                        func_802798D4(otherPicker, choice->id, choice->weight);
                    }
                    choice++;
                }
                third = (s16)func_80279918(otherPicker);
            }
        } else {
            context = func_8022A404((u8 *)D_801462C8 - 0x1288);
            if (!context) {
                return;
            }
            if (definition->flags & 0x20) {
                func_802798CC(picker);
                choice = spawnTable0();
                while (choice->id != -1) {
                    if (func_80222D40(context, choice->id)) {
                        func_802798D4(picker, choice->id, choice->weight);
                    }
                    choice++;
                }
                first = (s16)func_80279918(picker);
            }
            if (definition->flags & 0x40) {
                func_802798CC(picker);
                choice = spawnTable2();
                if (D_8013B290) {
                    choice = spawnTable3();
                }
                while (choice->id != -1) {
                    if (func_8022ADA0(context, choice->id)) {
                        func_802798D4(picker, choice->id, choice->weight);
                    }
                    choice++;
                }
                second = (s16)func_80279918(picker);
            }
            if (definition->flags & 0x80) {
                third = (s16)func_80279808(spawnTable5());
            }
        }
        func_802798CC(picker);
        if (first != -1) {
            func_802798D4(picker, first, 100);
        }
        if (second != -1) {
            func_802798D4(picker, second, 100);
        }
        if (third != -1) {
            func_802798D4(picker, third, 100);
        }
        if (!picker[0]) {
            return;
        }
        id = (s16)func_80279918(picker);
        spawnSelected(object, owner, id, world, position);
        return;
    }
}
