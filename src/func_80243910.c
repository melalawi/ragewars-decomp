#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct SourcePoint {
    f32 x;
    u8 pad4[4];
    f32 z;
    f32 y;
} SourcePoint;

typedef struct Query {
    s32 word0;
    f32 word4;
    s32 word8;
    s32 wordC;
    s32 word10;
    s32 word14;
    Vec3 vectors[4];
    Vec3 result;
    void *input;
    s32 index;
    u8 pad5C[0x84];
} Query;

typedef struct Actor {
    u8 pad0[0x40];
    s32 *flags;
    u8 pad44[0x68];
    u8 *data;
} Actor;

extern s32 D_8011FE88;
extern f32 D_800C8870;
extern void *func_8028B2D4(void *, u16 *);
extern void func_80240C9C(Query *arg0);
extern s32 func_8023E8C4(Actor *, Query *, s32);

void func_80243910(Actor *actor) {
    Query query;
    u8 *data;
    s32 *flags;
    void *resource;
    s32 i;
    f32 height;

    data = actor->data;
    flags = actor->flags;
    if (data != 0) {
        resource = func_8028B2D4(&D_8011FE88, (u16 *)data);
        if (resource != 0) {
          if ((*flags & 8) != 0) {
           if ((*flags & 0x100000) == 0) {
            query.word14 = 3;
            for (i = 0; i < 3; i++) {
                query.vectors[2 - i].x = ((SourcePoint **)data)[i + 1]->x;
                query.vectors[2 - i].y = ((SourcePoint **)data)[i + 1]->y +
                                         *(f32 *)((u8 *)actor + 0x1C);
                query.vectors[2 - i].z = ((SourcePoint **)data)[i + 1]->z;
            }
            func_80240C9C(&query);
            height = query.result.y;
            if (D_800C8870 < height) {
                query.word0 = 5;
                query.word4 = *(f32 *)(flags + 6);
                query.word8 = *(s8 *)((u8 *)flags + 6);
                query.input = 0;
                query.index = -1;
                query.word10 = 0;
                if ((*(s32 *)((u8 *)resource + 0x44) & 0x400000) != 0) {
                    query.wordC = 7;
                } else if ((*(u16 *)((u8 *)resource + 0x52) & 0x80) != 0) {
                    query.wordC = 8;
                } else {
                    query.wordC = 1;
                }
                func_8023E8C4(actor, &query, 1);
            }
           }
          }
        }
    }
}
