#include "basetypes.h"

/* Registers an object with a world after preparing it with func_8024B8B4: adds it to the lists of objects accepted by func_8024D150 and func_8024E1A4, to the list of all objects, to the type 1 list (storing its slot in the object), to the list of objects flagged 2, to the type 5 list, and to the lists of model 0x64F and model 0x64D objects, each while that list has room. */

typedef struct Descriptor {
    s32 type;
} Descriptor;

typedef struct Object {
    char pad0[0x18];
    Descriptor *descriptor;
    char pad1C[0xE4 - 0x1C];
    u16 model;
    char padE6[0x100 - 0xE6];
    s32 flags;
    char pad104[0x23E - 0x104];
    signed char slot;
} Object;

typedef struct World {
    char pad0[0x144];
    Object *listA[512];
    s32 countA;
    Object *listB[128];
    s32 countB;
    char padB4C[0xC50 - 0xB4C];
    Object *all[128];
    s32 countAll;
    Object *type1[64];
    s32 countType1;
    s32 padF58;
    Object *flagged[32];
    s32 countFlagged;
    Object *type5[16];
    s32 countType5;
    Object *model64F[32];
    s32 count64F;
    Object *model64D[4];
    s32 count64D;
} World;

extern void func_8024B8B4(Object *object);
extern s32 func_8024D150(Object *object);
extern s32 func_8024E1A4(Object *object);

void func_8028C910(World *world, Object *object) {
    func_8024B8B4(object);
    if (func_8024D150(object) != 0) {
        s32 n = world->countA;
        if (n != 512) {
            world->listA[n] = object;
            world->countA = n + 1;
        }
    }
    if (func_8024E1A4(object) != 0) {
        s32 n = world->countB;
        if (n != 128) {
            world->listB[n] = object;
            world->countB = n + 1;
        }
    }
    {
        s32 n = world->countAll;
        if (n < 128) {
            world->all[n] = object;
            world->countAll = n + 1;
        }
    }
    {
        s32 n = world->countType1;
        if (n < 64 && object->descriptor->type == 1) {
            world->type1[n] = object;
            object->slot = world->countType1++;
        }
    }
    {
        s32 n = world->countFlagged;
        if (n < 32 && (object->flags & 2)) {
            world->flagged[n] = object;
            world->countFlagged = n + 1;
        }
    }
    {
        s32 n = world->countType5;
        if (n < 16 && object->descriptor->type == 5) {
            world->type5[n] = object;
            world->countType5 = n + 1;
        }
    }
    {
        s32 n = world->count64F;
        if (n < 32 && object->model == 0x64F) {
            world->model64F[n] = object;
            world->count64F = n + 1;
        }
    }
    if (object->model == 0x64D) {
        s32 n = world->count64D;
        if (n < 4) {
            world->model64D[n] = object;
            world->count64D = n + 1;
        }
    }
}
