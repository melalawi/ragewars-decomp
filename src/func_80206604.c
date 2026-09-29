#include "basetypes.h"

extern s32 func_80245AFC(void);
extern s32 D_206724;
extern s32 D_20694C;
extern s32 D_800CD840;
typedef struct { u8 unk0; } func_80206604_G1;
extern func_80206604_G1 D_801462E5;

typedef struct func_80206604_S1 func_80206604_S1;
typedef struct func_80206604_S2 func_80206604_S2;
struct func_80206604_S1 {
    char pad0[0x2C];
    s32* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(s32*)];
    s32* unk108;
    char pad108[0x10C - 0x108 - sizeof(s32*)];
    s32* unk10C;
};
struct func_80206604_S2 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};

void func_80206604(void *arg0, void *arg1) {
    s32 flags;
    s32 flags2;

    ((func_80206604_S1 *)(arg1))->unk2C = &D_800CD840;
    ((func_80206604_S1 *)(arg1))->unk108 = &D_206724;
    flags = ((func_80206604_S2 *)(arg0))->unk100;
    flags |= 0x01000000;
    flags |= 0x02000000;
    flags2 = flags | 0x20000;
    ((func_80206604_S2 *)(arg0))->unk100 = flags2;
    if (D_801462E5.unk0 == 0) {
        ((func_80206604_S2 *)(arg0))->unk100 = flags2 | 0x10000000;
    }
    if ((((func_80206604_S2 *)(arg0))->unkE4 == 0x453) && (func_80245AFC() == 0x6F)) {
        ((func_80206604_S1 *)(arg1))->unk10C = &D_20694C;
    }
}
