#include "basetypes.h"

typedef struct Vec3 {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

typedef struct Source {
    char pad0[8];
    Vec3 position;
    char pad14[4];
    s32 *kind;
    char pad1c[0x50];
    f32 height;
    char pad70[0x90];
    s32 flags;
    char pad104[0x98];
    s32 active;
} Source;

typedef struct Aux {
    char pad0[0xC];
    s32 state;
} Aux;

typedef struct Dest {
    char pad0[0x40];
    f32 value;
    char pad44[4];
    Vec3 old_position;
    Vec3 position;
    f32 height;
    char pad64[0x69];
    u8 timer;
    char padce[0x2E];
    Aux *aux;
    char pad100[8];
    void (*callback)(Source *, struct Dest *);
} Dest;

extern f32 D_800D2988;
extern void func_80217388(void);
extern void func_80213CF8(Source *, Dest *);
extern void func_80213ED4(Source *, Dest *);

void func_802164A8(Source *src, Dest *dst) {
    if ((dst->aux != 0) && (dst->aux->state == -1)) {
        func_80217388();
    }
    if (dst->timer != 0) {
        dst->timer--;
        D_800D2988 = 0.0f;
        return;
    }
    if ((src->active != 0) && (src->kind != 0)) {
        if (*src->kind == 2) {
            dst->old_position = src->position;
            dst->height = src->height;
        }
        dst->position = src->position;
        dst->value += D_800D2988;
        if (src->flags & 0x10000) {
            func_80213CF8(src, dst);
        }
        if (dst->callback != 0) {
            dst->callback(src, dst);
        }
        func_80213ED4(src, dst);
        if (*src->kind != 2) {
            dst->old_position = src->position;
            dst->height = src->height;
        }
    }
}
