#include "basetypes.h"

/* Collects up to sixteen switch objects (descriptor type 0xD) of a world into its switch list, first syncing each one's flag 4 with the switch table D_800E4680 when its kind is 0xD34 to 0xD37: model 0xD2B follows table byte 1, models 0xD2C to 0xD2E follow their own table byte, and any other model clears the flag; the flag is set when the byte is zero. */

typedef struct Descriptor {
    s32 type;
    s32 flags;
    char pad8[4];
    s16 model;
    char padE[0x20 - 0xE];
    s32 kind;
} Descriptor;

typedef struct Object {
    char pad0[0x18];
    Descriptor *descriptor;
    char pad1C[0x2E8 - 0x1C];
} Object;

typedef struct World {
    char pad0[0x138];
    Object *objects;
    s32 pad13C;
    s32 count;
    char pad144[0x1B620 - 0x144];
    Object *switches[16];
    s32 switchCount;
} World;

extern unsigned char *D_800E4680;

void func_80286920(World *world) {
    Object *object;
    Descriptor *descriptor;
    s32 found;
    s32 i;

    found = 0;
    object = world->objects;
    world->switchCount = 0;
    for (i = 15; i >= 0; i--) {
        world->switches[i] = 0;
    }
    for (i = 0; i < world->count; object++, i++) {
        descriptor = object->descriptor;
        if (descriptor->type == 0xD) {
            if (D_800E4680 != 0 && (unsigned)(descriptor->kind - 0xD34) < 4) {
                switch (descriptor->model) {
                case 0xD2B:
                    if (D_800E4680[1] == 0) {
                        descriptor->flags |= 4;
                    } else {
                        descriptor->flags &= ~4;
                    }
                    break;
                case 0xD2C:
                case 0xD2D:
                case 0xD2E:
                    if (D_800E4680[object->descriptor->model - 0xD2A] == 0) {
                        object->descriptor->flags |= 4;
                        break;
                    }
                default:
                    object->descriptor->flags &= ~4;
                    break;
                }
            }
            world->switches[found] = object;
            found++;
        }
        if (found >= 16) {
            break;
        }
    }
    world->switchCount = found;
}
