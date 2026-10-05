#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80245980.h"
#include "types.h"
/* Spawns and initializes an actor with model, transforms, collision body, effects and default bounds. */









extern World_func_802466A0_de D_8011BDC8;
extern char *D_80140F84;

extern void *D_800CB440_de[];
extern char D_800CA8C4_de;
extern Block24 D_800CBCA8;
extern void D_0024A7A0();
extern s32 func_8028B21C_de(void *, s32);
extern void func_80246184_de(char *);
extern Vector4f func_8024D870_de(char *);
extern void func_80262480_de(char *);
extern void func_8024B65C_de(char *, s32);
extern void func_802727D8_de(char *);
extern void 
#if defined(VERSION_EU)
func_80213ACC_eu
#elif defined(VERSION_EU_X)
func_80213ACC_eu_x
#elif defined(VERSION_US)
func_80213AAC_us
#elif defined(VERSION_US_REV1)
func_80213AAC_us_rev1
#else
func_80213AAC_de
#endif
(char *, char *, void *);
extern void func_802193C8_de(char *, s32, char *);
extern void func_80246BE8_de(char *, s32, s32, s32);
extern s32 func_80250BF0_de(void);




static inline void *body_setup(char *obj) {
    u32 kind;
    s32 i;
    char *player;

    kind = *((func_80246690_S1 *)(obj))->unk18;
    if (kind >= 15) {
        return 0;
    }
    if (kind == 11) {
        for (i = 0; i < D_80140F88; i++) {
            player = D_80140F84 + i * 0x16E8;
            if (player == obj) {
                return 0;
            }
            if (player + 0x2E8 == obj) {
                return &D_800CA8C4_de;
            }
        }
    }
    return D_800CB440_de[kind];
}

void func_802466A0_de(char *obj, s32 model, s32 kind, s32 unused, u32 *info, s32 effect, s32 owner, f32 heading,
                   Vec3 pos, s32 flags, Vec3 extent, Vec3 offset) {
    s32 lean;
    s32 delay;
    World_func_802466A0_de *world;

    struct Header { char unknown[0x100]; s32 flags; };
    ((struct Header *)obj)->flags &= ~0x40000;
    if (model == -1) {
        model = func_8028B21C_de(&D_8011BDC8, kind);
        if (model == -1) {
            return;
        }
    }
    func_80246184_de(obj);
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
    ((func_80246690_S1 *)(obj))->unk5C = func_8024D870_de(obj);
    ((func_80246690_S1 *)(obj))->unk70 = 0;
    ((func_80246690_S1 *)(obj))->unkE6 = 0;
    ((func_80246690_S1 *)(obj))->unkE7 = 0;
    ((func_80246690_S1 *)(obj))->unk139 = 0;
    ((func_80246690_S1 *)(obj))->unk138 = 0;
    ((func_80246690_S1 *)(obj))->unk2E0 = 0x17800074;
    func_80262480_de((char *)obj + 0x104);
    func_80262480_de((char *)obj + 0x118);
    func_8024B65C_de(obj, 0);
    ((func_80246690_S1 *)(obj))->unk100 = (((func_80246690_S1 *)(obj))->unk100 & ~0x400) | 0x2100;
    func_802727D8_de((char *)obj + 0x74);
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
    
#if defined(VERSION_EU)
func_80213ACC_eu
#elif defined(VERSION_EU_X)
func_80213ACC_eu_x
#elif defined(VERSION_US)
func_80213AAC_us
#elif defined(VERSION_US_REV1)
func_80213AAC_us_rev1
#else
func_80213AAC_de
#endif
(obj, obj + 0x170, body_setup(obj));
    if (((func_80246690_S1 *)(obj))->unk1A0 != 0) {
        lean = -((func_80246690_S1 *)(obj))->unk23A;
    }
    ((func_80246690_S1 *)(obj))->unk1D8 = 0;
    if (effect != -1) {
        func_802193C8_de(obj + 0x204, effect, (char *)obj + 0x8);
    }
    world = &D_8011BDC8;
    func_80246BE8_de(obj, world->gravity, world->radius, lean);
    if (delay != 0) {
        ((func_80246690_S1 *)(obj))->unk104 = delay;
        ((func_80246690_S1 *)(obj))->unk100 &= ~0x400;
    }
    ((func_80246690_S1 *)(obj))->unk2E4 = func_80250BF0_de() << 10;
    if (((func_80246690_S1 *)(obj))->unk100 & 8) {
        ((func_80246690_S1 *)(obj))->unk27C = D_0024A7A0;
        ((func_80246690_S1 *)(obj))->unk140 = D_800CBCA8;
        ((func_80246690_S1 *)(obj))->unk158 = D_800CBCA8;
    }
}
