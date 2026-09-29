#include "basetypes.h"

extern void *func_802833A4(void *arg0);
extern s32 func_8022B168(void *arg0);
extern void func_80229530(void *arg0, s32 arg1, s32 arg2);
extern void func_802227D0(void *, void *, s32);
extern s32 func_80284408(void *arg0);
extern void func_8025E1E4(s32);

typedef struct func_80279A70_S1 func_80279A70_S1;
typedef struct func_80279A70_S2 func_80279A70_S2;
typedef struct func_80279A70_S3 func_80279A70_S3;
typedef struct func_80279A70_S4 func_80279A70_S4;
struct func_80279A70_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x118 - 0x4 - sizeof(u16)];
    char* unk118;
    char pad118[0x12C - 0x118 - sizeof(char*)];
    char* unk12C;
    char pad12C[0x1B8 - 0x12C - sizeof(char*)];
    s8 unk1B8;
    char pad1B8[0x1B9 - 0x1B8 - sizeof(s8)];
    s8 unk1B9;
    char pad1B9[0x1BA - 0x1B9 - sizeof(s8)];
    s8 unk1BA;
};
struct func_80279A70_S2 {
    char pad0[0x59C];
    s32 unk59C;
    char pad59C[0x5A4 - 0x59C - sizeof(s32)];
    s32 unk5A4;
    char pad5A4[0x5A8 - 0x5A4 - sizeof(s32)];
    s32 unk5A8;
};
struct func_80279A70_S3 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void* unk1D8;
};
struct func_80279A70_S4 {
    char pad0[0x18];
    char* unk18;
};

void func_80279A70(void *arg0) {
    char *actor = arg0;
    char *state;
    char *owner;
    char *resource;

    if (((func_80279A70_S1 *)(actor))->unk4 != 0x414) {
        if (((func_80279A70_S1 *)(actor))->unk4 == 0x42D) {
            state = func_802833A4(actor);
            if (((func_80279A70_S2 *)(state))->unk5A8 != 0 && func_8022B168(state) == 0) {
                func_80229530(state, ((func_80279A70_S2 *)(state))->unk5A4,
                               ((func_80279A70_S2 *)(state))->unk5A8);
            }
            goto reset_state;
        }
    } else {
reset_state:
        state = func_802833A4(actor);
        ((func_80279A70_S2 *)(state))->unk5A8 = 0;
        if (func_8022B168(state) == 0) {
            ((func_80279A70_S2 *)(state))->unk59C = 1;
        }
    }

    if (((func_80279A70_S1 *)(actor))->unk1B9 == 8 ||
        ((func_80279A70_S1 *)(actor))->unk1BA == 8 ||
        ((func_80279A70_S1 *)(actor))->unk1B8 == 8) {
        resource = ((func_80279A70_S1 *)(actor))->unk12C;
        if (resource != 0 && *(u8 *)resource == 1 &&
            (((func_80279A70_S3 *)(resource))->unk100 & 0x300000) != 0) {
            func_802227D0(((func_80279A70_S3 *)(resource))->unk1D8, resource, 2);
        }
    }

    func_80284408(actor);
    owner = ((func_80279A70_S1 *)(actor))->unk118;
    if (*(u16 *)(((func_80279A70_S4 *)(owner))->unk18 + 0xBE) != 0xFFFF) {
        func_8025E1E4((s32)actor);
    }
    if (*(u16 *)(((func_80279A70_S4 *)(owner))->unk18 + 0xC2) != 0xFFFF) {
        func_8025E1E4((s32)actor);
    }
}
