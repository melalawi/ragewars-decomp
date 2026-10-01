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

typedef struct func_80246690_S1 func_80246690_S1;
struct func_80246690_S1 {
    char pad0[0x4];
    s16 unk4;
    char pad4[0x8 - 0x4 - sizeof(s16)];
    Vec3 unk8;
    char pad8[0x14 - 0x8 - sizeof(Vec3)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    u32* unk18;
    char pad18[0x1C - 0x18 - sizeof(u32*)];
    Vec3 unk1C;
    char pad1C[0x50 - 0x1C - sizeof(Vec3)];
    Vec3 unk50;
    char pad50[0x5C - 0x50 - sizeof(Vec3)];
    Quat unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Quat)];
    f32 unk6C;
    char pad6C[0x70 - 0x6C - sizeof(f32)];
    s32 unk70;
    char pad70[0xB4 - 0x70 - sizeof(s32)];
    s32 unkB4;
    char padB4[0xB8 - 0xB4 - sizeof(s32)];
    s32 unkB8;
    char padB8[0xBC - 0xB8 - sizeof(s32)];
    s32 unkBC;
    char padBC[0xE4 - 0xBC - sizeof(s32)];
    s16 unkE4;
    char padE4[0xE6 - 0xE4 - sizeof(s16)];
    u8 unkE6;
    char padE6[0xE7 - 0xE6 - sizeof(u8)];
    u8 unkE7;
    char padE7[0x100 - 0xE7 - sizeof(u8)];
    s32 unk100;
    char pad100[0x104 - 0x100 - sizeof(s32)];
    f32 unk104;
    char pad104[0x138 - 0x104 - sizeof(f32)];
    u8 unk138;
    char pad138[0x139 - 0x138 - sizeof(u8)];
    u8 unk139;
    char pad139[0x13B - 0x139 - sizeof(u8)];
    u8 unk13B;
    char pad13B[0x140 - 0x13B - sizeof(u8)];
    Bounds unk140;
    char pad140[0x158 - 0x140 - sizeof(Bounds)];
    Bounds unk158;
    char pad158[0x1A0 - 0x158 - sizeof(Bounds)];
    s32 unk1A0;
    char pad1A0[0x1D8 - 0x1A0 - sizeof(s32)];
    s32 unk1D8;
    char pad1D8[0x23A - 0x1D8 - sizeof(s32)];
    s8 unk23A;
    char pad23A[0x27C - 0x23A - sizeof(s8)];
    void* unk27C;
    char pad27C[0x2E0 - 0x27C - sizeof(void*)];
    s32 unk2E0;
    char pad2E0[0x2E4 - 0x2E0 - sizeof(s32)];
    s32 unk2E4;
};

static inline void *body_setup(char *obj) {
    u32 kind;
    s32 i;
    char *player;

    kind = *((func_80246690_S1 *)(obj))->unk18;
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
    ((func_80246690_S1 *)(obj))->unk4 = model;
    ((func_80246690_S1 *)(obj))->unk18 = info;
    ((func_80246690_S1 *)(obj))->unk14 = owner;
    ((func_80246690_S1 *)(obj))->unk6C = heading;
    ((func_80246690_S1 *)(obj))->unk8 = pos;
    ((func_80246690_S1 *)(obj))->unk100 = flags;
    ((func_80246690_S1 *)(obj))->unk50 = extent;
    ((func_80246690_S1 *)(obj))->unk1C = offset;
    ((func_80246690_S1 *)(obj))->unkE4 = kind;
    ((func_80246690_S1 *)(obj))->unk5C = func_8024D860(obj);
    ((func_80246690_S1 *)(obj))->unk70 = 0;
    ((func_80246690_S1 *)(obj))->unkE6 = 0;
    ((func_80246690_S1 *)(obj))->unkE7 = 0;
    ((func_80246690_S1 *)(obj))->unk139 = 0;
    ((func_80246690_S1 *)(obj))->unk138 = 0;
    ((func_80246690_S1 *)(obj))->unk2E0 = 0x17800074;
    func_802624A0((char *)obj + 0x104);
    func_802624A0((char *)obj + 0x118);
    func_8024B64C(obj, 0);
    ((func_80246690_S1 *)(obj))->unk100 = (((func_80246690_S1 *)(obj))->unk100 & ~0x400) | 0x2100;
    func_80272848((char *)obj + 0x74);
    ((func_80246690_S1 *)(obj))->unkB4 = 0;
    ((func_80246690_S1 *)(obj))->unkB8 = 0;
    ((func_80246690_S1 *)(obj))->unkBC = 0;
    ((func_80246690_S1 *)(obj))->unk13B = 0;
    ((func_80246690_S1 *)(obj))->unk100 |= 0x10000;
    ((func_80246690_S1 *)(obj))->unk100 |= 0x20000;
    if (*((func_80246690_S1 *)(obj))->unk18 == 0 || (((func_80246690_S1 *)(obj))->unk100 & 1)) {
        ((func_80246690_S1 *)(obj))->unk100 &= ~0x20000;
    }
    lean = 0;
    delay = 0;
    func_80213AAC(obj, obj + 0x170, body_setup(obj));
    if (((func_80246690_S1 *)(obj))->unk1A0 != 0) {
        lean = -((func_80246690_S1 *)(obj))->unk23A;
    }
    ((func_80246690_S1 *)(obj))->unk1D8 = 0;
    if (effect != -1) {
        func_802193C8(obj + 0x204, effect, (char *)obj + 0x8);
    }
    world = &D_8011FE88;
    func_80246BD8(obj, world->gravity, world->radius, lean);
    if (delay != 0) {
        ((func_80246690_S1 *)(obj))->unk104 = delay;
        ((func_80246690_S1 *)(obj))->unk100 &= ~0x400;
    }
    ((func_80246690_S1 *)(obj))->unk2E4 = func_80250B98() << 10;
    if (((func_80246690_S1 *)(obj))->unk100 & 8) {
        ((func_80246690_S1 *)(obj))->unk27C = D_24A790;
        ((func_80246690_S1 *)(obj))->unk140 = D_800D0EF8;
        ((func_80246690_S1 *)(obj))->unk158 = D_800D0EF8;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CB350_3C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x86, 0xA0, 0x80, 0x0C, 0x84, 0xEC, 0x80, 0x0C, 0x81, 0x70, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x83, 0x20, 0x80, 0x0C, 0x83, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x85, 0x70, 0x80, 0x0C, 0x82, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D0680_3C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0xD9, 0xD0, 0x80, 0x0C, 0xD8, 0x1C, 0x80, 0x0C, 0xD4, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0xD6, 0x50, 0x80, 0x0C, 0xD7, 0x10, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0xD8, 0xA0, 0x80, 0x0C, 0xD5, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CC020_3C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x93, 0x70, 0x80, 0x0C, 0x91, 0xBC, 0x80, 0x0C, 0x8E, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x8F, 0xF0, 0x80, 0x0C, 0x90, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x92, 0x40, 0x80, 0x0C, 0x8F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CC9F0_3C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x9D, 0x40, 0x80, 0x0C, 0x9B, 0x8C, 0x80, 0x0C, 0x98, 0x10, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x99, 0xC0, 0x80, 0x0C, 0x9A, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x9C, 0x10, 0x80, 0x0C, 0x98, 0xD4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CB440_3C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x87, 0x80, 0x80, 0x0C, 0x85, 0xCC, 0x80, 0x0C, 0x82, 0x50, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x84, 0x00, 0x80, 0x0C, 0x84, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x86, 0x50, 0x80, 0x0C, 0x83, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#endif
