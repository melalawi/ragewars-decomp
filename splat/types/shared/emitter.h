#ifndef SHARED_SHARED_EMITTER_H
#define SHARED_SHARED_EMITTER_H

#include "basetypes.h"
#include "emitter_types.h"

typedef struct Shared_Emitter Shared_Emitter;
struct Shared_Emitter {
    char pad0[0x8];
    Vec3 pos; /* +0x8: src/func_80220EB0.c */
    struct Shared_Model * model; /* +0x14: src/func_80220EB0.c */
    char pad18[0x28];
    f32 unk40; /* +0x40: src/func_80220EB0.c */
    char pad44[0x18];
    Shared_Quad unk5C; /* +0x5C: src/func_80220EB0.c */
    f32 unk6C; /* +0x6C: src/func_80220EB0.c */
};
typedef char Shared_Emitter_size_check[(sizeof(Shared_Emitter) == 0x70) ? 1 : -1];

#endif
