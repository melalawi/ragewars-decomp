#include "basetypes.h"

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct Params {
    s32 value;
    s16 angle;
    u8 scale;
    u8 pad;
} Params;

typedef struct Inner {
    char pad[0x698];
    char *resource;
} Inner;

typedef struct Context {
    char pad[0x1D8];
    Inner *inner;
} Context;

typedef struct Object {
    u8 type;
    char pad[0xFF];
    s32 flags;
} Object;

extern s32 D_8010EC90;
extern s32 D_8011FE88;
extern f32 D_800C9548;
extern f32 D_800C9550;
extern void func_8028CE70(void *, void *, s32, Triple, f32, f32);

void func_802681B8(Object *arg0, Context *arg1, s32 arg2, Triple arg3, Params arg6) {
    void *resource;

    if ((arg0->type == 1) && (arg0->flags & 0x300000)) {
        resource = arg1->inner->resource + 0x140;
        arg3.x = 0;
        arg3.y = 0;
        arg3.z = 0;
    } else {
        resource = &D_8010EC90;
    }

    func_8028CE70(&D_8011FE88, resource, arg6.value, arg3,
                  arg6.angle * *(&D_800C9548 + 1), arg6.scale * D_800C9550);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C438C_4 = 10.2399998f;
const float unbake_rodata_800C4390_4 = 0.00392156886f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C954C_4 = 10.2399998f;
const float unbake_rodata_800C9550_4 = 0.00392156886f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C470C_4 = 10.2399998f;
const float unbake_rodata_800C4710_4 = 0.00392156886f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C474C_4 = 10.2399998f;
const float unbake_rodata_800C4750_4 = 0.00392156886f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C445C_4 = 10.2399998f;
const float unbake_rodata_800C4460_4 = 0.00392156886f;
#endif
