#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} Quad;

typedef struct {
    u8 pad000[0x100];
    s32 flags;
    u8 pad104[0x1DC];
    s32 value;
} Block;

extern f32 D_800D2988;
extern void func_8024BE2C(void *arg0);
extern void func_80246E34(char *);

typedef struct func_8022A94C_S1 func_8022A94C_S1;
typedef struct func_8022A94C_S2 func_8022A94C_S2;
struct func_8022A94C_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x14 - 0x8 - sizeof(Triple)];
    s32 unk14;
    char pad14[0x5C - 0x14 - sizeof(s32)];
    Quad unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Quad)];
    f32 unk6C;
    char pad6C[0x10E - 0x6C - sizeof(f32)];
    u8 unk10E;
    char pad10E[0x2E8 - 0x10E - sizeof(u8)];
    Block unk2E8;
    char pad2E8[0x86C - 0x2E8 - sizeof(Block)];
    s32 unk86C;
    char pad86C[0x11D8 - 0x86C - sizeof(s32)];
    f32 unk11D8;
};
struct func_8022A94C_S2 {
    char pad0[0x2F0];
    Triple unk2F0;
    char pad2F0[0x2FC - 0x2F0 - sizeof(Triple)];
    s32 unk2FC;
    char pad2FC[0x344 - 0x2FC - sizeof(s32)];
    Quad unk344;
    char pad344[0x354 - 0x344 - sizeof(Quad)];
    f32 unk354;
};

void func_8022A94C(void *arg0) {
    Block *base;
    s32 old_value;
    s32 new_value;
    f32 saved_value;

    base = &((func_8022A94C_S1 *)(arg0))->unk2E8;
    old_value = ((func_8022A94C_S1 *)(arg0))->unk86C;
    saved_value = D_800D2988;
    base->value = 0x10;
    base->flags &= 0xFFFDFFFF;
    func_8024BE2C(base);
    if (((func_8022A94C_S1 *)(arg0))->unk11D8 <= 0.0f) {
        func_80246E34(base);
    }
    new_value = ((func_8022A94C_S1 *)(arg0))->unk86C;
    D_800D2988 = saved_value;
    if (old_value != new_value) {
        ((func_8022A94C_S1 *)(arg0))->unk10E = 0;
    }
    ((func_8022A94C_S2 *)(arg0))->unk2F0 = ((func_8022A94C_S1 *)(arg0))->unk8;
    ((func_8022A94C_S2 *)(arg0))->unk354 = ((func_8022A94C_S1 *)(arg0))->unk6C;
    ((func_8022A94C_S2 *)(arg0))->unk2FC = ((func_8022A94C_S1 *)(arg0))->unk14;
    ((func_8022A94C_S2 *)(arg0))->unk344 = ((func_8022A94C_S1 *)(arg0))->unk5C;
}
