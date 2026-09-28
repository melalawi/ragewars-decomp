/* Draws an owner model with timed descriptor selection and fade setup/reset; a named descriptor-slot reference preserves reload scheduling. */
#include "basetypes.h"

typedef struct {
    char pad0[0xE];
    s8 key;
    s8 key2;
    char pad10[2];
    s8 argument;
    char pad13[0x24 - 0x13];
    s32 period;
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
    char padDB;
    u32 timer;
    s8 fade;
} Owner;

extern s32 D_800D2640;
extern s32 D_800D15E0;
extern f32 D_800D15F0;
extern f32 D_800C8F40[];
extern f32 D_800C8F48;
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

static inline int select_key(Descriptor *descriptor, u32 timer) {
 int key;
    if (timer >= (u32)(descriptor->period * 2)) {
        key = descriptor->key2;
    } else {
        key = descriptor->key;
    }
 return key;
}
void func_8025021C(Owner *owner) {
    Descriptor *descriptor;
    s32 arg2;
    s32 key;
    s32 instance;
    s32 resource;
    s32 *header;
    char *data;
    f32 alpha;

    if (owner->flagsD8 & 0x40) {
        return;
    }
    descriptor = owner->descriptor;
    arg2 = descriptor->argument;
    key = select_key(descriptor, owner->timer);
    if (key == -1) {
        if (owner->fade <= 0) {
            return;
        }
        D_800D15E0 = 1;
        D_800D15F0 = owner->fade << 5;
        { Descriptor **slot = &owner->descriptor; key = (*slot)->key; }
    } else {
        if (owner->fade < 8) {
            D_800D15E0 = 1;
            alpha = owner->fade << 5;
        } else {
            alpha = D_800C8F40[1];
            D_800D15E0 = 0;
        }
        D_800D15F0 = alpha;
    }
    instance = func_80250754(owner, key);
    if (instance != 0) {
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
    D_800D15E0 = 0;
    D_800D15F0 = D_800C8F48;
}
