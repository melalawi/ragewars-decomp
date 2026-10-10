#include "types.h"

typedef struct Body {
    /* 0x00 */ char pad0[0x5C];
    /* 0x5C */ f32 scale;
} Body;

typedef struct Mover Mover;
typedef struct Hooks Hooks;

struct Mover {
    /* 0x000 */ char pad0[0x18];
    /* 0x018 */ Body *body;
    /* 0x01C */ char pad1C[0x100 - 0x1C];
    /* 0x100 */ u32 flags;
};

struct Hooks {
    /* 0x00 */ char pad0[0x8];
    /* 0x08 */ void (*onStep)(Mover *, void *);
};

typedef struct Rider {
    /* 0x000 */ char pad0[0x30];
    /* 0x030 */ Hooks *hooks;
    /* 0x034 */ s8 mode;
    /* 0x035 */ char pad35[0x13C - 0x35];
    /* 0x13C */ f32 progress;
} Rider;

extern u8 D_8011FE88[];
extern f32 D_800D2988;

s32 func_80285F58_de(void *table, Mover *mover);
void func_80206A20_de(Mover *mover, Rider *rider);
void func_80206DD4_de(Mover *mover, Rider *rider);

void func_802079B0_de(Mover *mover, Rider *rider) {
    Body *body = (Body *)((u8 *)mover->body + 0x14);

    if (func_80285F58_de(D_8011FE88, mover) == 0) {
        mover->flags &= ~0x10000;
        mover->flags &= ~0x100;
        return;
    }
    mover->flags |= 0x10000;
    if (rider->hooks != 0 && rider->hooks->onStep != 0) {
        rider->hooks->onStep(mover, rider);
    }
    rider->progress += body->scale * D_800D2988;
    func_80206A20_de(mover, rider);
    if (rider->mode != 4) {
        func_80206DD4_de(mover, rider);
    }
}
