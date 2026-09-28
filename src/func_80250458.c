/* Draws an owner's own model instance unless it is hidden (flag 0x40 at 0xD8): looks up the instance keyed
 * by the descriptor's byte 0xE through func_80250754, loads the owner's model resource, decodes its colour
 * block when the owner's colour frame differs from D_800D297B, draws it through func_8026DA4C or
 * func_8026DC24 with the descriptor's byte 0x12, releases the resource and the instance, and records the
 * colour frame. Adapted from func_80250C2C with the hidden flag and the descriptor-supplied key and
 * draw argument. */
#include "basetypes.h"

typedef struct {
    char pad0[0xE];
    s8 key;
    char padF[3];
    s8 argument;
} Descriptor;

typedef struct Owner {
    char pad0[0x18];
    Descriptor *descriptor;
    char pad1C[4];
    s32 field20;
    char pad24[4];
    char transform[0xA8];
    s32 flagsD0;
    char padD4[4];
    u16 flagsD8;
    u8 colorFrame;
} Owner;

extern s32 D_800D2640;
extern s32 D_800D15E0;
extern u8 D_800D297B;
extern char D_250BD4;
extern char D_800C8F30;

extern s32 func_80250754(Owner *, s32);
extern s32 func_80251F0C(s32, s32, s32, s32, s32, void *, void *, void *, s32);
extern void func_80253B5C(s32, s32);
extern void func_8027899C(void *object, void *colors);
extern void func_8026DA4C(s32, void *, s32, s32, void *, s32);
extern void func_8026DC24(s32, void *, s32, s32, void *, s32);
extern void func_802536F4(s32, s32);

void func_80250458(Owner *owner) {
    s32 arg2;
    s32 instance;
    s32 resource;
    s32 *header;
    char *data;

    if (owner->flagsD8 & 0x40) {
        return;
    }
    arg2 = owner->descriptor->argument;
    instance = func_80250754(owner, owner->descriptor->key);
    if (instance == 0) {
        return;
    }
    resource = func_80251F0C(0, owner->flagsD0 | D_800D2640, instance, owner->field20, 8, owner, &D_250BD4,
                             &D_800C8F30, 0);
    if (resource != 0) {
        func_80253B5C(0, resource);
        header = *(s32 **)resource;
        if (header[0] == 1) {
            char *object = (char *)header + header[1];
            char *colors = (char *)header + header[2];

            if (owner->colorFrame != D_800D297B) {
                func_8027899C(object, colors);
            }
            data = object;
        } else {
            data = (char *)(header + 2);
        }
        if (D_800D15E0 != 0) {
            func_8026DA4C(instance, owner->transform, 0, 0, data, arg2);
        } else {
            func_8026DC24(instance, owner->transform, 0, 0, data, arg2);
        }
        func_802536F4(0, resource);
    }
    func_802536F4(0, instance);
    owner->colorFrame = D_800D297B;
}
