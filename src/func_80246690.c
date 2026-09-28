/* Spawns and initializes an actor with model, transforms, collision body, effects and default bounds. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct {
    s32 w[6];
} Bounds;

typedef struct {
    char pad0[0x24];
    s32 radius;
    char pad28[0x2C];
    s32 gravity;
} World;

extern World D_8011FE88;
extern char *D_80145044;
extern s32 D_80145048;
extern void *D_800D0680[];
extern char D_800CFB04;
extern Bounds D_800D0EF8;
extern void D_24A790();
extern s32 func_8028B1F8(void *, s32);
extern void func_80246174(char *);
extern Quat func_8024D860(char *);
extern void func_802624A0(char *);
extern void func_8024B64C(char *, s32);
extern void func_80272848(char *);
extern void func_80213AAC(char *, char *, void *);
extern void func_802193C8(char *, s32, char *);
extern void func_80246BD8(char *, s32, s32, s32);
extern s32 func_80250B98(void);

static inline void *body_setup(char *obj) {
    u32 kind;
    s32 i;
    char *player;

    kind = **(u32 **)(obj + 0x18);
    if (kind >= 15) {
        return 0;
    }
    if (kind == 11) {
        for (i = 0; i < D_80145048; i++) {
            player = D_80145044 + i * 0x16E8;
            if (player == obj) {
                return 0;
            }
            if (player + 0x2E8 == obj) {
                return &D_800CFB04;
            }
        }
    }
    return D_800D0680[kind];
}

void func_80246690(char *obj, s32 model, s32 kind, s32 unused, u32 *info, s32 effect, s32 owner, f32 heading,
                   Vec3 pos, s32 flags, Vec3 extent, Vec3 offset) {
    s32 lean;
    s32 delay;
    World *world;

    struct Header { char unknown[0x100]; s32 flags; };
    ((struct Header *)obj)->flags &= ~0x40000;
    if (model == -1) {
        model = func_8028B1F8(&D_8011FE88, kind);
        if (model == -1) {
            return;
        }
    }
    func_80246174(obj);
    *(u8 *)obj = 1;
    *(s16 *)(obj + 0x4) = model;
    *(u32 **)(obj + 0x18) = info;
    *(s32 *)(obj + 0x14) = owner;
    *(f32 *)(obj + 0x6C) = heading;
    *(Vec3 *)(obj + 0x8) = pos;
    *(s32 *)(obj + 0x100) = flags;
    *(Vec3 *)(obj + 0x50) = extent;
    *(Vec3 *)(obj + 0x1C) = offset;
    *(s16 *)(obj + 0xE4) = kind;
    *(Quat *)(obj + 0x5C) = func_8024D860(obj);
    *(s32 *)(obj + 0x70) = 0;
    *(u8 *)(obj + 0xE6) = 0;
    *(u8 *)(obj + 0xE7) = 0;
    *(u8 *)(obj + 0x139) = 0;
    *(u8 *)(obj + 0x138) = 0;
    *(s32 *)(obj + 0x2E0) = 0x17800074;
    func_802624A0(obj + 0x104);
    func_802624A0(obj + 0x118);
    func_8024B64C(obj, 0);
    *(s32 *)(obj + 0x100) = (*(s32 *)(obj + 0x100) & ~0x400) | 0x2100;
    func_80272848(obj + 0x74);
    *(s32 *)(obj + 0xB4) = 0;
    *(s32 *)(obj + 0xB8) = 0;
    *(s32 *)(obj + 0xBC) = 0;
    *(u8 *)(obj + 0x13B) = 0;
    *(s32 *)(obj + 0x100) |= 0x10000;
    *(s32 *)(obj + 0x100) |= 0x20000;
    if (**(u32 **)(obj + 0x18) == 0 || (*(s32 *)(obj + 0x100) & 1)) {
        *(s32 *)(obj + 0x100) &= ~0x20000;
    }
    lean = 0;
    delay = 0;
    func_80213AAC(obj, obj + 0x170, body_setup(obj));
    if (*(s32 *)(obj + 0x1A0) != 0) {
        lean = -*(s8 *)(obj + 0x23A);
    }
    *(s32 *)(obj + 0x1D8) = 0;
    if (effect != -1) {
        func_802193C8(obj + 0x204, effect, obj + 0x8);
    }
    world = &D_8011FE88;
    func_80246BD8(obj, world->gravity, world->radius, lean);
    if (delay != 0) {
        *(f32 *)(obj + 0x104) = delay;
        *(s32 *)(obj + 0x100) &= ~0x400;
    }
    *(s32 *)(obj + 0x2E4) = func_80250B98() << 10;
    if (*(s32 *)(obj + 0x100) & 8) {
        *(void **)(obj + 0x27C) = D_24A790;
        *(Bounds *)(obj + 0x140) = D_800D0EF8;
        *(Bounds *)(obj + 0x158) = D_800D0EF8;
    }
}
