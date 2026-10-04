#include "span_1000/code_8028B64C.h"
#include "types.h"

/* Registers an object with a world after preparing it with func_8024B8C4_de: adds it to the lists of objects accepted by func_8024D160_de and func_8024E1B4_de, to the list of all objects, to the type 1 list (storing its slot in the object), to the list of objects flagged 2, to the type 5 list, and to the lists of model 0x64F and model 0x64D objects, each while that list has room. */







extern void func_8024B8C4_de(Object_func_8028C934_de *object);
extern s32 func_8024D160_de(Object_func_8028C934_de *object);
extern s32 func_8024E1B4_de(Object_func_8028C934_de *object);

void func_8028C934_de(World_func_8028C934_de *world, Object_func_8028C934_de *object) {
    func_8024B8C4_de(object);
    if (func_8024D160_de(object) != 0) {
        s32 n = world->countA;
        if (n != 512) {
            world->listA[n] = object;
            world->countA = n + 1;
        }
    }
    if (func_8024E1B4_de(object) != 0) {
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
        if (n < 64 && object->descriptor->field_0 == 1) {
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
        if (n < 16 && object->descriptor->field_0 == 5) {
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
