#include "basetypes.h"

extern f32 D_800C71E0;

extern void func_80209874(void *arg0, s32 arg1);
extern void func_80211020(void *arg0);
extern s32 func_80274544(void);
extern f32 func_80209948(void *arg0, s32 arg1);
extern void func_80208410(void *);
extern void func_80208AAC(void *arg0);

typedef struct func_8021321C_S1 func_8021321C_S1;
typedef struct func_8021321C_S2 func_8021321C_S2;
typedef struct func_8021321C_S3 func_8021321C_S3;
typedef struct func_8021321C_S4 func_8021321C_S4;
typedef struct func_8021321C_S5 func_8021321C_S5;
struct func_8021321C_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_8021321C_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_8021321C_S3 {
    char pad0[0x38];
    u32 unk38;
    char pad38[0x5D8 - 0x38 - sizeof(u32)];
    void* unk5D8;
    char pad5D8[0x650 - 0x5D8 - sizeof(void*)];
    s16 unk650;
    char pad650[0x6B0 - 0x650 - sizeof(s16)];
    u32 unk6B0;
};
struct func_8021321C_S4 {
    char pad0[0x8F];
    u8 unk8F;
};
struct func_8021321C_S5 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x320 - 0xC - sizeof(s32)];
    s32 unk320;
};

void func_8021321C(void *arg0)
{
    void *state;
    s32 random;
    s32 actor_state;
    u32 flags;

    state = ((func_8021321C_S2 *)(((func_8021321C_S1 *)(arg0))->unk1D8))->unk1454;
    if (((func_8021321C_S4 *)(((func_8021321C_S3 *)(*(void **)state))->unk5D8))->unk8F == 0) {
        func_80209874(state, 2);
        return;
    }

    func_80211020(state);
    if (--((func_8021321C_S5 *)(state))->unk320 == 0) {
        actor_state = ((func_8021321C_S3 *)(*(void **)state))->unk650;
        flags = ((func_8021321C_S3 *)(*(void **)state))->unk38;
        actor_state ^= 15;
        flags = (flags & 0x3000) != 0;
        if (actor_state != 0 && !flags) {
            ((func_8021321C_S3 *)(*(void **)state))->unk6B0 |= 0x10;
        }
    }

    if (((func_8021321C_S5 *)(state))->unk320 < 0) {
        random = func_80274544();
        ((func_8021321C_S5 *)(state))->unk320 = ((random % 5) + 3) * 15;
    }

    if (func_80209948(state, ((func_8021321C_S5 *)(state))->unkC) < D_800C71E0) {
        ((func_8021321C_S3 *)(*(void **)state))->unk6B0 |= 0x10;
    }
    func_80208410(state);
    func_80208AAC(state);
}
